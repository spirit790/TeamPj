using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class WinnerPanel : MonoBehaviourPun
{
    public Text nickNameTxt;
    public Text killsTxt;

    void OnEnable()
    {
        if(PhotonNetwork.IsMasterClient)
            GameManager.OnDataSent += GetWinnerData;
    }

    void GetWinnerData()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            Dictionary<string, object> winner = GameManager.Instance.GetWinner();
            Debug.Log($"winner COunt {winner.Count}");
            foreach (var data in winner)
            {
                Debug.Log($"{data.Key} : {data.Value}");
            }

            photonView.RPC(nameof(SendResultToClients), RpcTarget.All, winner["NickName"].ToString(), winner["PlayerKills"].ToString());
        }

    }
    [PunRPC]
    void SendResultToClients(string nickName, string playerKills)
    {
        nickNameTxt.text = nickName;
        killsTxt.text = playerKills + " Kills";
    }
}
