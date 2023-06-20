using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

[System.Serializable]
public class PlayerOutline_test : MonoBehaviour
{
    public Material outlineMat;
    public float outLineScale;
    public Color outlineColor;
    private Renderer outlineRenderer;

    void Start()
    {
        outlineRenderer = CreateOutline(outlineMat, outLineScale, outlineColor);
    }

    void Update()
    {
        if(Input.GetKeyDown(KeyCode.F))
        {
            outlineRenderer.enabled = true;
        }
        else if(Input.GetKeyDown(KeyCode.G))
        {
            outlineRenderer.enabled = false;
        }
    }

    public Renderer CreateOutline(Material outlineMat, float scaleFactor, Color color)
    {
        GameObject outlineObject = Instantiate(gameObject, transform.position, transform.rotation, transform);
        outlineObject.name = "Outline";
        Renderer rend = outlineObject.GetComponent<Renderer>();

        rend.material = outlineMat;
        rend.material.SetColor("_OutlineColor", color);
        rend.material.SetFloat("_Scale", scaleFactor);
        rend.shadowCastingMode = ShadowCastingMode.Off;

        //테스트용
        //모델링에 있는 상호작용 컴포넌트 disabled
        outlineObject.GetComponent<PlayerOutline_test>().enabled = false;

        rend.enabled = false;

        return rend;
    }

}
