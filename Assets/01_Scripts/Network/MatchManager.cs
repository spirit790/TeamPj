using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class MatchManager : MonoBehaviourPunCallbacks
{
    private static MatchManager instance;
    public MatchManager Instance
    {
        get { return instance; }
        set
        {
            DontDestroyOnLoad(gameObject);
        }
    }
    private void Awake()
    {
        if (Instance == null)
            Instance = instance;
        else
            Destroy(gameObject);
    }   
    private int roomCount = 0;
    public void Match()
    {
        PhotonNetwork.JoinRandomRoom();
        if (PhotonNetwork.CountOfPlayersInRooms >= 2)
            PhotonNetwork.LoadLevel(1);
        Debug.Log(PhotonNetwork.CountOfPlayersInRooms);
    }

    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        Debug.Log(roomCount);
        PhotonNetwork.CreateRoom("s");
        roomCount++;
    }
    public override void OnJoinedRoom()
    {
        Debug.Log("dd");
    }
}
