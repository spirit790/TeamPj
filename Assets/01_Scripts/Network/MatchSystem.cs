using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using UnityEngine.UI;
using Photon.Realtime;
using Hashtable = ExitGames.Client.Photon.Hashtable;

public class MatchSystem : MonoBehaviourPunCallbacks
{
    public PhotonView playerPrefab;
    private bool isMatchSuccess = false;
    private bool isMatching = false;

    public bool IsMatchSuccess
    {
        get { return isMatchSuccess; }
        set
        {
            isMatchSuccess = value;
            if (value == true)
            {
                btnMatch.interactable = false;
                PhotonNetwork.CurrentRoom.IsOpen = false;
                Debug.Log("Start");
                StartCoroutine(MatchSuccess());
            }
        }
    }
    public bool IsMatching
    {
        get { return isMatching; }
        set
        {
            isMatching = value;
            if(value == true)
            {
                this.gameObject.SetActive(true);
                btnCreate.interactable = false;
                btnJoin.interactable = false;
                btnMatch.transform.GetChild(0).GetComponent<Text>().text = "Match\nCancel";
                PhotonNetwork.JoinRandomRoom();
                StartCoroutine(Matching());
            }
            else
            {
                StopAllCoroutines();
                btnCreate.interactable = true;
                btnJoin.interactable = true;
                matchTimer = 0;
                btnMatch.transform.GetChild(0).GetComponent<Text>().text = "Match";
                txtMatch.text = null;
                txtMatchTime.text = "0";
                PhotonNetwork.LeaveRoom();
                this.gameObject.SetActive(false);
            }
        }
    }

    const float DEFAULT_WAIT_TIME = 10f;
    const int MATCH_COUNT_MIN = 2;
    const int MATCH_COUNT_MAX = 3;
    private float matchTimer;
    private float waitTime = DEFAULT_WAIT_TIME;

    [Header("UI MatchTime")]
    [SerializeField] Text txtMatch;
    [SerializeField] Text txtMatchTime;

    [Header("UI Btn")]
    [SerializeField] Button btnMatch;
    [SerializeField] Button btnCreate;
    [SerializeField] Button btnJoin;

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
            txtMatchTime.text = Mathf.CeilToInt(waitTime).ToString();

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
        RoomOptions roomOptions = new RoomOptions();
        roomOptions.MaxPlayers = MATCH_COUNT_MAX;
        int randomMap = Random.Range(0, 3);
        int randomMode = Random.Range(0, GameManager.Instance.modes.Count);

        Hashtable roomProp = new Hashtable { { GameManager.Instance.KeyMap, randomMap }, { GameManager.Instance.KeyMode,randomMode} };
        roomOptions.CustomRoomProperties = roomProp;

        if (!PhotonNetwork.InRoom)
            PhotonNetwork.CreateRoom(null, roomOptions);
    }
    public override void OnJoinedRoom()
    {
        if (PhotonNetwork.CurrentRoom.PlayerCount == MATCH_COUNT_MAX)
        {
            StopAllCoroutines();
            StartCoroutine(MatchSuccess());
        }
        else if (PhotonNetwork.CurrentRoom.PlayerCount >= MATCH_COUNT_MIN)
        {
            waitCoroutine = StartCoroutine(WaitMatch());
            photonView.RPC(nameof(WaitTimeSet), RpcTarget.All);
        }
        Debug.Log($"Join Room : {PhotonNetwork.CurrentRoom.Name} , {PhotonNetwork.CurrentRoom.PlayerCount}");
    }
    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        if (PhotonNetwork.CurrentRoom.PlayerCount == MATCH_COUNT_MAX)
        {
            StopAllCoroutines();
            StartCoroutine(MatchSuccess());
        }
        else if (PhotonNetwork.CurrentRoom.PlayerCount >= MATCH_COUNT_MIN)
        {
            if (waitCoroutine != null)
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