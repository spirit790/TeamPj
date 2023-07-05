using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class UI_PopUp : MonoBehaviour
{
    private RectTransform rect;

    private void OnEnable()
    {
        if (rect == null) rect = GetComponent<RectTransform>();

        rect.localScale = 0.1f * Vector3.one;

        rect.DOScale(1, 0.1f);
    }

}
