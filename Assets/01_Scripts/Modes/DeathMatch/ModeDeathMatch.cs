using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class ModeDeathMatch : Mode
{
    public override void GameStart()
    {
        base.GameStart();
    }

    protected override void GameOverControl()
    {
        base.GameOverControl();
    }

    protected override void GameOver()
    {
        base.GameOver();
        Dictionary<string,object> winner = GameManager.Instance.GetMostPlayerKiller();
        if(GameManager.Instance.playerKills == int.Parse(winner["PlayerKills"].ToString()))
        {
            GameManager.Instance.IsWin = true;
        }
    }

    protected override void PlayerDieControl(PlayerController player)
    {
        GameManager.Instance.IsDead = true;
        Debug.Log("player respawn");
        if (PhotonNetwork.IsConnected && !isGameOver)
        {
            CreatePlayer();
            GameManager.Instance.IsDead = false;
        }
    }

    protected override void AIDieControl()
    {
        if (!isGameOver)
            SpawnAI();
    }

}
