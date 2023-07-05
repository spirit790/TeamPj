using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class UI_FadeOut : MonoBehaviour
{
    public Image img;
    private void Start()
    {
        DOTween.Init();
    }
    public void UI_Fader()
    {
        img.DOFade(0.7f, 0.1f).OnComplete<Tween>(() => img.gameObject.SetActive(false));
    }
}
