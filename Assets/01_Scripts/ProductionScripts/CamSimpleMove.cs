using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class CamSimpleMove : MonoBehaviour
{
    Camera cam;
    public float yOffset = 0.2f;
    public float freq = 0.5f;

    void Start()
    {
        DOTween.Init();
        cam = Camera.main;

        Sequence seq = DOTween.Sequence();
        seq.Append(cam.transform.DOMoveY(cam.transform.position.y + yOffset, freq)).Append(cam.transform.DOMoveY(cam.transform.position.y, freq)).SetLoops<Sequence>(-1);
    }


    void Update()
    {
        
    }
}
