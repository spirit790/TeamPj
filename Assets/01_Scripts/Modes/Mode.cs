using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;


public class Mode : MonoBehaviour
{
    [SerializeField]
    protected AIPooling aiPool;

    [SerializeField]
    protected List<GameObject> playerList = new List<GameObject>();

    int playerCount;
    int aiRatio;
    int AICount { get { return playerCount * aiRatio; } }

    [Header("맵 사이즈")]
    public float mapWidth;
    public float mapHeight;

    protected Vector3 aiSpawnPos { get { return new Vector3(Random.Range(-mapWidth / 2, mapWidth / 2), 0, Random.Range(-mapHeight / 2, mapHeight / 2)); } }

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
    protected IEnumerator GamePlaying()
    {
        while (!isGameOver)
        {
            timeLimit -= Time.deltaTime;
            txt.text = string.Format("{0:0}", timeLimit);

            if (timeLimit <= 0)
                isGameOver = true;
            yield return null;
        }

        yield return null;

        if (isGameOver)
            GameOver();
    }

    protected void CreateMap()
    {

    }

    protected void CreatePlayer()
    {
        for (int i = 0; i < playerCount; i++)
        {
        }
    }

    protected void CreateAI()
    {
        for (int i = 0; i < AICount; i++)
        {
            aiPool.PoolAI(aiSpawnPos);
        }
    }
    protected virtual void GameOver()
    {
        foreach (var item in aiPool.GetComponentsInChildren<AIPattern>())
        {
            item.enabled = false;
        }
        Debug.Log("게임종료");
    }
}
