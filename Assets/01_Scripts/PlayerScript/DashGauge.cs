using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DashGauge : MonoBehaviour
{
    public Transform sliderTransform;
    Slider dGauge;
    DashBtn dashBtn;

    [SerializeField]
    int maxDashGauge;
    [SerializeField]
    int nowDashGauge;

    PlayerController playerController;

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
        if (dashBtn.IsCheck)
        {
            nowDashGauge--;         
            if (nowDashGauge <= 1)
            {
                nowDashGauge = 0;
                dashBtn.IsCheck = false;
            }
        }
        else if (nowDashGauge != maxDashGauge)
        {
            nowDashGauge++;
        }
        dGauge.value = (float)nowDashGauge / (float)maxDashGauge;
    }
}
