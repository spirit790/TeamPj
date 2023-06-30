using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class MostKillerPanel : MonoBehaviourPun
{
    public Text nickNameTxt;
    public Text killsTxt;
    void Start()
    {
        GameManager.OnDataSent += GetMostKillerData;
    }

    void GetMostKillerData()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            Dictionary<string, object> killer = GameManager.Instance.GetMostPlayerKiller();
            Debug.Log($"killer COunt {killer.Count}");
            foreach (var data in killer)
            {
                Debug.Log($"{data.Key} : {data.Value}");
            }

            photonView.RPC(nameof(SendResultToClients), RpcTarget.All, killer["NickName"].ToString(), killer["PlayerKills"].ToString());
        }
 
    }

    [PunRPC]
    void SendResultToClients(string nickName, string playerKills)
    {
        nickNameTxt.text = nickName;
        killsTxt.text = playerKills + " Kills";
    }
}
