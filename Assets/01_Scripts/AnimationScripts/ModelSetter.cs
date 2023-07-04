using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelSetter : MonoBehaviour
{
    public GameObject[] models;
    public int modelNum = 0;
    public float yOffset = 0.5f;
    public float scaleOffet = 2f;

    public bool isModelFixed = true;

    void Start()
    {
        if (modelNum < 0 || modelNum > models.Length) modelNum = 0;
        if (modelNum < 0 || modelNum > models.Length) modelNum = 0;

        if (isModelFixed)
        {
            GameObject model = Instantiate(models[modelNum], transform);
            model.name = name + " model";
            model.transform.SetAsFirstSibling();
            model.transform.localPosition = new Vector3(0, yOffset, 0);
            model.transform.localScale = scaleOffet * Vector3.one;
        }
        else if(!isModelFixed)
        {
            int rnd = Random.Range(0, models.Length);
            GameObject model = Instantiate(models[rnd], transform);
            model.name = name + " model";
            model.transform.SetAsFirstSibling();
            model.transform.localPosition = new Vector3(0, yOffset, 0);
            model.transform.localScale = scaleOffet * Vector3.one;
        }
    }


}
