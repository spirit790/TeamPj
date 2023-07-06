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
    // �÷��̾��  AI ������ġ (��ũ�� - �÷��̾� ũ��) ��ġ�� ����
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
    /// Mode �ʱ�ȭ �� ���� �Ҵ� �Լ�
    /// </summary>
    /// <param name="playerCount">�÷��̾� ����</param>
    /// <param name="aiRatio">�÷��̾�� AI ����</param>
    /// <param name="timeLimit">���� �ð�</param>
    public virtual void Set(int playerCount, int aiRatio, float timeLimit)
    {
        this.playerCount = playerCount;
        this.aiRatio = aiRatio;
        this.timeLimit = timeLimit;
        // ���ѽð� ǥ�� �ؽ�ƮUI
        txtTimeLimit = GameObject.FindGameObjectWithTag("TimeLimit").GetComponent<Text>();
        // ���ӽ����� ���ð� ǥ��UI
        txtWaitStartTime = GameObject.FindGameObjectWithTag("WaitStartTime").GetComponent<Text>();
        // �ε��г� UI
        loadingPanel = GameObject.FindGameObjectWithTag("Loading").GetComponent<Image>();
        // ���â
        resultPanel = GameObject.FindGameObjectWithTag("Result");
        resultPanel.SetActive(false);
        GameManager.Instance.startTime = Firebase.Firestore.FieldValue.ServerTimestamp;
        // �̺�Ʈ �Լ� ���
        AIPattern.OnAIDie += AIDieControl;
        PlayerController.OnPlayerDie += PlayerDieControl;
        PlayerAttack.OnPlayerKill += PlayerKillControl;
        PlayerAttack.OnAIKill += AIKillControl;
        photonView.ViewID = 997;
        GameStart();
    }
    /// <summary>
    /// �� ����
    /// </summary>
    protected void CreateMap()
    {

    }

    /// <summary>
    /// �÷��̾� ����
    /// </summary>
    protected void CreatePlayer()
    {
        myPlayerObject = PhotonNetwork.Instantiate(playerPrefab.name, SpawnPos + new Vector3(0, 1f, 0), Quaternion.identity);

        // �̸� ����ȭ
        int viewId = myPlayerObject.GetPhotonView().ViewID;
        string playerName = PhotonNetwork.LocalPlayer.ActorNumber.ToString();
        photonView.RPC(nameof(RpcSetPlayerName), RpcTarget.All,viewId, playerName);

        // ķ �ȷο�, ���� ����
        Camera.main.GetComponent<FollowCam>().SetCamTarget(myPlayerObject);
        // �����Ǹ� ���ӸŴ����� ������ �÷��̾� ���� ����
        if (PhotonNetwork.CurrentRoom.PlayerCount > GameManager.Instance.createPlayercount)
            photonView.RPC(nameof(RpcCreatePlayer), RpcTarget.AllBufferedViaServer);
    }

    /// <summary>
    /// AI ���� �Լ�
    /// </summary>
    protected void SpawnAI()
    {
        GameObject ai = null;
        if (PhotonNetwork.IsMasterClient)
        {
            ai = PhotonNetwork.InstantiateRoomObject(aiPrefab.name, SpawnPos, Quaternion.identity);
            StartCoroutine(ai.GetComponent<AIPattern>().StopMove(waitStartTime));
        }
        aiList.Add(ai);
    }

    /// <summary>
    /// AI ����ŭ ����
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
    /// ���� ���� �� ȣ��� �Լ�
    /// </summary>
    public virtual void GameStart()
    {
        StartCoroutine(GamePlaying());
        bannerAds = GameObject.FindGameObjectWithTag("Ads").GetComponent<BannerAds>();
        interAds = GameObject.FindGameObjectWithTag("Ads").GetComponent<InterstitialAds>();
    }
    /// <summary>
    /// ���ΰ��� ���۽� ȣ��
    /// </summary>
    /// <returns></returns>
    protected IEnumerator GamePlaying()
    {
        // ��� Ŭ���̾�Ʈ�� �ʻ��� �Ҷ����� ���
        yield return new WaitUntil(() => GameManager.Instance.mapGenerateCount == PhotonNetwork.CurrentRoom.PlayerCount);

        // �÷��̾� ����
        CreatePlayer();
        // �÷��̾� ������ ���� -> ���ӽ����Ŀ� �����̰� 
        myPlayerObject.GetComponent<PlayerController>().enabled = false;
        // ��� Ŭ���̾�Ʈ�� �÷��̾� ���� �Ҷ����� ���
        yield return new WaitUntil(() => GameManager.Instance.createPlayercount == PhotonNetwork.CurrentRoom.PlayerCount);

        // AI ���� -> ������Ŭ���̾�Ʈ�� ������ ����
        CreateAI();
        // AI ���� ���
        yield return new WaitUntil(() => isCreatedAI);
        yield return new WaitForSeconds(5f);

        // �ε� ����
        loadingPanel.gameObject.SetActive(false);

        // ���ӽ��� ���ð� ����
        while (waitStartTime >= 0)
        {
            waitStartTime -= Time.deltaTime;
            txtWaitStartTime.text = Mathf.CeilToInt(waitStartTime).ToString() + "\n" + modeName;
            yield return null;
        }
        if(myPlayerObject.GetPhotonView().IsMine)
            myPlayerObject.GetComponent<PlayerController>().enabled = true;

        txtWaitStartTime.text = null;

        while (!IsGameOver)
        {
            // ���ӿ��� ��Ʈ�� �Լ� ȣ�� -> �������̵��Ͽ� ����ϱ� ����
            GameOverControl();

            yield return null;
        }
    }
    /// <summary>
    /// ���ӿ��� ���� ó��
    /// </summary>
    protected virtual void GameOverControl()
    {
        txtTimeLimit.text = string.Format("{0:0}", timeLimit);

        timeLimit -= Time.deltaTime;

        if (timeLimit <= 0)
            IsGameOver = true;
    }
    /// <summary>
    /// ���ӿ����� ȣ�� �� ó��
    /// </summary>
    protected virtual IEnumerator GameOver()
    {
        Debug.Log("��������");
        yield return new WaitUntil(() => GameManager.Instance.isDataSented);

        GameObject panel1 = resultPanel.transform.GetChild(0).gameObject;
        GameObject panel2 = resultPanel.transform.GetChild(1).gameObject;
        GameObject panel3 = resultPanel.transform.GetChild(2).gameObject;

        Dictionary<string, object> mostKiller = GameManager.Instance.GetMostPlayerKiller();
        Dictionary<string, object> winner = GameManager.Instance.GetWinner();
        Dictionary<string, object> mastAIKiller = GameManager.Instance.GetMostAIKiller();

        panel1.transform.GetChild(1).GetComponent<Text>().text = mostKiller["NickName"].ToString();
        panel1.transform.GetChild(2).GetComponent<Text>().text = mostKiller["PlayerKills"].ToString() + "Kills";

        panel2.transform.GetChild(1).GetComponent<Text>().text = winner["NickName"].ToString();
        panel2.transform.GetChild(2).GetComponent<Text>().text = winner["PlayerKills"].ToString() + "Kills";

        panel3.transform.GetChild(1).GetComponent<Text>().text = mastAIKiller["NickName"].ToString();
        panel3.transform.GetChild(2).GetComponent<Text>().text = mastAIKiller["AIKills"].ToString() + "Kills";

        resultPanel.SetActive(true);
        bannerAds.Show();
        interAds.Show();
    }

    private void AIBehaviourStop(bool isStop)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            foreach (GameObject ai in aiList)
            {
                if(ai != null)
                    ai.GetComponent<AIPattern>().enabled = !isStop;
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

    // �÷��̾ ������ ���� �÷��̾� �� ����, 1�� ������ �� ���� �¸�
    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        Debug.Log("�÷��̾� ����");
        photonView.RPC(nameof(RpcPlayerDie), RpcTarget.All);
    }
}
