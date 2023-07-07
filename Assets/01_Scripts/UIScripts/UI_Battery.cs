using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UI_Battery : MonoBehaviour
{
    Slider batSlider;
    public Image batVol;

    void Start()
    {
        batSlider = GetComponent<Slider>();
    }

    void Update()
    {
        batSlider.value = SystemInfo.batteryLevel;

        if (batSlider.value >= 0.6) batVol.color = Color.white;
        else if (batSlider.value < 0.6 && batSlider.value >= 0.3) batVol.color = Color.yellow;
        else if (batSlider.value < 0.3) batVol.color = Color.red;
    }
}
