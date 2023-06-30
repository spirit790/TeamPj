using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class WorstOrAIKillerPanel : MonoBehaviourPun

{
    int random;
    public Text titleTxt;
    public Text nickNameTxt;
    public Text killsTxt;
    void OnEnable()
    {
        GameManager.OnDataSent += GetWorstOrAIKillerData;
    }

    void GetWorstOrAIKillerData()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            random = Random.Range(0, 2);
            Dictionary<string, object> killer;
            if (random == 0)
            {                
                killer = GameManager.Instance.GetWorstPlayerKiller();
                string title = "Worst Killer";
                string kills = killer["PlayerKills"].ToString();
                string nickName = killer["NickName"].ToString();
                photonView.RPC(nameof(SendResultToClients), RpcTarget.All, title, nickName, kills);
            }
            else
            {
                killer = GameManager.Instance.GetMostAIKiller();
                string title = "AI Hater";
                string kills = killer["PlayerKills"].ToString();
                string nickName = killer["NickName"].ToString();
                photonView.RPC(nameof(SendResultToClients), RpcTarget.All, title, nickName, kills);
            }
        }
    }
    [PunRPC]
    void SendResultToClients(string title, string nickName, string kills)
    {
        titleTxt.text = title;
        nickNameTxt.text = nickName;
        killsTxt.text = kills + " Kills";
    }
}
