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
    public float radarTime = 2f;
    public float radarRange = 5f;

    private Dictionary<Transform, SkinnedMeshRenderer[]> actorRenderers;

    IEnumerator Start()
    {
        DOTween.Init();
        layerMask = 1 << radarMaskNum;


        yield return null;

        actorRenderers = GameObject.Find("Vision").GetComponent<MeshVisionGen_Updated>().actorRenderers;

        StartCoroutine(InvisibleRadar());
    }


    IEnumerator InvisibleRadar()
    {
        while (playerTr != null)
        {

            Debug.DrawLine(playerTr.position, playerTr.position + Vector3.right * radarRange, Color.red, 2f, true);
            var actors = Physics.OverlapSphere(playerTr.position, radarRange, layerMask);

            foreach (var actor in actors)
            {
                if (actor.transform.parent.gameObject.GetPhotonView().IsMine) continue;

                StartCoroutine(RadarFade(actor.transform, radarTime));
            }

            yield return new WaitForSeconds(radarTime);
        }
    }

    IEnumerator RadarFade(Transform actor, float freq)
    {
        
        if (actor == null) yield break;

        float rnd = Random.Range(5, 15) * 0.1f;

        yield return new WaitForSeconds(rnd);

        actorRenderers[actor][0].material.DOFade(1, freq * 0.5f);
        actorRenderers[actor][2].material.DOFade(1, freq * 0.5f);

        //Debug.Log(actor.name + "¹à¾ÆÁø´Ù~");

        yield return new WaitForSeconds(freq * 0.5f);

        actorRenderers[actor][0].material.DOFade(0, freq * 0.5f);
        actorRenderers[actor][2].material.DOFade(0, freq * 0.5f);
        //Debug.Log(actor.name + "Èå·ÁÁø´Ù~");

        yield return new WaitForSeconds(radarTime * 0.5f);
    }

    public void SetRadarCenter(Transform target)
    {
        playerTr = target;
        playerTr.gameObject.layer = 0;
    }
}
