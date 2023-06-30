using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class SimpleSwimming : MonoBehaviour
{ 
    
    private Transform swimmingTr;
    private int rnd = 0;

    void Start()
    {
        DOTween.Init();
        swimmingTr = GetComponent<Transform>();

        rnd = Random.Range(-10, 11);
        while (rnd == 0) rnd = Random.Range(-10, 11);

        Sequence seq = DOTween.Sequence();
        seq.Append(swimmingTr.DOMoveX(swimmingTr.position.x + rnd, Mathf.Abs(rnd) * 5f))
            .Join(swimmingTr.DORotate(swimmingTr.rotation.eulerAngles + Vector3.up * 90f * rnd / Mathf.Abs(rnd), 0.1f))
            .Append(swimmingTr.DOMoveX(swimmingTr.position.x - rnd, Mathf.Abs(rnd) * 5f))
            .Join(swimmingTr.DORotate(swimmingTr.rotation.eulerAngles -Vector3.up * 90f * rnd / Mathf.Abs(rnd), 0.1f).OnComplete<Tween>(() => {
                rnd = Random.Range(-10, 11);
                while (rnd == 0) rnd = Random.Range(-10, 11);
            }))
            .SetLoops(-1);
    }
}
