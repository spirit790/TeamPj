using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ColorSetter : MonoBehaviour
{
    public Renderer model;
    public Material[] modelsMatter;

    public Renderer weaponModel;
    public Material[] weaponMatter;


    void Start()
    {
        int rndC = Random.Range(0, modelsMatter.Length);
        int rndW = Random.Range(0, weaponMatter.Length);

        model.GetComponent<Renderer>().material = modelsMatter[rndC];
        weaponModel.GetComponent<Renderer>().material = weaponMatter[rndW];
    }

}
