using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorSetter : MonoBehaviour
{
    public bool isModelFixed = false;
    public int modelColor = 0;

    public bool isWeaponFixed = false;
    public int weaponColor = 0;

    [Header("Model References")]
    public Renderer model;
    public Material[] modelsMatter;

    [Header("Weapon References")]
    public Renderer weaponModel;
    public Material[] weaponMatter;


    void Start()
    {
        if (modelColor < 0 || modelColor > modelsMatter.Length) modelColor = 0;
        if (weaponColor < 0 || weaponColor > weaponMatter.Length) weaponColor = 1;

        if (!isModelFixed)
        {
            int rndC = Random.Range(0, modelsMatter.Length);

            model.GetComponent<Renderer>().material = modelsMatter[rndC];
        }
        else if(isModelFixed)
        {

            model.GetComponent<Renderer>().material = modelsMatter[modelColor];
        }

        if(!isWeaponFixed)
        {
            int rndW = Random.Range(0, weaponMatter.Length);
            weaponModel.GetComponent<Renderer>().material = weaponMatter[rndW];
        }
        else if(isWeaponFixed)
        {
            weaponModel.GetComponent<Renderer>().material = weaponMatter[weaponColor];
        }
    }
}
