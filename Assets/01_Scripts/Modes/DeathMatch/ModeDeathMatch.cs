using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class ModeDeathMatch : Mode
{
    public override void GameStart()
    {
        PlayerController.OnPlayerDie += RespawnPlayer;
        AIPattern.OnAIDie += RespawnAI;
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

    void RespawnAI()
    {
        if(!isGameOver)
            PhotonNetwork.InstantiateRoomObject(aiPrefab.name, SpawnPos, Quaternion.identity);
    }

    void RespawnPlayer(PlayerController player)
    {
        Debug.Log("player respawn");
        if (PhotonNetwork.IsConnected && !isGameOver)
        {
            myPlayerObject = PhotonNetwork.Instantiate(playerPrefab.name, SpawnPos, Quaternion.identity);
            Camera.main.GetComponent<FollowCam>().SetCamTarget(myPlayerObject);
        }
    }
    
}
