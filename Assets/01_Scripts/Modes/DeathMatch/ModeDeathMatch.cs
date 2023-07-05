using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class ModeDeathMatch : Mode
{
    int targetKill;
    int targetKillRatio = 2;

    float playerRespawnTime = 2f;
    float AIRespawnTime { get { return Random.Range(1, 5f); } }

    int diedAICount;
    int DiedAICount
    {
        get { return diedAICount; }
        set
        {
            diedAICount++;
            StartCoroutine(AIRespawn());
        }
    }
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
            StartCoroutine(PlayerRespawn());
        }
    }

    protected override void AIDieControl()
    {
        if (!isGameOver)
        {
            photonView.RPC(nameof(SetDiedAICount), RpcTarget.MasterClient);
        }
    }

    IEnumerator PlayerRespawn()
    {
        yield return new WaitForSeconds(playerRespawnTime);
        CreatePlayer();
        GameManager.Instance.IsDead = false;
    }

    IEnumerator AIRespawn()
    {
        if(DiedAICount > 0)
        {
            yield return new WaitForSeconds(AIRespawnTime);
            SpawnAI();
            DiedAICount--;
        }
    }

    [PunRPC]
    void SetDiedAICount()
    {
        DiedAICount++;
    }

    [PunRPC]
    void PunGameOver()
    {
        isGameOver = true;
    }
}
