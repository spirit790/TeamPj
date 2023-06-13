using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mode : MonoBehaviour
{
    protected int playerCount;
    int aiRatio;
    public int aiCount;

    public int AICount
    {
        get
        {
            return aiCount;
        }
        set
        {
            aiCount = playerCount * aiRatio;
        }
    }

    protected float timeLimit;

    protected bool isGameOver = false;
    protected List<Player> playerList = new List<Player>();

    public GameObject aiPrefab;

    public void Set(int playerCount,float time)
    {
        this.playerCount = playerCount;
        this.timeLimit = time;
    }

    protected void CreateMap()
    {

    }

    protected void CreatePlayer()
    {
        for (int i = 0; i < playerCount; i++)
        {
            Player player = new Player();
            playerList.Add(player);
        }
    }

    protected void CreateAI()
    {
        for (int i = 0; i < AICount; i++)
        {
            aiPrefab.GetComponent<AI>().CreateAI(new Vector3(Random.Range(0,41),0, Random.Range(0, 41)));
        }
    }
    public virtual void GameOver(){}
}
