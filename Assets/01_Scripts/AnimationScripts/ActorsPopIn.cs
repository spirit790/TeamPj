using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class ActorsPopIn : MonoBehaviour
{
    void Start()
    {
        DOTween.Init();

        Sequence seq = DOTween.Sequence();
    }

}
