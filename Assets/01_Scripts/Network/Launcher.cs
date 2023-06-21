using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;

public class Launcher : MonoBehaviourPunCallbacks
{
	private static Launcher instance;
	public Launcher Instance
    {
        get
        {
			return instance;
        }
        set
        {
			if (instance == null)
			{
				instance = this;
			}
			else
			{
				Destroy(gameObject);
			}
			DontDestroyOnLoad(gameObject);
		}
	}


	public PhotonView playerPrefab;
    private void Awake()
    {
		if(Instance == null)
			Instance = instance;
		PhotonNetwork.AutomaticallySyncScene = true;
		PhotonNetwork.ConnectUsingSettings();
	}
	
	public void StartGame()
    {
		if (PhotonNetwork.IsConnected)
        {
			PhotonNetwork.LoadLevel(1);
		}
		else
			Debug.Log("Not ready");
	}

	public override void OnConnectedToMaster()
	{
		Debug.Log("Connected to Master");
		PhotonNetwork.JoinRandomOrCreateRoom();
	}


}