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
        if(!PhotonNetwork.IsConnected)
		    Connect();
        else
        {
            btnMatch.interactable = true;
            btnJoin.interactable = true;
            btnCreate.interactable = true;
            if (GameManager.Instance.isReMatch)
                btnMatch.onClick.Invoke();
            else if (GameManager.Instance.isReInvite)
                btnCreate.onClick.Invoke();
        }
    }
    
    public void Connect()
    {

        PhotonNetwork.GameVersion = gameVersion;
        PhotonNetwork.ConnectUsingSettings();
    }
    
    public override void OnConnectedToMaster()
    {
        btnMatch.interactable = true;
        btnJoin.interactable = true;
        btnCreate.interactable = true;
        Debug.Log("User Id : " + PhotonNetwork.LocalPlayer.UserId);
#if UNITY_ANDROID
        PhotonNetwork.LocalPlayer.NickName = Social.localUser.id;
#endif
#if UNITY_EDITOR_WIN
        PhotonNetwork.LocalPlayer.NickName = PhotonNetwork.LocalPlayer.UserId;
#endif
    }
}