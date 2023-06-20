using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using UnityEngine.UI;

public class Mode : MonoBehaviour
{
    [SerializeField]
    protected AIPool aiPool;

    [SerializeField]
    GameObject playerPrefab;
    
    [SerializeField]
    protected List<GameObject> playerList = new List<GameObject>();

    int playerCount;
    int aiRatio;
    int AICount { get { return playerCount * aiRatio; } }

    [Header("맵 사이즈")]
    public float mapWidth;
    public float mapHeight;

    protected Vector3 AISpawnPos { get { return new Vector3(Random.Range(-mapWidth / 2, mapWidth / 2), 0, Random.Range(-mapHeight / 2, mapHeight / 2)); } }

    protected float timeLimit;
    public bool isGameOver = false;

    [Header("테스트용")]
    public Text txt;

    /// <summary>
    /// Mode 초기화 및 변수 할당 함수
    /// </summary>
    /// <param name="playerCount">플레이어 숫자</param>
    /// <param name="aiRatio">플레이어와 AI 비율</param>
    /// <param name="timeLimit">제한 시간</param>
    public virtual void Set(int playerCount,int aiRatio, float timeLimit)
    {
        this.playerCount = playerCount;
        this.aiRatio = aiRatio;
        this.timeLimit = timeLimit;
    }

    public virtual void GameStart()
    {
        CreateAI();
        StartCoroutine(GamePlaying());
    }

    /// <summary>
    /// 메인게임 시작시 호출
    /// </summary>
    /// <returns></returns>
    protected IEnumerator GamePlaying()
    {
        while (!isGameOver)
        {
            txt.text = string.Format("{0:0}", timeLimit);

            GameOverControl();

            yield return null;
        }

        yield return null;

        if (isGameOver)
            GameOver();
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
        
    }

    /// <summary>
    /// AI 생성
    /// </summary>
    protected void CreateAI()
    {
        for (int i = 0; i < AICount; i++)
        {
           aiPool.Spawn(AISpawnPos);
        }
    }

    /// <summary>
    /// 게임오버 조건 처리
    /// </summary>
    protected virtual void GameOverControl()
    {
        timeLimit -= Time.deltaTime;

        if (timeLimit <= 0)
            isGameOver = true;
    }

    /// <summary>
    /// 게임오버시 호출 및 처리
    /// </summary>
    protected virtual void GameOver()
    {
        foreach (var item in GameObject.FindGameObjectsWithTag("AI"))
        {
            item.GetComponent<AIPattern>().enabled = false;
        }
        Debug.Log("게임종료");
    }

}
