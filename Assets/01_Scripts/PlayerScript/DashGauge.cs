using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DashGauge : MonoBehaviour
{
    public Transform sliderTransform;
    Slider dGauge;
    DashBtn dashBtn;
    Player player;

    public int maxDashGauge;
    public int nowDashGauge;

    void Awake()
    {
        sliderTransform = gameObject.GetComponent<Transform>();
        dashBtn = GameObject.FindGameObjectWithTag("DashBtn").GetComponent<DashBtn>();
        dGauge = gameObject.GetComponent<Slider>();
        nowDashGauge = maxDashGauge;

        dGauge.GetComponentInChildren<Image>().enabled = false;
        dGauge.GetComponentsInChildren<Image>()[1].enabled = false;
    }

    void Update()
    {
        GaugeMinus();
    }

    public void GaugeMinus()
    {
        if(dashBtn.IsCheck)
        {
            dGauge.GetComponentInChildren<Image>().enabled = true;
            dGauge.GetComponentsInChildren<Image>()[1].enabled = true;
            nowDashGauge--;
            if(nowDashGauge <= 1)
            {
                nowDashGauge = 0;
                dashBtn.IsCheck = false;                
            }
        }
        else if(nowDashGauge != maxDashGauge)
        {
            nowDashGauge++;
            if(nowDashGauge == maxDashGauge)
            {
                dGauge.GetComponentInChildren<Image>().enabled = false;
                dGauge.GetComponentsInChildren<Image>()[1].enabled = false;
            }
        }

        dGauge.value = (float)nowDashGauge / (float)maxDashGauge;
    }

}
