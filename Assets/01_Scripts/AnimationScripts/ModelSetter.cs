using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelSetter : MonoBehaviour
{
    public GameObject[] models;

    private ModelManager modelMagager;
    private ColorSetter colorSetter;

    public bool isModelSet = false;
    private void Start()
    {
        modelMagager = GameObject.Find("ModelManager").GetComponent<ModelManager>();

        for (int i = 0; i < models.Length; i++) 
        {
            models[i].SetActive(false);
        }

        models[modelMagager.modelNum].SetActive(true);

        colorSetter = models[modelMagager.modelNum].GetComponent<ColorSetter>();
        colorSetter.modelNum = modelMagager.modelColor;
        colorSetter.weaponNum = modelMagager.weaponColor;

        isModelSet = true;
    }



}
