using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class ModelChanger : MonoBehaviour
{
    [Header("Character")]
    public GameObject modelPos;
    public Image face;
    public GameObject effect;

    public int characterIdx;

    [Header("Prefabs")]
    public GameObject[] models;
    public Sprite[] faces;


    void Start()
    {
        DOTween.Init();
    }

    public void ModelFaceChange()
    {
        characterIdx++;
        if (characterIdx >= models.Length) characterIdx = 0;
        ModelChange();
        FaceChange();
    }
    public void ModelChange()
    {
        if (modelPos == null) return;


        for (int i = 0; i < models.Length; i++)
        {
            models[i].SetActive(false);
        }

        GameObject efx = Instantiate(effect, modelPos.transform.position, modelPos.transform.rotation);
        efx.transform.localScale = 0.5f * Vector3.one;
        efx.transform.position = new Vector3(-0.2f, 0, - 0.5f);
        models[characterIdx].SetActive(true);
    }

    public void FaceChange()
    {
        if (modelPos == null) return;

        face.sprite = faces[characterIdx];
    }
}
