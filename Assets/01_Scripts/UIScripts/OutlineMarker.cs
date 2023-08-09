using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.Rendering;

public class OutlineMarker : MonoBehaviour
{

    [Header("Outline Settings")]
    [Range(0.01f, 0.05f)] public float lineWidth = 0.03f;
    public Color lineColor = Color.magenta;
    public Renderer outlineRenderer;

    void Start()
    {
        outlineRenderer = GetComponentsInChildren<Renderer>()[2];
    }

//#if UNITY_EDITOR
//    void Update()
//    {
//        if (Input.GetKeyDown(KeyCode.F))
//        {
//            ActivateOutline(outlineRenderer, lineWidth, Color.magenta, true);

//        }
//        else if (Input.GetKeyDown(KeyCode.G))
//        {
//            ActivateOutline(outlineRenderer, lineWidth, Color.black, false);
//        }
//    }
//#endif

    public void PlayersOutline()
    {
        ActivateOutline(outlineRenderer, lineWidth, Color.magenta, true);
    }

    private void ActivateOutline(Renderer outlineRend, float scaleFactor, Color color, bool isSelected)
    {
        outlineRend.enabled = isSelected;

        outlineRend.material.SetColor("_Color", color);
        outlineRend.material.SetFloat("_Scale", scaleFactor);

        outlineRenderer.material.SetInt("_IsSelected", isSelected? 1:0);
    }
}
