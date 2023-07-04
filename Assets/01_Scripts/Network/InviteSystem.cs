using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using DG.Tweening;
using Hashtable = ExitGames.Client.Photon.Hashtable;

public class InviteSystem : MonoBehaviourPunCallbacks
{
    [Header("UI Invite")]
    [SerializeField] Image roomPanel;
    [SerializeField] Image joinRoomPanel;
    [SerializeField] Image playerListImg;
    [SerializeField] Button btnQuit;
    [SerializeField] Button btnStart;
    [SerializeField] InputField inputCode;
    [SerializeField] Dropdown selectMode;
    [SerializeField] Text txtMode;
    [SerializeField] Text txtStartFail;
    [SerializeField] Transform content;

    Dictionary<string, bool> playerList = new Dictionary<string, bool>();

    const int MATCH_COUNT_MIN = 2;
    const int MATCH_COUNT_MAX = 8;

    const string KEY_READY = "ready";
    const string EMPTY_STIRNG = "Empty";

    private bool isReady;
    public bool IsReady
    {
        get
        {
            return isReady;
        }
        set
        {
            isReady = value;
            if (isReady)
            {
                btnStart.GetComponentInChildren<Text>().text = "준비 취소";
                photonView.RPC(nameof(SetReady), RpcTarget.MasterClient,PhotonNetwork.LocalPlayer, isReady);
                Debug.Log("준비완료" + PhotonNetwork.LocalPlayer.CustomProperties[KEY_READY]);
            }
            else
            {
                btnStart.GetComponentInChildren<Text>().text = "준비";
                if(PhotonNetwork.InRoom)
                    photonView.RPC(nameof(SetReady), RpcTarget.MasterClient, PhotonNetwork.LocalPlayer, isReady);
            }
        }
    }

    string randomWords = "abcdefghijklmnopqrstuvwxyz0123456789";

    [SerializeField] bool isDebug = false;

    private void Start()
    {
        DOTween.Init();
    }

    #region Button Method
    /// <summary>
    /// 방생성 버튼
    /// </summary>
    public void CreateRoom()
    {
        this.gameObject.SetActive(true);
        if (GameManager.Instance.isReInvite)
        {
            roomPanel.gameObject.SetActive(true);
        }
        else
        {
            isDebug = true;
            string roomName = "";
            if (isDebug)
            {
                roomName = randomWords[Random.Range(0, this.randomWords.Length)].ToString();
            }
            else
            {
                string[] userId = PhotonNetwork.LocalPlayer.UserId.Split("-");
                string randomWord = this.randomWords[Random.Range(0, this.randomWords.Length)].ToString() + this.randomWords[Random.Range(0, this.randomWords.Length)].ToString();
                roomName = userId[1] + randomWord;
            }
            RoomOptions roomOption = new RoomOptions();
            int randomMap = Random.Range(0, 3);
            Hashtable roomProp = new Hashtable { { GameManager.Instance.KeyMap, randomMap }, { GameManager.Instance.KeyMode, 0 }, { GameManager.Instance.KeySystem, 1 } };
            roomOption.CustomRoomProperties = roomProp;
            roomOption.MaxPlayers = MATCH_COUNT_MAX;
            roomOption.IsVisible = false;

            PhotonNetwork.CreateRoom(roomName, roomOption);
        }
    }

    /// <summary>
    /// 방참가 버튼
    /// </summary>
    public void JoinRoom()
    {
        this.gameObject.SetActive(true);
        joinRoomPanel.gameObject.SetActive(true);
        ResetJoinRoomPanel();
        string roomName = inputCode.textComponent.text;
        PhotonNetwork.JoinRoom(roomName);
    }

    /// <summary>
    /// 게임시작 버튼 || 준비완료 버튼
    /// </summary>
    public void StartGame()
    {
        if (PhotonNetwork.IsMasterClient && PhotonNetwork.CurrentRoom.PlayerCount >= MATCH_COUNT_MIN)
        {
            if (CheckIsAllReady())
            {
                Debug.Log("Master");
                PhotonNetwork.LoadLevel(2);
            }
            else
            {
                txtStartFail.text = "준비가 안되었습니다.";
                txtStartFail.gameObject.transform.DOSpiral(2f).OnComplete(()=>txtStartFail.text = "");
            }
        }
        else if (!PhotonNetwork.IsMasterClient)
        {
            if (!IsReady)
                IsReady = true;
            else
                IsReady = false;
        }
    }

    /// <summary>
    /// 방 나가기 버튼
    /// </summary>
    public void QuitRoom()
    {
        if (PhotonNetwork.IsMasterClient)
            playerList.Clear();
        if (PhotonNetwork.InRoom)
            PhotonNetwork.LeaveRoom();
    }

    public void ChangeMode()
    {
        photonView.RPC(nameof(ChangeModeValue), RpcTarget.All, selectMode.value);
    }

    #endregion

    #region Invite Method
    void PlayerEnteredRoom(Player player)
    {
        content.transform.GetChild(PhotonNetwork.CurrentRoom.PlayerCount - 1).GetComponentInChildren<Text>().text = player.ActorNumber.ToString();
        Dictionary<string, bool> tempPlayerList = new Dictionary<string, bool>();

        foreach (var item in playerList)
        {
            tempPlayerList.Add(item.Key,item.Value);
        }
        tempPlayerList.Add(player.ActorNumber.ToString(), false);
        playerList = tempPlayerList;
    }

