using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Photon.Pun;

public class SilhouetteRadar : MonoBehaviour
{
    private Transform playerTr;
    public int radarMaskNum = 6;
    private int layerMask;
    private float curTime;
    public float radarTime = 2f;
    public float radarRange = 5f;

    void Start()
    {
        DOTween.Init();
        layerMask = 1 << radarMaskNum;
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
        if(playerTr != null)
        {
            Debug.DrawLine(playerTr.position, playerTr.position + Vector3.right * radarRange, Color.red, 2f, true);
            var actors = Physics.OverlapSphere(playerTr.position, radarRange, layerMask);

            foreach (var actor in actors)
            {
                if (actor.gameObject.CompareTag("Player"))
                {
                    if (actor.transform.parent.gameObject.GetPhotonView().IsMine) 
                        continue;
                    StartCoroutine(RadarFade(actor.transform, radarTime));
                }                                       
                if (actor.gameObject.CompareTag("AI"))
                {                   
                    StartCoroutine(RadarFade(actor.transform, radarTime));
                }

            }
        }
    }

    IEnumerator RadarFade(Transform actor, float freq)
    {
        SkinnedMeshRenderer[] actorRenderer = actor.GetComponentsInChildren<SkinnedMeshRenderer>();
        if (actorRenderer == null) yield break;

        float rnd = Random.Range(0.5f, 1.5f);

        yield return new WaitForSeconds(rnd);

        actorRenderer[0].material.DOFade(1, freq / 2);
        //actorRenderer[1].enabled = true;
        actorRenderer[2].material.DOFade(1, freq / 2);

        //Debug.Log(actor.name + "¹à¾ÆÁø´Ù~");

        yield return new WaitForSeconds(freq / 2);

        actorRenderer[0].material.DOFade(0, freq / 2);
        //actorRenderer[1].enabled = false;
        actorRenderer[2].material.DOFade(0, freq / 2);
        //weaponRenderer.material.DOFade(0, freq / 2);
        //Debug.Log(actor.name + "Èå·ÁÁø´Ù~");

        yield return new WaitForSeconds(radarTime / 2);
    }

    public void SetRadarCenter(Transform target)
    {
        playerTr = target;
        playerTr.gameObject.layer = 0;
    }
}
