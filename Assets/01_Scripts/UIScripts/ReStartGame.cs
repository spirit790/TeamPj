using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;

public class ReStartGame : MonoBehaviourPun
{
    void Start()
    {
        
    }

    void Update()
    {
        
    }

    public void BtnReStartGame()
    {
        if(int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[GameManager.Instance.KeySystem].ToString()) == 0)
        {
            PhotonNetwork.LeaveRoom();
            GameManager.Instance.isReMatch = true;
            SceneManager.LoadScene(1);
        }
        else if(int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[GameManager.Instance.KeySystem].ToString()) == 1)
        {
            GameManager.Instance.isReInvite = true;
            SceneManager.LoadScene(1);
        }
    }

    public void BtnExitGame()
    {
        PhotonNetwork.LeaveRoom();
        SceneManager.LoadScene(1);
    }
}
