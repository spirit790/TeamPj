using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;


public class Mode : MonoBehaviour
{
    [SerializeField]
    protected AIPooling aiPool;

    [SerializeField]
    protected List<GameObject> playerList = new List<GameObject>();

    int playerCount;
    int aiRatio;
    int aiCount { get { return playerCount * aiRatio; } }

    [Header("MapSize")]
    public float mapWidth;
    public float mapHeight;

    protected Vector3 aiSpawnPos { get { return new Vector3(Random.Range(-mapWidth / 2, mapWidth / 2), 0, Random.Range(-mapHeight / 2, mapHeight / 2)); } }

    protected float timeLimit;
    protected bool isGameOver = false;

    public void Set(int playerCount,int aiRatio, float timeLimit)
    {
        this.playerCount = playerCount;
        this.aiRatio = aiRatio;
        this.timeLimit = timeLimit;
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
        for (int i = 0; i < aiCount; i++)
        {
            aiPool.CreateAI(aiSpawnPos);
        }
    }
    public virtual void GameOver(){}
}
