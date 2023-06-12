using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Mode : MonoBehaviour
{
    protected int playerCount;
    int AIRatio;
    int AICount 
    {
        get
        {
            return AICount;
        }
        set
        {
            AICount = playerCount * AIRatio;
        }
    }

    protected float timeLimit;

    protected bool isGameOver = false;
    protected List<Player> playerList = new List<Player>();

    public Mode(int playerCount, float timeLimit)
    {
        this.playerCount = playerCount;
        this.timeLimit = timeLimit;
    }


    protected virtual void Start()
    {
        CreateMap();
        CreatePlayer();
        CreateAI();
    }

    protected virtual void Update()
    {
        timeLimit -= Time.deltaTime;
        if(timeLimit <= 0)
        {
            isGameOver = true;
        }
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
