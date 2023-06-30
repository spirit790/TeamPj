using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class SimpleFloatings : MonoBehaviour
{
    private Transform floatingTr;
    int rnd;

    void Start()
    {
        DOTween.Init();
        floatingTr = GetComponent<Transform>();

        rnd = Random.Range(3, 10);

        Sequence seq = DOTween.Sequence();
        seq.Append(floatingTr.DOMoveY(floatingTr.position.y + rnd / 15, rnd)).Append(floatingTr.DOMoveY(floatingTr.position.y, rnd).OnComplete<Tween>(() => rnd = Random.Range(3, 10)))
            .SetLoops<Sequence>(-1);

        //floatingTr.DORotate()
    }


}
