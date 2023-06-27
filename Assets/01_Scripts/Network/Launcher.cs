using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using Photon.Realtime;

//[RequireComponent(typeof(PrefabPool))]
public class Launcher : MonoBehaviourPunCallbacks
{
	string gameVersion = "1";

    [SerializeField ]Button btnMatch;
    [SerializeField ]Button btnCreate;
    [SerializeField ]Button btnJoin;

    private void Awake()
    {
        btnMatch.interactable = false;
        btnJoin.interactable = false;
        btnCreate.interactable = false;
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
        btnMatch.interactable = true;
        btnJoin.interactable = true;
        btnCreate.interactable = true;
        Debug.Log("User Id : " + PhotonNetwork.LocalPlayer.UserId);
    }
}