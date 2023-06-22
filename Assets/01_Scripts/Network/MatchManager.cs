using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using Photon.Realtime;

public class MatchManager : MonoBehaviourPunCallbacks
{
    public static MatchManager instance;
    
    public PhotonView playerPrefab;
    private bool isMatchSuccess = false;
    private bool isNewPlayerInMatch = false;
    private bool IsMatchSuccess
    {
        get { return isMatchSuccess; }
        set
        {
            isMatchSuccess = value;
            if (value == true)
            {
                Debug.Log("Start");
                StartCoroutine(MatchSuccess());
            }
        }
    }
    private float matchTimer;
    [SerializeField] Text matchTxt;
    [SerializeField] Text matchTimeTxt;

    const int MATCHNUM_MIN = 2;
    const int MATCHNUM_MAX = 8;

    private void Awake()
    {
        if (instance == null)
            instance = this;
        else
            Destroy(instance);
    }

    public void Match()
    {
        this.enabled = true;
        if (PhotonNetwork.IsConnectedAndReady)
        {
            PhotonNetwork.JoinRandomRoom();
            StartCoroutine(Matching());
        }
        else
        {
            Debug.Log("Not ready");
        }
    }
    
    IEnumerator Matching()
    {
        matchTxt.text = "Matcing";
        while (!IsMatchSuccess)
        {
            matchTimer += Time.deltaTime;
            matchTimeTxt.text = string.Format("{0:0}", matchTimer);
            yield return null;
        }
    }
    IEnumerator WaitMatch()
    {
        float waitTime = 10f;
        while (waitTime >= 0)
        {
            waitTime -= Time.deltaTime;
            if (isNewPlayerInMatch)
            {
                waitTime = 10f;
                isNewPlayerInMatch = false;
            }
            yield return null;
        }
        matchTxt.text = "Matcing Success";
        IsMatchSuccess = true;
    }
    IEnumerator MatchSuccess()
    {
        float waitTime = 5f;
        while (waitTime >= 0)
        {
            waitTime -= Time.deltaTime;
            matchTimeTxt.text = string.Format("{0:0}", waitTime);
            
            yield return null;
        }
        if (PhotonNetwork.IsMasterClient)
        {
            Debug.Log("Master");
            PhotonNetwork.CurrentRoom.IsOpen = false;
            PhotonNetwork.LoadLevel(1);
        }
    }
    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        if (!PhotonNetwork.InRoom)
            PhotonNetwork.CreateRoom(null, new RoomOptions());
    }

    public override void OnJoinedRoom()
    {
        if (PhotonNetwork.CurrentRoom.PlayerCount >= MATCHNUM_MIN)
        {
            StartCoroutine(WaitMatch());
        }
        Debug.Log($"Join Room : {PhotonNetwork.CurrentRoom.Name} , {PhotonNetwork.CurrentRoom.PlayerCount}");
    }

    public override void OnCreatedRoom()
    {
        Debug.Log($"CreateRoom{PhotonNetwork.CurrentRoom}");
    }

    public override void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
    {
        if (PhotonNetwork.CurrentRoom.PlayerCount >= MATCHNUM_MIN)
        {
            StartCoroutine(WaitMatch());
        }
        if(PhotonNetwork.CurrentRoom.PlayerCount >= MATCHNUM_MIN + 1)
        {
            isNewPlayerInMatch = true;
        }
    }
}