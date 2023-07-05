using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class UI_PopOut : MonoBehaviour
{
    public RectTransform rect;

    public void UI_Shutter()
    {
        rect.localScale = 1f * Vector3.one;

        rect.DOScale(0.1f, 0.1f).OnComplete<Tween>(()=> rect.gameObject.SetActive(false));
    }
}
