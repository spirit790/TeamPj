using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

[System.Serializable]
public class PlayerOutline : MonoBehaviour
{
    public GameObject outlineModel;
    public Material outlineMat;
    [Range(0.01f, 0.05f)]
    public float outLineScale = 0.03f;
    public Color outlineColor;
    [Range(0, 1)]
    private int isSelected = 0;
    public Renderer outlineRenderer;

    void Start()
    {
        //outlineRenderer = CreateOutline(outlineModel, outlineMat, outLineScale, outlineColor);
        outlineRenderer.material.renderQueue = 3000;
        outlineColor.a = 1;
        outlineRenderer.material.color = outlineColor;
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.F))
        {
            isSelected = 1;
            outlineRenderer.material.SetInt("_IsSelected", isSelected);
        }
        else if(Input.GetKeyDown(KeyCode.G))
        {
            isSelected = 0;
            outlineRenderer.material.SetInt("_IsSelected", isSelected);

        }
    }

    public Renderer CreateOutline(GameObject model, Material outlineMat, float scaleFactor, Color color)
    {
        GameObject outlineObject = Instantiate(model, model.transform.position, model.transform.rotation, model.transform);
        outlineObject.name = "Outline";
        outlineObject.layer = 13;
        Renderer rend = outlineObject.GetComponent<Renderer>();

        rend.material = outlineMat;
        rend.material.SetColor("_OutlineColor", color);
        rend.material.SetFloat("_Scale", scaleFactor);
        rend.shadowCastingMode = ShadowCastingMode.Off;

        //�׽�Ʈ��
        //�𵨸��� �ִ� ��ȣ�ۿ� ������Ʈ disabled
        //outlineObject.GetComponent<PlayerOutline_test>().enabled = false;

        rend.enabled = false;

        return rend;
    }

}