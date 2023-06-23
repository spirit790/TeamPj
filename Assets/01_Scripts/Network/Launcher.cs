using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using Photon.Realtime;

[RequireComponent(typeof(PrefabPool))]
public class Launcher : MonoBehaviourPunCallbacks
{
	string gameVersion = "1";

    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
        PhotonNetwork.AutomaticallySyncScene = true;
    }

    private void Start()
    {
		Connect();
    }
    
    public void Connect()
    {
        PhotonNetwork.LocalPlayer.NickName = Social.localUser.id;
        PhotonNetwork.GameVersion = gameVersion;
        PhotonNetwork.ConnectUsingSettings();
    }
    
    public override void OnConnectedToMaster()
    {
        Debug.Log("User Id : " + PhotonNetwork.LocalPlayer.UserId);
    }
}