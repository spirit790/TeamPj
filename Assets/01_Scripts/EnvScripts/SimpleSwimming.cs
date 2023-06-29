using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class SimpleSwimming : MonoBehaviour
{ 
    
    private Transform swimmingTr;
    public int rnd = 0;

    void Start()
    {
        DOTween.Init();
        swimmingTr = GetComponent<Transform>();

        rnd = Random.Range(-10, 11);
        while (rnd == 0) rnd = Random.Range(-10, 11);

        Sequence seq = DOTween.Sequence();
        seq.Append(swimmingTr.DOMoveX(swimmingTr.position.x + rnd, Mathf.Abs(rnd) * 10f))
            .Join(swimmingTr.DORotate(swimmingTr.rotation.eulerAngles + Vector3.up * 90f * rnd / Mathf.Abs(rnd), 0.33f))
            .Append(swimmingTr.DOMoveX(swimmingTr.position.x - rnd, Mathf.Abs(rnd) * 10f))
            .Join(swimmingTr.DORotate(swimmingTr.rotation.eulerAngles -Vector3.up * 90f * rnd / Mathf.Abs(rnd), 0.33f).OnComplete<Tween>(() => {
                rnd = Random.Range(-10, 11);
                while (rnd == 0) rnd = Random.Range(-10, 11);
            }))
            .SetLoops(-1);
    }
}
