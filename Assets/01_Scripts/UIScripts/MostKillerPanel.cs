using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MostKillerPanel : MonoBehaviour
{
    public Text nickNameTxt;
    public Text killsTxt;
    void Start()
    {
        GameManager.OnDataSent += GetMostKillerData;
    }

    void GetMostKillerData()
    {
        Dictionary<string, object> killer = GameManager.Instance.GetMostPlayerKiller();
        nickNameTxt.text = killer["NickName"].ToString();
        killsTxt.text = killer["PlayerKills"].ToString() + " Kills";        
    }
}
