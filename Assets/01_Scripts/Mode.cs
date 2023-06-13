using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mode : MonoBehaviour
{
    protected int playerCount;
    int aiRatio;
    int aiCount;

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
    
    public void Set(int playerCount,float time)
    {
        this.playerCount = playerCount;
        this.timeLimit = time;
    }

    void CreateMap()
    {

    }

    void CreatePlayer()
    {
        for (int i = 0; i < playerCount; i++)
        {
            Player player = new Player();
            playerList.Add(player);
        }
    }

    void CreateAI()
    {
        for (int i = 0; i < AICount; i++)
        {
        }
    }
    public virtual void GameOver(){}
}
