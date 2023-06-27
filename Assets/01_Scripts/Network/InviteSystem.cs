using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;
using Hashtable = ExitGames.Client.Photon.Hashtable;

public class InviteSystem : MonoBehaviourPunCallbacks
{
    [Header("UI Invite")]
    [SerializeField] Image roomPanel;
    [SerializeField] Image playerListImg;
    [SerializeField] Button btnQuit;
    [SerializeField] Button btnStart;
    [SerializeField] InputField inputCode;
    [SerializeField] Dropdown selectMode;
    [SerializeField] Transform content;

    public List<string> playerList = new List<string>();

    const int MATCH_COUNT_MIN = 2;
    const int MATCH_COUNT_MAX = 4;
    const string EMPTY_STIRNG = "Empty";

    string randomWords = "abcdefghijklmnopqrstuvwxyz0123456789";

    #region Invite Method
    /// <summary>
    /// 방생성 버튼
    /// </summary>
    public void CreateRoom()
    {
        this.gameObject.SetActive(true);
        string[] userId = PhotonNetwork.LocalPlayer.UserId.Split("-");
        string randomWord = this.randomWords[Random.Range(0,this.randomWords.Length)].ToString() + this.randomWords[Random.Range(0, this.randomWords.Length)].ToString();
        string roomName = userId[1] + randomWord;

        RoomOptions roomOption = new RoomOptions();
        Hashtable roomProp = new Hashtable { { GameManager.Instance.KeyMap, 0 }, { GameManager.Instance.KeyMode, 0 } };
        roomOption.CustomRoomProperties = roomProp;
        roomOption.MaxPlayers = MATCH_COUNT_MAX;
        roomOption.IsVisible = false;

        PhotonNetwork.CreateRoom(roomName,roomOption);
    }

    /// <summary>
    /// 방참가 버튼
    /// </summary>
    public void JoinRoom()
    {
        this.gameObject.SetActive(true);
        
        string roomName = inputCode.textComponent.text;
        PhotonNetwork.JoinRoom(roomName);
    }

    /// <summary>
    /// 게임시작 버튼
    /// </summary>
    public void StartGame()
    {
        if (PhotonNetwork.IsMasterClient && PhotonNetwork.CurrentRoom.PlayerCount >= MATCH_COUNT_MIN)
        {
            PhotonNetwork.LoadLevel(2);
        }
    }

    /// <summary>
    /// 방 나가기 버튼
    /// </summary>
    public void QuitRoom()
    {
        if(PhotonNetwork.InRoom)
            PhotonNetwork.LeaveRoom();
    }

    

    public void ChangeMode()
    {
        photonView.RPC(nameof(ChangeModeValue), RpcTarget.All, selectMode.value);
    }

    void PlayerEnteredRoom(Player player)
    {
        content.transform.GetChild(PhotonNetwork.CurrentRoom.PlayerCount - 1).GetComponentInChildren<Text>().text = player.ActorNumber.ToString();
        playerList.Add(player.ActorNumber.ToString());
    }

    void PlayerLeftRoom(Player player)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            playerList.Remove(player.ActorNumber.ToString());
            for (int i = 0; i < playerList.Count; i++)
            {
                photonView.RPC(nameof(ShowPlayers), RpcTarget.All, i, playerList[i]);
            }
            photonView.RPC(nameof(ShowPlayers), RpcTarget.All, PhotonNetwork.CurrentRoom.PlayerCount, EMPTY_STIRNG);
        }
    }

    #endregion

    #region PunRPC
    /// <summary>
    /// 방내에 플레이어 보여주기
    /// </summary>
    /// <param name="num"></param>
    /// <param name="name"></param>
    [PunRPC]
    void ShowPlayers(int num, string name)
    {
        content.transform.GetChild(num).GetComponentInChildren<Text>().text = name;
    }
    /// <summary>
    /// 모드 통일화
    /// </summary>
    /// <param name="num"></param>
    [PunRPC]
    void ChangeModeValue(int num)
    {
        PhotonNetwork.CurrentRoom.CustomProperties[GameManager.Instance.KeyMode] = num;
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
            for (int i = 0; i < playerList.Count; i++)
            {
                photonView.RPC(nameof(ShowPlayers), RpcTarget.Others, i, playerList[i]);
            }
        }
        photonView.RPC(nameof(ChangeModeValue), RpcTarget.Others, selectMode.value);
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

            PlayerEnteredRoom(PhotonNetwork.LocalPlayer);
        }
        else
        {
            selectMode.gameObject.SetActive(false);
            btnStart.gameObject.SetActive(false);
        }
        roomPanel.gameObject.SetActive(true);
        Debug.Log(PhotonNetwork.CurrentRoom.Name);
    }

    public override void OnJoinRoomFailed(short returnCode, string message)
    {
        this.gameObject.SetActive(false);
    }

    public override void OnLeftRoom()
    {
        for (int i = 0; i < 8; i++)
        {
            content.GetChild(i).GetComponentInChildren<Text>().text = EMPTY_STIRNG;
        }
        roomPanel.gameObject.SetActive(false);
        this.gameObject.SetActive(false);
    }

    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        PhotonNetwork.LeaveRoom();
    }
    #endregion
}
