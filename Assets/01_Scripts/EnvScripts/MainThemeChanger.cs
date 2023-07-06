using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.SceneManagement;

public class MainThemeChanger : MonoBehaviour
{
    private Volume postP;
    private Skybox skyBox;
    public VolumeProfile[] postP_Profiles;
    public Material[] skyMatters;
    [Range(0, 10)] public int aRatio;
    [Range(0, 10)] public int bRatio;
    [Range(0, 10)] public int cRatio;

    public GameObject[] mainThemes;
    public GameObject effect;

    //public int
    void Start()
    {
        postP = GameObject.Find("PostProcessing").GetComponent<Volume>();
        //skyBox = RenderSettings.skybox;

        SetMainTheme();
    }

    
    private void Update()
    {
        //for Test
        //if (Input.GetKeyDown(KeyCode.Space)) SetMainTheme();
    }
    

    public void SetMainTheme()
    {
        int diceA = RollDice();
        postP.profile = postP_Profiles[diceA];
        RenderSettings.skybox = skyMatters[diceA];

        DynamicGI.UpdateEnvironment();

        for (int i = 0; i < mainThemes.Length; i++)
        {
            mainThemes[i].SetActive(false);
        }

        int diceB = RollDice();

        mainThemes[diceB].SetActive(true);

        GameObject efx = Instantiate(effect);
        efx.transform.position = new Vector3(0, 0, -0.5f);
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
