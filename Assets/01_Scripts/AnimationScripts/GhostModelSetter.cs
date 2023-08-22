using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GhostModelSetter : MonoBehaviour
{
    public GameObject[] models;

    private ModelManager modelManager;
    private GhostColorSetter gColorSetter;

    public bool isModelSet = false;
    private void Start()
    {
        modelManager = GameObject.Find("ModelManager").GetComponent<ModelManager>();

        // for (int i = 0; i < models.Length; i++) 
        // {
        //     models[i].SetActive(false);
        // }

        models[modelManager.modelNum].SetActive(true);

        gColorSetter = models[modelManager.modelNum].GetComponent<GhostColorSetter>();
        gColorSetter.modelNum = modelManager.modelColor;
        gColorSetter.weaponNum = modelManager.weaponColor;
    }



}
