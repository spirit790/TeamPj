using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelSetter : MonoBehaviour
{
    public GameObject[] models;
    public int modelNum;

    public bool isFixed;

    [Range(0.5f, 5)]
    public float modelSize = 2f;
    public float yOffset = 0.5f;

    void Start()
    {
        if (!isFixed)
        {
            int rnd = Random.Range(0, models.Length);
            GameObject characterModel = Instantiate(models[rnd], transform);
            characterModel.transform.localPosition = new Vector3(0, yOffset, 0);
            characterModel.transform.localScale = modelSize * Vector3.one;
            characterModel.name = name + " model";
            characterModel.transform.SetAsFirstSibling();
        }
        else if (isFixed)
        {
            if (modelNum < 0 || modelNum > models.Length) modelNum = 0;
            GameObject characterModel = Instantiate(models[modelNum], transform);
            characterModel.transform.localPosition = new Vector3(0, yOffset, 0);
            characterModel.transform.localScale = modelSize * Vector3.one;
            characterModel.name = name + " model";
            characterModel.transform.SetAsFirstSibling();
        }
    }


}
