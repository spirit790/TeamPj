using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class UIRotate : MonoBehaviour
{
    private RectTransform rect;
    void Start()
    {
        DOTween.Init();

        rect = GetComponent<RectTransform>();
        rect.DOLocalRotate(-360f * Vector3.forward, 10, RotateMode.FastBeyond360).SetLoops(-1);
    }

}
