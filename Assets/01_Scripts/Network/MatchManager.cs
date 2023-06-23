using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using Photon.Realtime;

public class MatchManager : MonoBehaviourPunCallbacks
{
    public PhotonView playerPrefab;
    private bool isMatchSuccess = false;
    private bool IsMatchSuccess
    {
        get { return isMatchSuccess; }
        set
        {
            isMatchSuccess = value;
            if (value == true)
            {
                PhotonNetwork.CurrentRoom.IsOpen = false;
                Debug.Log("Start");
                StartCoroutine(MatchSuccess());
            }
        }
    }

    [Header("매치 시간 설정")]
    private float matchTimer;
    private float waitTime;
    public const float DEFAULT_WAIT_TIME = 10f;

    [Header("매치 인원 설정")]
    [SerializeField] const int MATCH_COUNT_MIN = 2;
    [SerializeField] const int MATCH_COUNT_MAX = 8;

    [SerializeField] Text matchTxt;
    [SerializeField] Text matchTimeTxt;

    Coroutine waitCoroutine;

    #region Match Method
    public void Match()
    {
        if (PhotonNetwork.IsConnectedAndReady)
        {
            this.enabled = true;
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
        Debug.Log("WaitMatch");
        while (waitTime >= 0)
        {
            waitTime -= Time.deltaTime;

            if(PhotonNetwork.CurrentRoom.PlayerCount == MATCH_COUNT_MAX)
                IsMatchSuccess = true;
            yield return null;
        }
        IsMatchSuccess = true;
    }
    IEnumerator MatchSuccess()
    {
        StopCoroutine(Matching());
        matchTxt.text = "Matcing Success";
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
            yield return new WaitForSeconds(PhotonNetwork.LevelLoadingProgress);
            PhotonNetwork.LoadLevel(1);
        }
    }
    [PunRPC]
    public void WaitTimeSet()
    {
        if (PhotonNetwork.CurrentRoom.PlayerCount != MATCH_COUNT_MAX)
        {
            int waitCount = PhotonNetwork.CurrentRoom.PlayerCount - MATCH_COUNT_MIN;
            waitTime = DEFAULT_WAIT_TIME / waitCount;
        }
        Debug.Log("waitTimeSet");
    }
    #endregion

    #region Photon Override Method
    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        if (!PhotonNetwork.InRoom)
            PhotonNetwork.CreateRoom(null, new RoomOptions());
    }
    public override void OnJoinedRoom()
    {
        if (PhotonNetwork.CurrentRoom.PlayerCount >= MATCH_COUNT_MIN)
        {
            waitCoroutine = StartCoroutine(WaitMatch());
            photonView.RPC("WaitTimeSet", RpcTarget.All);
        }
        Debug.Log($"Join Room : {PhotonNetwork.CurrentRoom.Name} , {PhotonNetwork.CurrentRoom.PlayerCount}");
    }
    public override void OnCreatedRoom()
    {
        Debug.Log($"CreateRoom{PhotonNetwork.CurrentRoom}");
    }
    public override void OnPlayerEnteredRoom(Photon.Realtime.Player newPlayer)
    {
        if (PhotonNetwork.CurrentRoom.PlayerCount >= MATCH_COUNT_MIN)
        {
            if(waitCoroutine != null)
                StopCoroutine(waitCoroutine);
            waitCoroutine = StartCoroutine(WaitMatch());
        }
    }
    #endregion
}