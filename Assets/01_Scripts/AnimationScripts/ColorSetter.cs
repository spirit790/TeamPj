using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorSetter : MonoBehaviour
{
    public bool isModelFixed = true;
    public int modelNum = 0;

    public bool isWeaponFixed = true;
    public int weaponNum = 0;

    public Renderer model;
    public Material[] modelsMatter;

    public Renderer weaponModel;
    public Material[] weaponMatter;


    void Start()
    {
        if (modelNum < 0 || modelNum > modelsMatter.Length) modelNum = 0;
        if (weaponNum < 0 || weaponNum > weaponMatter.Length) modelNum = 0;

        if (isModelFixed)
        {
            model.GetComponent<Renderer>().material = modelsMatter[modelNum];

        }
        else if(!isModelFixed)
        {
            int rndC = Random.Range(0, modelsMatter.Length);
            model.GetComponent<Renderer>().material = modelsMatter[rndC];
        }

        if (!isWeaponFixed)
        {
            weaponModel.GetComponent<Renderer>().material = weaponMatter[weaponNum];

        }
        else if(isWeaponFixed)
        {
            int rndW = Random.Range(0, weaponMatter.Length);
            weaponModel.GetComponent<Renderer>().material = weaponMatter[rndW];

        }
    }

}
