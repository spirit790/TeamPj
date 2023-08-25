using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelSetter : MonoBehaviour
{
    public GameObject[] models;

    private ModelManager modelManager;
    private ColorSetter colorSetter;

    IEnumerator Start()
    {
        yield return new WaitUntil(() => GameManager.Instance.isLoaded);

        modelManager = GameObject.Find("ModelManager").GetComponent<ModelManager>();

        // for (int i = 0; i < models.Length; i++) 
        // {
        //     models[i].SetActive(false);
        // }

        models[modelManager.modelNum].SetActive(true);

        colorSetter = models[modelManager.modelNum].GetComponent<ColorSetter>();
        colorSetter.modelNum = modelManager.modelColor;
        colorSetter.weaponNum = modelManager.weaponColor;

        Debug.Log("modelnumbs " + modelManager.modelNumbs + " from " + name);
        modelManager.modelNumbs++;
    }



}
