using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class UI_SimpleFloating : MonoBehaviour
{
    RectTransform rect;

    void Start()
    {
        rect = GetComponent<RectTransform>();

        rect.DOSpiral(30, Vector3.forward, SpiralMode.ExpandThenContract, 0.2f).SetLoops(-1);
    }

}
