using System.Collections;
using System.Collections.Generic;
using UnityEngine;
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

    public GameObject myPlayerObject;
    List<GameObject> aiList = new List<GameObject>();
    public string modeName;

    protected Vector3 AISpawnPos { get { return new Vector3(Random.Range(0,mapWidth), 0, Random.Range(0,mapHeight)); } }

    public bool isGameOver = false;
    public bool IsGameOver
    {
        get { return isGameOver; }
        set
        {
            isGameOver = value;
            if (isGameOver)
                OnGameOver();
        }
    }
    private float waitStartTime = 3f;

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
        txtTimeLimit = GameObject.FindGameObjectWithTag("TimeLimit").GetComponent<Text>();
        txtWaitStartTime = GameObject.FindGameObjectWithTag("WaitStartTime").GetComponent<Text>();
        GameManager.Instance.startTime = Firebase.Firestore.FieldValue.ServerTimestamp;
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
        myPlayerObject = PhotonNetwork.Instantiate(playerPrefab.name, AISpawnPos + new Vector3(0, 0.5f, 0), Quaternion.identity);
        myPlayerObject.GetComponent<PlayerController>().enabled = false;
        // set name
        myPlayerObject.name = PhotonNetwork.LocalPlayer.ActorNumber.ToString();
        // set follow camera
        Camera.main.GetComponent<FollowCam>().SetCamTarget(myPlayerObject);
    }

    /// <summary>
    /// AI 생성
    /// </summary>
    public void CreateAI()
    {
        for (int i = 0; i < AICount; i++)
        {
            GameObject ai = PhotonNetwork.InstantiateRoomObject(aiPrefab.name, AISpawnPos, Quaternion.identity);
            if (PhotonNetwork.IsMasterClient)
            {
                StartCoroutine(ai.GetComponent<AIPattern>().StopMove(waitStartTime));
            }
            aiList.Add(ai);
        }
    }
    #endregion

    #region GameControl
    /// <summary>
    /// 게임 시작 시 호출될 함수
    /// </summary>
    public virtual void GameStart()
    {
        StartCoroutine(GamePlaying());
    }
    /// <summary>
    /// 메인게임 시작시 호출
    /// </summary>
    /// <returns></returns>
    protected IEnumerator GamePlaying()
    {
        CreatePlayer();
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

            GameOverControl();

            yield return null;
        }

        yield return null;

        if (IsGameOver)
            GameOver();
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
    protected virtual void GameOver()
    {
        AIBehaviourStop(true);
        Debug.Log("게임종료");
    }

    private void AIBehaviourStop(bool isStop)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            foreach (GameObject ai in aiList)
            {
                ai.GetComponent<AIPattern>().enabled = !isStop;
            }
        }
    }
    #endregion
}
