using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class WinnerPanel : MonoBehaviour
{
    public Text nickNameTxt;
    public Text killsTxt;

    void Start()
    {
        GameManager.OnDataSent += GetWinnerData;
    }

    void GetWinnerData()
    {
        Dictionary<string, object> winner = GameManager.Instance.GetWinner();
        nickNameTxt.text = winner["NickName"].ToString();
        killsTxt.text = winner["PlayerKills"].ToString() + " Kills";
    }
}
