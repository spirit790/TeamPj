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

    private int characterIdx;
    public int CharacterIdx
    {
        get { return characterIdx; }
        set 
        { 
            characterIdx = value;
            modelManager.modelNum = characterIdx;
        }
    }

    private int modelColorIdx;
    public int ModelColorIdx
    {
        get { return modelColorIdx; }
        set
        {
            modelColorIdx = value;
            modelManager.modelColor = modelColorIdx;
        }
    }


    private int weaponColorIdx;
    public int WeaponColorIdx
    {
        get { return weaponColorIdx; }
        set
        {
            weaponColorIdx = value;
            modelManager.weaponColor = weaponColorIdx;
        }
    }

    [Header("Prefabs")]
    public GameObject[] models;
    public Sprite[] faces;

    private ModelManager modelManager;

    void Start()
    {
        DOTween.Init();
        modelManager = GameObject.Find("ModelManager").GetComponent<ModelManager>();
    }

    public void ModelFaceChange()
    {
        CharacterIdx++;
        if (CharacterIdx >= models.Length) characterIdx = 0;
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
        models[CharacterIdx].SetActive(true);
    }

    public void FaceChange()
    {
        if (modelPos == null) return;

        face.sprite = faces[CharacterIdx];
    }

    public void ModelColorChange()
    {
        if (modelPos == null) return;

        ColorSetter colorSetter = models[CharacterIdx].GetComponent<ColorSetter>();
        
        ModelColorIdx++;
        if(ModelColorIdx >= colorSetter.modelsMatter.Length) ModelColorIdx = 0;

        colorSetter.model.GetComponent<Renderer>().material = colorSetter.modelsMatter[ModelColorIdx];

    }
}
