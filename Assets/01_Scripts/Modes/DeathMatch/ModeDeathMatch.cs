using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;

public class ModeDeathMatch : Mode
{
    public override void GameStart()
    {
        PlayerController.OnPlayerDie += RespawnPlayer;
        base.GameStart();
    }

    protected override void GameOverControl()
    {
        base.GameOverControl();
    }

    protected override void GameOver()
    {
        base.GameOver();
    }
    void RespawnPlayer(PlayerController player)
    {
        Debug.Log("player respawn");
    }
    
}
