using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class ActorsPopIn : MonoBehaviour
{

    public float rndPos = 1;
    public float rndTime = 1;
    public float waitTime = 1;

    void Start()
    {
        DOTween.Init();

        rndPos = Random.Range(2, 5) * 0.1f;
        rndTime = Random.Range(2f, 5) * 0.1f;
        waitTime = Random.Range(1, 5);

        Sequence seq = DOTween.Sequence();
        seq.Append(transform.DOMoveY(transform.position.y + rndPos, rndTime))
            .Append(transform.DOMoveY(transform.position.y, rndTime).OnComplete<Tween>(() => {rndPos = Random.Range(0.2f, 0.5f); rndTime = Random.Range(0.2f, 0.5f); waitTime = Random.Range(1, 5); }))
             .Append(transform.DOMoveY(transform.position.y, waitTime))
              .SetLoops(-1);

    }

}
