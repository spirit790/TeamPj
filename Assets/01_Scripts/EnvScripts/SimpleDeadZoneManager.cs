using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class SimpleDeadZoneManager : MonoBehaviour
{
    private GameObject deadZone;
    public float freq = 5f;
    public float startRange = 10f;
    public float endRange = 20f;



    void Start()
    {
        DOTween.Init();

        deadZone = gameObject;
        deadZone.transform.localScale = Vector3.one * startRange;

        Sequence seq = DOTween.Sequence();
        seq.Append(transform.DOScale(endRange, freq)).Append(transform.DOScale(startRange, freq)).SetLoops<Sequence>(-1);

      
    }


}
