using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class Mode : MonoBehaviourPunCallbacks
{
    [Header("Prefab")]
    [SerializeField] protected GameObject aiPrefab;
    [SerializeField] protected GameObject playerPrefab;

    [Header("Init Value")]
    [SerializeField] protected int playerCount;
    [SerializeField] protected float timeLimit;
    [SerializeField] protected int aiRatio;
    int AICount { get { return playerCount * aiRatio; } }

    [Header("Map Size")]
    public float mapWidth;
    public float mapHeight;

    [Header("UI")]
    [SerializeField] protected Text txtTimeLimit;
    [SerializeField] protected Text txtWaitStartTime;
    [SerializeField] protected Image loadingPanel;
    [SerializeField] protected GameObject resultPanel;

    public GameObject myPlayerObject;
    List<GameObject> aiList = new List<GameObject>();
    public string modeName;

    bool isCreatedAI = false;
    // 플레이어와  AI 스폰위치 (맵크기 - 플레이어 크기) 위치에 생성
    protected Vector3 SpawnPos 
    { 
        get 
        { 
            return new Vector3(
                Random.Range
                (playerPrefab.transform.localScale.x, mapWidth - playerPrefab.transform.localScale.x)
                , 0
                , 
                Random.Range
                (playerPrefab.transform.localScale.x, mapHeight - playerPrefab.transform.localScale.x)); 
        } 
    }

    public bool isGameOver = false;
    public bool IsGameOver
    {
        get { return isGameOver; }
        set
        {
            isGameOver = value;
            if (isGameOver)
            {
                OnGameOver();
                AIBehaviourStop(true);
                PhotonNetwork.AutomaticallySyncScene = false;
                StartCoroutine(GameOver());
            }
        }
    }
    private float waitStartTime = 3f;
    public BannerAds bannerAds;
    public InterstitialAds interAds;
    public delegate void GameOverEvent();
    public static event GameOverEvent OnGameOver;

    #region Initialize
    /// <summary>
    /// Mode 초기화 및 변수 할당 함수
    /// </summary>
    /// <param name="playerCount">플레이어 숫자</param>
    /// <param name="aiRatio">플레이어와 AI 비율</param>
    /// <param name="timeLimit">제한 시간</param>
    public virtual void Set(int playerCount, int aiRatio, float timeLimit)
    {
        this.playerCount = playerCount;
        this.aiRatio = aiRatio;
        this.timeLimit = timeLimit;
        // 제한시간 표시 텍스트UI
        txtTimeLimit = GameObject.FindGameObjectWithTag("TimeLimit").GetComponent<Text>();
        // 게임시작전 대기시간 표시UI
        txtWaitStartTime = GameObject.FindGameObjectWithTag("WaitStartTime").GetComponent<Text>();
        // 로딩패널 UI
        loadingPanel = GameObject.FindGameObjectWithTag("Loading").GetComponent<Image>();
        // 결과창
        resultPanel = GameObject.FindGameObjectWithTag("Result");
        resultPanel.SetActive(false);
        GameManager.Instance.startTime = Firebase.Firestore.FieldValue.ServerTimestamp;
        // 이벤트 함수 등록
        AIPattern.OnAIDie += AIDieControl;
        PlayerController.OnPlayerDie += PlayerDieControl;
        PlayerAttack.OnPlayerKill += PlayerKillControl;
        PlayerAttack.OnAIKill += AIKillControl;
        photonView.ViewID = 997;
        GameStart();
    }
    /// <summary>
    /// 맵 생성
    /// </summary>
    protected void CreateMap()
    {

    }

    /// <summary>
    /// 플레이어 생성
    /// </summary>
    protected void CreatePlayer()
    {
        myPlayerObject = PhotonNetwork.Instantiate(playerPrefab.name, SpawnPos + new Vector3(0, 1f, 0), Quaternion.identity);

        // 이름 동기화
        int viewId = myPlayerObject.GetPhotonView().ViewID;
        string playerName = PhotonNetwork.LocalPlayer.ActorNumber.ToString();
        photonView.RPC(nameof(RpcSetPlayerName), RpcTarget.All,viewId, playerName);

        // 캠 팔로우, 비전 설정
        Camera.main.GetComponent<FollowCam>().SetCamTarget(myPlayerObject);
        // 생성되면 게임매니저의 생성된 플레이어 갯수 증가
        if (PhotonNetwork.CurrentRoom.PlayerCount > GameManager.Instance.createPlayercount)
            photonView.RPC(nameof(RpcCreatePlayer), RpcTarget.AllBufferedViaServer);
    }

    /// <summary>
    /// AI 생성 함수
    /// </summary>
    protected void SpawnAI()
    {
        GameObject ai = null;
        if (PhotonNetwork.IsMasterClient)
        {
            ai = PhotonNetwork.InstantiateRoomObject(aiPrefab.name, SpawnPos, Quaternion.identity);
        }
        aiList.Add(ai);
    }

    /// <summary>
    /// AI 수만큼 생성
    /// </summary>
    public void CreateAI()
    {
        for (int i = 0; i < AICount; i++)
        {
            SpawnAI();
        }
        if(PhotonNetwork.IsMasterClient)
            photonView.RPC(nameof(RpcCreateAI), RpcTarget.AllBufferedViaServer);
    }
    #endregion

    #region GameControl
    /// <summary>
    /// 게임 시작 시 호출될 함수
    /// </summary>
    public virtual void GameStart()
    {
#if UNITY_ANDROID
        Application.targetFrameRate = 30;
#else
                QualitySettings.vSyncCount = 1;
#endif

        bannerAds = GameObject.FindGameObjectWithTag("Ads").GetComponent<BannerAds>();
        interAds = GameObject.FindGameObjectWithTag("Ads").GetComponent<InterstitialAds>();
        StartCoroutine(GamePlaying());
    }
    /// <summary>
    /// 메인게임 시작시 호출
    /// </summary>
    /// <returns></returns>
    protected IEnumerator GamePlaying()
    {
        bannerAds.Show();
        // 모든 클라이언트가 맵생성 할때까지 대기
        yield return new WaitUntil(() => GameManager.Instance.mapGenerateCount == PhotonNetwork.CurrentRoom.PlayerCount);

        // 플레이어 생성
        CreatePlayer();
        // 플레이어 움직임 제한 -> 게임시작후에 움직이게 
        myPlayerObject.GetComponent<PlayerController>().enabled = false;
        // 모든 클라이언트가 플레이어 생성 할때까지 대기
        yield return new WaitUntil(() => GameManager.Instance.createPlayercount == PhotonNetwork.CurrentRoom.PlayerCount);

        // AI 생성 -> 마스터클라이언트가 생성후 관리
        CreateAI();

        AIBehaviourStop(true);

        // AI 생성 대기
        yield return new WaitUntil(() => isCreatedAI);
        yield return new WaitForSeconds(5f);

        bannerAds.Hide();
        // 로딩 종료
        loadingPanel.gameObject.SetActive(false);


        // 게임시작 대기시간 시작
        while (waitStartTime >= 0)
        {
            waitStartTime -= Time.deltaTime;
            txtWaitStartTime.text = Mathf.CeilToInt(waitStartTime).ToString() + "\n" + modeName;
            yield return null;
        }
        if(myPlayerObject.GetPhotonView().IsMine)
            myPlayerObject.GetComponent<PlayerController>().enabled = true;

        AIBehaviourStop(false);

        txtWaitStartTime.text = null;

        while (!IsGameOver)
        {
            // 게임오버 컨트롤 함수 호출 -> 오버라이드하여 사용하기 위해
            GameOverControl();

            yield return null;
        }
    }
    /// <summary>
    /// 게임오버 조건 처리
    /// </summary>
    protected virtual void GameOverControl()
    {
        txtTimeLimit.text = string.Format("{0:0}", timeLimit);

        timeLimit -= Time.deltaTime;

        if (timeLimit <= 0)
            IsGameOver = true;
    }
    /// <summary>
    /// 게임오버시 호출 및 처리
    /// </summary>
    protected virtual IEnumerator GameOver()
    {
        AIPattern.OnAIDie -= AIDieControl;
        PlayerController.OnPlayerDie -= PlayerDieControl;
        PlayerAttack.OnPlayerKill -= PlayerKillControl;
        PlayerAttack.OnAIKill -= AIKillControl;
        Debug.Log("게임종료");
        yield return new WaitUntil(() => GameManager.Instance.isDataSented);

        if (PhotonNetwork.IsMasterClient)
        {
            Dictionary<string, object> mostKiller = GameManager.Instance.GetMostPlayerKiller();
            Dictionary<string, object> winner = GameManager.Instance.GetWinner();
            Dictionary<string, object> mostAIKiller = GameManager.Instance.GetMostAIKiller();

            photonView.RPC(nameof(RpcShowResult), RpcTarget.All,
                mostKiller["NickName"].ToString(), mostKiller["PlayerKills"].ToString(),
                winner["NickName"].ToString(), winner["PlayerKills"].ToString(),
                mostAIKiller["NickName"].ToString(), mostAIKiller["AIKills"].ToString());


        }
    }

    private void AIBehaviourStop(bool isStop)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            foreach (GameObject ai in aiList)
            {
                if (ai != null)
                    ai.GetComponent<AIPattern>().Stop(isStop);
                //if (ai != null)
                //    ai.GetComponent<AIPattern>().Stop(isStop);
            }
        }
    }

    protected virtual void PlayerDieControl(PlayerController player)
    {
        GameManager.Instance.IsDead = true;
        photonView.RPC(nameof(RpcPlayerDie), RpcTarget.All);
    }

    protected virtual void AIDieControl()
    {

    }

    protected virtual void PlayerKillControl()
    {
        GameManager.Instance.playerKills += 1;
        
    }

    protected virtual void AIKillControl()
    {
        GameManager.Instance.aiKills += 1;
    }
    #endregion
    [PunRPC]
    protected void RpcPlayerDie()
    {
        GameManager.Instance.PlayersLeft -= 1;
        
        if (GameManager.Instance.PlayersLeft == 1)
        {
            if (!GameManager.Instance.IsDead)
            {
                GameManager.Instance.IsWin = true;
                Debug.LogWarning("win");
            }
            IsGameOver = true;
        }
    }

    [PunRPC]
    protected void RpcShowResult(string panel1Name, string panel1Kills, string panel2Name, string panel2Kills, string panel3Name, string panel3Kills)
    {
        GameObject panel1 = resultPanel.transform.GetChild(0).gameObject;
        GameObject panel2 = resultPanel.transform.GetChild(1).gameObject;
        GameObject panel3 = resultPanel.transform.GetChild(2).gameObject;

        panel1.transform.GetChild(1).GetComponent<Text>().text = panel1Name;
        panel1.transform.GetChild(2).GetComponent<Text>().text = panel1Kills;

        panel2.transform.GetChild(1).GetComponent<Text>().text = panel2Name;
        panel2.transform.GetChild(2).GetComponent<Text>().text = panel2Kills;

        panel3.transform.GetChild(1).GetComponent<Text>().text = panel3Name;
        panel3.transform.GetChild(2).GetComponent<Text>().text = panel3Kills;
        resultPanel.SetActive(true);

        if (!GameManager.Instance.IsWin)
        {
            bannerAds.Show();
            interAds.Show();
        }
    }

    [PunRPC]
    protected void RpcCreatePlayer()
    {
        GameManager.Instance.createPlayercount++;
    }

    [PunRPC]
    protected void RpcSetPlayerName(int viewId,string playerName)
    {
        PhotonView.Find(viewId).name = playerName;
    }

    [PunRPC]
    protected void RpcCreateAI()
    {
        isCreatedAI = true;
    }

    // 플레이어가 나가면 남은 플레이어 수 감소, 1명 남았을 시 게임 승리
    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        Debug.Log("플레이어 나감");
        photonView.RPC(nameof(RpcPlayerDie), RpcTarget.All);
    }
}
