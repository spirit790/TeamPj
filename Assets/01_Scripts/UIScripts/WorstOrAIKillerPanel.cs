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
    void Start()
    {
        //GameManager.OnDataSent += GetWorstOrAIKillerData;
        //if (PhotonNetwork.IsMasterClient)
        //{
        //    random = Random.Range(0, 2);
        //    photonView.RPC(nameof(SetRandom), RpcTarget.All, random);
        //}
    }

    [PunRPC]
    void SetRandom(int rand)
    {
        random = rand;
    }
    void GetWorstOrAIKillerData()
    {
        Dictionary<string, object> killer;
        if (random == 0)
        {
            titleTxt.text = "Worst Killer";
            killer = GameManager.Instance.GetWorstPlayerKiller();
            killsTxt.text = killer["PlayerKills"].ToString() + " Kills";
        }
        else
        {
            titleTxt.text = "AI Hater";
            killer = GameManager.Instance.GetMostAIKiller();
            killsTxt.text = killer["AIKills"].ToString() + " Kills";
        }
        Debug.Log("kills: " + killsTxt.text);
        nickNameTxt.text = killer["NickName"].ToString();
        Debug.Log("NickNAme: " + nickNameTxt.text);
        GameManager.Instance.resultPanel.SetActive(true);
    }
}