    void PlayerLeftRoom(Player player)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            playerList.Remove(player.ActorNumber.ToString());
            Debug.Log(playerList.Count);
            int i = 0;
            foreach (KeyValuePair<string,bool> item in playerList)
            {
                photonView.RPC(nameof(ShowPlayers), RpcTarget.All, i,item.Key,item.Value);
                i++;
            }
            photonView.RPC(nameof(ShowPlayers), RpcTarget.All, i, EMPTY_STIRNG, false);
        }
    }

    void ResetJoinRoomPanel()
    {
        inputCode.textComponent.text = "";
        joinRoomPanel.transform.GetChild(1).GetComponent<Text>().text = null;
    }

    bool CheckIsAllReady()
    {
        foreach (var item in PhotonNetwork.CurrentRoom.Players)
        {
            if (!item.Value.IsMasterClient)
            {
                if (!(bool)item.Value.CustomProperties[KEY_READY])
                {
                    Debug.Log(item.Key + "," + item.Value.CustomProperties[KEY_READY]);
                    return false;
                }
            }
        }
        return true;
    }

    #endregion

    #region PunRPC Method
    /// <summary>
    /// 방내에 플레이어 보여주기
    /// </summary>
    /// <param name="num"></param>
    /// <param name="name"></param>
    [PunRPC]
    void ShowPlayers(int num, string name,bool isReady)
    {
        content.transform.GetChild(num).GetComponentInChildren<Text>().text = name;
        content.transform.GetChild(num).GetChild(1).GetComponent<Toggle>().isOn = isReady;
    }

    /// <summary>
    /// 모드 통일화
    /// </summary>
    /// <param name="num"></param>
    [PunRPC]
    void ChangeModeValue(int num)
    {
        PhotonNetwork.CurrentRoom.CustomProperties[GameManager.Instance.KeyMode] = num;
        photonView.RPC(nameof(ShowMode), RpcTarget.Others, num);
    }
    [PunRPC]
    void ShowMode(int modeNum)
    {
        switch (modeNum)
        {
            case 0:
                txtMode.text = "배틀로얄";
                break;
            case 1:
                txtMode.text = "점령전";
                break;
            case 2:
                txtMode.text = "대학살";
                break;
            default:
                break;
        }
    }
    [PunRPC]
    void SetReady(Player player, bool isReady)
    {
        player.CustomProperties[KEY_READY] = isReady;
        playerList[player.ActorNumber.ToString()] = isReady;
        int i = 0;
        foreach (KeyValuePair<string,bool> item in playerList)
        {
            if (item.Key == player.ActorNumber.ToString())
            {
                break;
            }
            i++;
        }
        photonView.RPC(nameof(ShowPlayers),RpcTarget.All,i, player.ActorNumber.ToString(), isReady);
    }
    #endregion

    #region Photon Override Method
    public override void OnCreatedRoom()
    {
        roomPanel.transform.GetChild(0).GetComponent<Text>().text = PhotonNetwork.CurrentRoom.Name;
        roomPanel.gameObject.SetActive(true);
        Debug.Log(PhotonNetwork.CurrentRoom.Name);
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            PlayerEnteredRoom(newPlayer);
            int i = 0;
            foreach (KeyValuePair<string,bool> item in playerList)
            {
                photonView.RPC(nameof(ShowPlayers), RpcTarget.Others, i, item.Key,item.Value);
                Debug.Log(item.Key);
                i++;
            }
            photonView.RPC(nameof(ChangeModeValue), RpcTarget.All, selectMode.value);
        }
        Debug.Log($"player entered {newPlayer.UserId}");
    }

    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        PlayerLeftRoom(otherPlayer);
    }

    public override void OnJoinedRoom()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            selectMode.gameObject.SetActive(true);
            btnStart.gameObject.SetActive(true);
            txtMode.gameObject.SetActive(false);

            PlayerEnteredRoom(PhotonNetwork.LocalPlayer);
        }
        else
        {
            txtMode.gameObject.SetActive(true);
            selectMode.gameObject.SetActive(false);
            btnStart.GetComponentInChildren<Text>().text = "준비";
            Hashtable prop = new Hashtable { { KEY_READY, false } };
            PhotonNetwork.LocalPlayer.SetCustomProperties(prop);
        }
        roomPanel.gameObject.SetActive(true);
        Debug.Log(PhotonNetwork.CurrentRoom.Name);
    }

    public override void OnJoinRoomFailed(short returnCode, string message)
    {
        Debug.Log($"message : {message} , returnCode : {returnCode}");
        joinRoomPanel.gameObject.SetActive(true);
        if (returnCode == 32758)
            joinRoomPanel.transform.GetChild(1).GetComponent<Text>().text = "없는 방입니다.";
        this.gameObject.SetActive(false);
    }

    public override void OnLeftRoom()
    {
        for (int i = 0; i < MATCH_COUNT_MAX; i++)
        {
            content.GetChild(i).GetComponentInChildren<Text>().text = EMPTY_STIRNG;
            content.GetChild(i).GetChild(1).GetComponent<Toggle>().isOn = false;
        }
        isReady = false;
        roomPanel.gameObject.SetActive(false);
        this.gameObject.SetActive(false);
    }

    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        PhotonNetwork.LeaveRoom();
    }
    #endregion
}
