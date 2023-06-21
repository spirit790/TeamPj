using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;

[RequireComponent(typeof(PrefabPool))]
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
			DontDestroyOnLoad(gameObject);
		}
	}


	public PhotonView playerPrefab;
    private void Awake()
    {
		if (Instance == null)
			Instance = instance;
		else
			Destroy(gameObject);
		PhotonNetwork.AutomaticallySyncScene = true;
		PhotonNetwork.ConnectUsingSettings();
	}
	
	public void StartGame()
    {
		if (PhotonNetwork.IsMasterClient)
        {
			Debug.Log(PhotonNetwork.CountOfRooms);
			PhotonNetwork.LoadLevel(1);
		}
		else
			Debug.Log("Not Master Client");
	}

	public override void OnConnectedToMaster()
	{
		Debug.Log("Connected to Master");
	}
}