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
    const string STRING_EMPTY = "...";
    const string STRING_READY= "준비";
    const string STRING_CANCEL = "취소";
    const string STRING_NULL_ROOM = "없는 방입니다.";
    const string STRING_START_FAIL = "준비가 안되었습니다.";

    const string MODE_NAME_BATTLELOYAL = "배틀로얄";
    const string MODE_NAME_AREA = "점령전";
    const string MODE_NAME_DEATHMATCH= "대학살";
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
                btnStart.GetComponentInChildren<Text>().text = STRING_CANCEL;
                photonView.RPC(nameof(SetReady), RpcTarget.MasterClient,PhotonNetwork.LocalPlayer, isReady);
                Debug.Log("준비완료" + PhotonNetwork.LocalPlayer.CustomProperties[KEY_READY]);
            }
            else
            {
                btnStart.GetComponentInChildren<Text>().text = STRING_READY;
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
            ShowAllPlayers();
            roomPanel.gameObject.SetActive(true);
        }
        else
        {
            isDebug = false;
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
                PhotonNetwork.CurrentRoom.IsOpen = false;
                if (int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[GameManager.Instance.KeyMap].ToString()) == 0)
                    PhotonNetwork.LoadLevel(2);
                else if (int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[GameManager.Instance.KeyMap].ToString()) == 1)
                    PhotonNetwork.LoadLevel(3);
                else if (int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[GameManager.Instance.KeyMap].ToString()) == 2)
                    PhotonNetwork.LoadLevel(4);
            }
            else
            {
                txtStartFail.text = STRING_START_FAIL;
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

    #region Invite Room Method
    void PlayerEnteredRoom(Player player)
    {
        content.transform.GetChild(PhotonNetwork.CurrentRoom.PlayerCount - 1).GetComponentInChildren<Text>().text = player.NickName;
        Dictionary<string, bool> tempPlayerList = new Dictionary<string, bool>();

        foreach (var item in playerList)
        {
            tempPlayerList.Add(item.Key,item.Value);
        }
        tempPlayerList.Add(player.NickName, false);
        playerList = tempPlayerList;
    }

    void PlayerLeftRoom(Player player)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            playerList.Remove(player.NickName);
            Debug.Log(playerList.Count);
            int i = 0;
            foreach (KeyValuePair<string,bool> item in playerList)
            {
                photonView.RPC(nameof(ShowPlayers), RpcTarget.All, i,item.Key,item.Value);
                i++;
            }
            photonView.RPC(nameof(ShowPlayers), RpcTarget.All, i, STRING_EMPTY, false);
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

    void RoomClear()
    {
        for (int i = 0; i < MATCH_COUNT_MAX; i++)
        {
            content.GetChild(i).GetComponentInChildren<Text>().text = STRING_EMPTY;
            content.GetChild(i).GetChild(1).GetComponent<Toggle>().isOn = false;
        }
    }
    void ShowAllPlayers()
    {
        foreach (var item in PhotonNetwork.CurrentRoom.Players)
        {
            playerList.Add(item.Value.NickName, false);
        }
        int i = 0;
        foreach (var item in playerList)
        {
            content.transform.GetChild(i).GetComponentInChildren<Text>().text = item.Key;
            i++;
        }
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
                txtMode.text = MODE_NAME_BATTLELOYAL;
                break;
            case 1:
                txtMode.text = MODE_NAME_AREA;
                break;
            case 2:
                txtMode.text = MODE_NAME_DEATHMATCH;
                break;
            default:
                break;
        }
    }
    [PunRPC]
    void SetReady(Player player, bool isReady)
    {
        player.CustomProperties[KEY_READY] = isReady;
        playerList[player.NickName] = isReady;
        int i = 0;
        foreach (KeyValuePair<string,bool> item in playerList)
        {
            if (item.Key == player.NickName)
            {
                break;
            }
            i++;
        }
        photonView.RPC(nameof(ShowPlayers),RpcTarget.All,i, player.NickName, isReady);
    }
    #endregion

    #region Photon Override Method
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
        Debug.Log($"player entered {newPlayer.NickName}");
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
            txtMode.transform.parent.gameObject.SetActive(false);

            PlayerEnteredRoom(PhotonNetwork.LocalPlayer);
        }
        else
        {
            txtMode.transform.parent.gameObject.SetActive(true);
            selectMode.gameObject.SetActive(false);
            btnStart.GetComponentInChildren<Text>().text = STRING_READY;
            Hashtable prop = new Hashtable { { KEY_READY, false } };
            PhotonNetwork.LocalPlayer.SetCustomProperties(prop);
        }
        roomPanel.transform.GetChild(0).GetComponent<Text>().text = PhotonNetwork.CurrentRoom.Name;
        roomPanel.gameObject.SetActive(true);
        Debug.Log(PhotonNetwork.CurrentRoom.Name);
    }

    public override void OnJoinRoomFailed(short returnCode, string message)
    {
        Debug.Log($"message : {message} , returnCode : {returnCode}");
        joinRoomPanel.gameObject.SetActive(true);
        if (returnCode == 32758)
            joinRoomPanel.transform.GetChild(1).GetComponent<Text>().text = STRING_NULL_ROOM;
        this.gameObject.SetActive(false);
    }

    public override void OnLeftRoom()
    {
        RoomClear();
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
