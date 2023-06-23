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
    private bool isMatching = false;

    private bool IsMatchSuccess
    {
        get { return isMatchSuccess; }
        set
        {
            isMatchSuccess = value;
            if (value == true)
            {
                btnMatch.enabled = false;
                PhotonNetwork.CurrentRoom.IsOpen = false;
                Debug.Log("Start");
                StartCoroutine(MatchSuccess());
            }
        }
    }
    private bool IsMatching
    {
        get { return isMatching; }
        set
        {
            isMatching = value;
            if(value == true)
            {
                this.enabled = true;
                btnMatch.transform.GetChild(0).GetComponent<Text>().text = "Match\nCancel";
                PhotonNetwork.JoinRandomRoom();
                StartCoroutine(Matching());
            }
            else
            {
                StopAllCoroutines();
                matchTimer = 0;
                btnMatch.transform.GetChild(0).GetComponent<Text>().text = "Match";
                txtMatch.text = null;
                txtMatchTime.text = "0";
                PhotonNetwork.LeaveRoom();
                this.enabled = false;
            }
        }
    }

    const float DEFAULT_WAIT_TIME = 10f;
    const int MATCH_COUNT_MIN = 2;
    const int MATCH_COUNT_MAX = 8;
    private float matchTimer;
    private float waitTime = DEFAULT_WAIT_TIME;

    [Header("MatchTimeUI")]
    [SerializeField] Text txtMatch;
    [SerializeField] Text txtMatchTime;

    [SerializeField] Text txtNickName;

    [SerializeField] Button btnMatch;

    Coroutine waitCoroutine;

    #region Match Method
    private void Match()
    {
        if (PhotonNetwork.IsConnectedAndReady && !IsMatching)
            IsMatching = true;
        else if (IsMatching)
            IsMatching = false;
        else
            Debug.Log("Not ready");
    }
    IEnumerator Matching()
    {
        txtMatch.text = "Matcing";
        while (!IsMatchSuccess)
        {
            matchTimer += Time.deltaTime;
            txtMatchTime.text = string.Format("{0:0}", matchTimer);
            yield return null;
        }
    }
    IEnumerator WaitMatch()
    {
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
        txtMatch.text = "Matcing Success";
        float waitTime = 5f;
        while (waitTime >= 0)
        {
            waitTime -= Time.deltaTime;
            txtMatchTime.text = string.Format("{0:0}", waitTime);
            
            yield return null;
        }
        if (PhotonNetwork.IsMasterClient)
        {
            Debug.Log("Master");
            yield return new WaitForSeconds(PhotonNetwork.LevelLoadingProgress);

            PhotonNetwork.LoadLevel("MultiplayTest");
        }
    }
    [PunRPC]
    public void WaitTimeSet()
    {
        if (PhotonNetwork.CurrentRoom.PlayerCount != MATCH_COUNT_MAX)
        {
            int matchTimeSet = PhotonNetwork.CurrentRoom.PlayerCount - MATCH_COUNT_MIN;
            if(matchTimeSet == 0)
                waitTime = DEFAULT_WAIT_TIME;
            else
                waitTime = DEFAULT_WAIT_TIME / matchTimeSet;
        }
        Debug.Log("waitTimeSet");
    }
    [PunRPC]
    public void WaitTimeSetLeft()
    {
        waitTime = DEFAULT_WAIT_TIME;
        StopCoroutine(waitCoroutine);
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
        txtNickName.text = PhotonNetwork.LocalPlayer.NickName;

        if (PhotonNetwork.CurrentRoom.PlayerCount >= MATCH_COUNT_MIN)
        {
            waitCoroutine = StartCoroutine(WaitMatch());
            photonView.RPC(nameof(WaitTimeSet), RpcTarget.All);
        }
        Debug.Log($"Join Room : {PhotonNetwork.CurrentRoom.Name} , {PhotonNetwork.CurrentRoom.PlayerCount}");
    }
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        if (PhotonNetwork.CurrentRoom.PlayerCount >= MATCH_COUNT_MIN)
        {
            if(waitCoroutine != null)
                StopCoroutine(waitCoroutine);
            waitCoroutine = StartCoroutine(WaitMatch());
        }
    }
    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        if(PhotonNetwork.CurrentRoom.PlayerCount < MATCH_COUNT_MIN)
        {
            photonView.RPC(nameof(WaitTimeSetLeft), RpcTarget.All);
        }
    }
    #endregion
}