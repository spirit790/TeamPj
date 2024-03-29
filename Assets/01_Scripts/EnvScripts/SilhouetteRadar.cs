using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Photon.Pun;

public class SilhouetteRadar : MonoBehaviour
{
    public Transform playerTr;
    public int radarMaskNum = 6;
    private int layerMask;
    public float radarTime = 2f;
    public float radarRange = 5f;

    private Dictionary<Transform, SkinnedMeshRenderer[]> actorRenderers;
    private MeshVisionGen_Updated vision;
    IEnumerator Start()
    {
        DOTween.Init();
        layerMask = 1 << radarMaskNum;

        vision = GameObject.Find("Vision").GetComponent<MeshVisionGen_Updated>();

        yield return new WaitUntil(()=> vision.isDataSaved);

        actorRenderers = vision.actorRenderers;

        StartCoroutine(VisionRadar());
    }

    IEnumerator VisionRadar()
    {
        while (playerTr != null)
        {
            Debug.DrawLine(playerTr.position, playerTr.position + Vector3.right * radarRange, Color.red, 2f, true);
            var actors = Physics.OverlapSphere(playerTr.position, radarRange, layerMask);

            foreach (var actor in actors)
            {
                //******************************
                if (actor.transform.gameObject.GetPhotonView().IsMine) continue;
                // if (actor.transform == playerTr) continue;
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

        actorRenderers[actor][2].material.DOFade(1, freq * 0.5f);

        //Debug.Log(actor.name + "밝아진다~");

        yield return new WaitForSeconds(freq * 0.5f);

        actorRenderers[actor][2].material.DOFade(0, freq * 0.5f);
        //Debug.Log(actor.name + "흐려진다~");

        yield return new WaitForSeconds(radarTime * 0.5f);
    }

    public void SetRadarCenter(Transform target)
    {
        playerTr = target;
        playerTr.gameObject.layer = 0;
    }


    /*
     * call when my player died
     */

    public void ActivatePlayersOutline()
    {
        StopAllCoroutines();
        
        foreach (var actorKeys in actorRenderers.Keys)
        {
            if(actorKeys.CompareTag("Player"))
            {
                actorKeys.GetComponent<OutlineMarker>().PlayersOutline();
            }

            actorRenderers[actorKeys][2].material.DOFade(1, radarTime * 0.5f);
        }
    }

//#if UNITY_EDITOR
//    void Update()
//    {
//        if (Input.GetKeyDown(KeyCode.F))
//        {
//            ActivatePlayersOutline();

//        }
//        else if (Input.GetKeyDown(KeyCode.G))
//        {
//            StartCoroutine(VisionRadar());
//        }
//    }
//#endif
}
