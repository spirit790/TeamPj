using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class ModeDeathMatch : Mode
{
    int targetKill;
    int targetKillRatio = 3;
    public override void GameStart()
    {
        base.GameStart();
        targetKill = playerCount * targetKillRatio;
    }

    protected override void GameOverControl()
    {
        base.GameOverControl();
        txtTimeLimit.text = targetKill.ToString();
        txtTimeLimit.text += "\n" + GameManager.Instance.playerKills;
    }

    protected override void PlayerKillControl()
    {
        base.PlayerKillControl();
        if (targetKill == GameManager.Instance.playerKills)
        {
            GameManager.Instance.IsWin = true;
            photonView.RPC(nameof(PunGameOver), RpcTarget.All);
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

    [PunRPC]
    void PunGameOver()
    {
        isGameOver = true;
    }
}
