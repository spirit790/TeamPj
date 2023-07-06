using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class UI_PopUp_Start : MonoBehaviour
{
    private RectTransform rect;
    //public GameObject effect;
    public float fxScale = 0.1f;

    private void Start()
    {
        if (rect == null) rect = GetComponent<RectTransform>();
        rect.localScale = 0.1f * Vector3.one;
        float rnd = Random.Range(1, 4);

        Invoke("Popup", rnd);

    }

    private void Popup()
    {
        //GameObject popFx = Instantiate(effect);
        //popFx.transform.localScale = fxScale * Vector3.one;
        //popFx.transform.position = Camera.main.ScreenToWorldPoint(rect.transform.position);
        rect.DOScale(1, 0.1f);
    }

}
