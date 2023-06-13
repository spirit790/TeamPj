using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModeDeathMatch : Mode
{
    Queue<Player> deadPlayerList = new Queue<Player>();

    float AIRespawnTime;

    private void Awake()
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
