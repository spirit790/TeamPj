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
        Debug.DrawLine(centerTr.position, centerTr.position + Vector3.right * radarRange);
        var actors =  Physics.OverlapSphere(centerTr.position, radarRange, layerMask);

        foreach (var actor in actors)
        {
            if (actor.name == "Player") continue;

            StartCoroutine(RadarFade(actor.transform));
        }
    }

    IEnumerator RadarFade(Transform actor)
    {
        float rnd = Random.Range(0, 1f);

        yield return new WaitForSeconds(rnd);

        actor.GetComponentsInChildren<SkinnedMeshRenderer>()[0].material.DOFade(0, radarTime/2);
        actor.GetComponentsInChildren<SkinnedMeshRenderer>()[2].material.DOFade(0, radarTime/2);

        Debug.Log(actor.name + "Èå·ÁÁø´Ù~");

        yield return new WaitForSeconds(radarTime / 2);

        actor.GetComponentsInChildren<SkinnedMeshRenderer>()[0].material.DOFade(1, radarTime / 2);
        actor.GetComponentsInChildren<SkinnedMeshRenderer>()[2].material.DOFade(1, radarTime / 2);

        Debug.Log(actor.name + "¹à¾ÆÁø´Ù~");

        yield return new WaitForSeconds(radarTime / 2);
    }
}
