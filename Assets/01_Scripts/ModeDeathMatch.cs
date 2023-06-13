using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModeDeathMatch : Mode
{
    Queue<Player> deadPlayerList = new Queue<Player>();
    
    protected override void Start()
    {
        base.Start();
    }

    protected override void Update()
    {
        base.Update();
        if (isGameOver)
            GameOver();
    }
    public override void GameOver()
    {
        
    }
    public void RespawnPlayer(Player player)
    {
        player = deadPlayerList.Dequeue();
    }
}
