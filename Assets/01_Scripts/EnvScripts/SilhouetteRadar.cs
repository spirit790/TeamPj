using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class SilhouetteRadar : MonoBehaviour
{
    private Transform centerTr;
    public int radarMaskNum = 6;
    private int layerMask;
    private float curTime;
    public float radarTime = 2f;
    public float radarRange = 5f;

    private void Awake()
    {
        gameObject.layer = 0;
    }
    void Start()
    {
        DOTween.Init();
        layerMask = 1 << radarMaskNum;
        centerTr = GetComponent<Transform>();
    }

    void Update()
    {
        curTime += Time.deltaTime;

        if(curTime >= radarTime)
        {
            InvisibleRadar();
            curTime = 0;
        }
    }

    private void InvisibleRadar()
    {
        Debug.DrawLine(centerTr.position, centerTr.position + Vector3.right * radarRange, Color.red, 2f, true);
        var actors =  Physics.OverlapSphere(centerTr.position, radarRange, layerMask);

        foreach (var actor in actors)
        {
            if (actor.name == "Player") continue;

            StartCoroutine(RadarFade(actor.transform, radarTime));
        }
    }

    IEnumerator RadarFade(Transform actor, float freq)
    {
        SkinnedMeshRenderer[] actorRenderer = actor.GetComponentsInChildren<SkinnedMeshRenderer>();

        if (actorRenderer == null) yield break;

        float rnd = Random.Range(0.5f, 1.5f);

        yield return new WaitForSeconds(rnd);

        actorRenderer[0].material.DOFade(1, freq / 2);
        actorRenderer[2].material.DOFade(1, freq / 2);

        //Debug.Log(actor.name + "�������~");

        yield return new WaitForSeconds(freq / 2);

        actorRenderer[0].material.DOFade(0, freq / 2);
        actorRenderer[2].material.DOFade(0, freq / 2);

        //Debug.Log(actor.name + "�������~");

        yield return new WaitForSeconds(radarTime / 2);
    }
}