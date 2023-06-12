using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModeDeathMatch : Mode
{
    public ModeDeathMatch(int playerCount, float timeLimit) : base(playerCount,timeLimit)
    {
        this.timeLimit = timeLimit;
        this.playerCount = playerCount;
    }
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
    public void Respawn(Player player)
    {
        player = new Player();
        playerList.Add(player);
    }
}
