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
            diedAICount = value;
            StartCoroutine(AIRespawn());
        }
    }
    public override void GameStart()
    {
        base.GameStart();
        txtTimeLimit.transform.GetChild(0).gameObject.SetActive(false);
        txtTimeLimit.transform.GetChild(1).gameObject.SetActive(true);
        targetKill = playerCount * targetKillRatio;
    }

    protected override void GameOverControl()
    {
        txtTimeLimit.text = GameManager.Instance.playerKills + " / " + targetKill.ToString();
    }

    protected override void PlayerKillControl()
    {
        base.PlayerKillControl();
        if (targetKill == GameManager.Instance.playerKills)
        {
            txtTimeLimit.text += GameManager.Instance.playerKills + " / " + targetKill.ToString();
            GameManager.Instance.IsWin = true;
            photonView.RPC(nameof(PunGameOver), RpcTarget.All);
        }
    }

    protected override void PlayerDieControl(PlayerController player)
    {
        GameManager.Instance.IsDead = true;
        if (PhotonNetwork.IsConnected && !isGameOver)
        {
            StartCoroutine(PlayerRespawn());
        }
    }

    protected override void AIDieControl()
    {
        DiedAICount++;
    }

    IEnumerator PlayerRespawn()
    {
        yield return new WaitForSeconds(playerRespawnTime);
        if (GameManager.Instance.IsDead)
        {
            Debug.Log("respawn");
            myPlayerObject.transform.position = SpawnPos;
            photonView.RPC(nameof(RpcPlayerRespawn), RpcTarget.All, myPlayerObject.GetPhotonView().ViewID);
        }
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
        IsGameOver = true;
    }

    [PunRPC]
    void RpcPlayerRespawn(int viewId)
    {
        PhotonView.Find(viewId).gameObject.SetActive(true);
    }
}
