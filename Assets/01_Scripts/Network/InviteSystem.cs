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
    [SerializeField] InputField inputCode;
    [SerializeField] Dropdown selectMode;
    [SerializeField] Button btnStart;
    [SerializeField] Button btnQuit;

    const int MATCH_COUNT_MIN = 2;
    const int MATCH_COUNT_MAX = 4;

    string randomWords = "abcdefghijklmnopqrstuvwxyz0123456789";

    #region Invite Method
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

    public void JoinRoom()
    {
        this.gameObject.SetActive(true);
        
        string roomName = inputCode.textComponent.text;
        PhotonNetwork.JoinRoom(roomName);
    }

    public void StartGame()
    {
        if (PhotonNetwork.IsMasterClient && PhotonNetwork.CurrentRoom.PlayerCount >= MATCH_COUNT_MIN)
        {
            PhotonNetwork.LoadLevel(1);
        }
    }

    public void QuitRoom()
    {
        if(PhotonNetwork.InRoom)
            PhotonNetwork.LeaveRoom();
    }

    [PunRPC]
    void ChangeModeValue(int num)
    {
        PhotonNetwork.CurrentRoom.CustomProperties[GameManager.Instance.KeyMode] = num;
    }

    public void ChangeMode()
    {
        photonView.RPC(nameof(ChangeModeValue), RpcTarget.All, selectMode.value);
    }

    void ShowPlayers()
    {
        roomPanel.transform.GetChild(1).GetComponent<Text>().text = null;
        foreach (var item in PhotonNetwork.CurrentRoom.Players.Reverse())
        {
            roomPanel.transform.GetChild(1).GetComponent<Text>().text += item.Value.ActorNumber + "\n";
            Debug.Log(item.Value.ActorNumber);
        }
    }
    #endregion

    #region Photon Override Method
    public override void OnCreatedRoom()
    {
        roomPanel.gameObject.SetActive(true);
        Debug.Log(PhotonNetwork.CurrentRoom.Name);
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        photonView.RPC(nameof(ChangeModeValue), RpcTarget.Others, selectMode.value);
        roomPanel.transform.GetChild(1).GetComponent<Text>().text += newPlayer.ActorNumber + "\n";
        Debug.Log($"player entered {newPlayer.UserId}");
    }

    public override void OnPlayerLeftRoom(Player otherPlayer)
    {
        ShowPlayers();
    }

    public override void OnJoinedRoom()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            selectMode.gameObject.SetActive(true);
            btnStart.gameObject.SetActive(true);
        }
        else
        {
            selectMode.gameObject.SetActive(false);
            btnStart.gameObject.SetActive(false);
        }
        roomPanel.gameObject.SetActive(true);
        roomPanel.transform.GetChild(0).GetComponent<Text>().text = PhotonNetwork.CurrentRoom.Name;
        ShowPlayers();
        Debug.Log(PhotonNetwork.CurrentRoom.Name);
    }

    public override void OnJoinRoomFailed(short returnCode, string message)
    {
        this.gameObject.SetActive(false);
    }

    public override void OnLeftRoom()
    {
        roomPanel.gameObject.SetActive(false);
        this.gameObject.SetActive(false);
    }

    public override void OnMasterClientSwitched(Player newMasterClient)
    {
        PhotonNetwork.LeaveRoom();
    }
    #endregion
}
