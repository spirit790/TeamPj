using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.SceneManagement;

public class WhetherChanger : MonoBehaviour
{
    private Volume postP;
    private Skybox skyBox;
    public VolumeProfile[] postP_Profiles;
    public Material[] skyMatters;
    [Range(0, 10)] public int aRatio;
    [Range(0, 10)] public int bRatio;
    [Range(0, 10)] public int cRatio;

    //public int
    void Start()
    {
        postP = GameObject.Find("PostProcessing").GetComponent<Volume>();
        //skyBox = RenderSettings.skybox;

        SetWhether();

    }

    /*
    private void Update()
    {
        //for Test
        if (Input.GetKeyDown(KeyCode.Space)) SetWhether();
    }
    */

    private void SetWhether()
    {
        int dice = RollDice();
        postP.profile = postP_Profiles[dice];
        RenderSettings.skybox = skyMatters[dice];

        DynamicGI.UpdateEnvironment();
    }

    private int RollDice()
    {

        int dice = 0;

        int total = aRatio + bRatio + cRatio;

        int rnd = Random.Range(0, total);

        if(rnd < aRatio)
        {
            dice = 0;
        }
        else if(rnd >= aRatio && rnd < aRatio + bRatio)
        {
            dice = 1;

        }
        else if(rnd >= aRatio + bRatio && rnd < aRatio + bRatio + cRatio)
        {
            dice = 2;
        }

        //Debug.Log(rnd + "/" + (total - 1).ToString() + " -> " + dice);

        return dice;

    }


}
