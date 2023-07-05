using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class UI_FadeIn : MonoBehaviour
{
    private Image img;

    private void Start()
    {
        DOTween.Init();
    }

    private void OnEnable()
    {
        if (img == null) img = GetComponent<Image>();
        img.enabled = true;
        img.color = Color.clear;
        img.DOFade(0.7f, 0.1f);
    }

}
