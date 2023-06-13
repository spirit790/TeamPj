using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModeDeathMatch : Mode
{
    Queue<Player> deadPlayerList = new Queue<Player>();

    float aiRespawnTime;


    private void Awake()
    {
        Set(4, 60);
        InvokeRepeating("RespawnAI", timeLimit, aiRespawnTime);
    }

    private void Start()
    {
        CreateAI();
    }

    private void Update()
    {
        
    }
    public override void GameOver()
    {
        
    }
    public void RespawnPlayer(Player player)
    {
        player = deadPlayerList.Dequeue();
    }
    public void RespawnAI()
    {

    }
}
