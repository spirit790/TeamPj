using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;

public class ReStartGame : MonoBehaviourPunCallbacks
{
    public void BtnReStartGame()
    {
        if(int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[GameManager.Instance.KeySystem].ToString()) == 0)
        {
            PhotonNetwork.LeaveRoom();
            GameManager.Instance.isReMatch = true;
        }
        else if(int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[GameManager.Instance.KeySystem].ToString()) == 1)
        {
            GameManager.Instance.isReInvite = true;
            SceneManager.LoadScene(1);
        }
    }

    public void BtnExitGame()
    {
        PhotonNetwork.AutomaticallySyncScene = false;
        PhotonNetwork.LeaveRoom();
    }

    public override void OnLeftRoom()
    {
        SceneManager.LoadScene(1);
    }
}
