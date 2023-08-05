using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using DG.Tweening;
using System;
using UnityEngine.TextCore.Text;
using Unity.Mathematics;

[System.Serializable]
public class ThroughWallVision : MonoBehaviour
{
    private List<Transform> transWalls = new List<Transform>();

    private Transform camTr;
    public Transform characterTr;
    private int detectingLayer = 1 << 9 | 1 << 10;
    public float wallFreq = 0.1f;

    [Range(0.1f, 1f)]
    public float wallFadeTime = 0.33f;

    private GameObject[] wallNum;
    private Dictionary<Transform, Renderer[]> wallRenderers = new Dictionary<Transform, Renderer[]>();


    //public RaycastHit[] hits;

    IEnumerator Start()
    {
        DOTween.Init();
        camTr = Camera.main.transform;

        //yield return new WaitUntil(()=> GameManager.Instance.isLoaded);

        wallNum = GameObject.FindGameObjectsWithTag("WALL");

        for (int i = 0; i < wallNum.Length; i++)
        {
            wallRenderers.Add(wallNum[i].transform, wallNum[i].GetComponentsInChildren<Renderer>());
            wallNum[i].layer = 9;
        }

        yield return new WaitForSeconds(1f);

        StartCoroutine(DetectingByCam());
    }

    IEnumerator DetectingByCam()
    {
        while (characterTr != null)
        {
            float dist = Vector3.Distance(camTr.position, characterTr.position);

            Vector3 dir = (characterTr.position - camTr.position).normalized;

            RaycastHit[] hits = Physics.RaycastAll(camTr.position, dir, dist, detectingLayer);

            for (int i = 0; i < hits.Length; i++)
            {
                if (hits[i].transform.gameObject.layer == 9)
                {
                    //Make matarial transparent
                    WallAlphaChange(hits[i].transform, 0.5f);
                    transWalls.Add(hits[i].transform);
                    hits[i].transform.gameObject.layer = 10;
                }
                else if (hits[i].transform.gameObject.layer == 10 && hits.Length == 1)
                {
                    //when only 1 wall remains
                    for (int j = 0; j < transWalls.Count - 1; j++)
                    {
                        WallAlphaChange(transWalls[j].transform, 1.0f);
                        transWalls[j].transform.gameObject.layer = 9;
                        transWalls.Remove(transWalls[j]);
                    }
                }
            }

            //Make matarial opaque
            if (hits.Length == 0)
            {
                for (int i = 0; i < transWalls.Count; i++)
                {
                    WallAlphaChange(transWalls[i].transform, 1.0f);
                    transWalls[i].transform.gameObject.layer = 9;
                    transWalls.Remove(transWalls[i]);
                }
            }

            yield return new WaitForSeconds(wallFreq);
        }
    }

    private void WallAlphaChange(Transform wall, float alpha)
    {
        if (wallRenderers[wall] == null) return;

        // Material의 Alpha를 바꾼다.
        for (int i = 0; i < wallRenderers[wall].Length-1; i++)
        {
            //ChangeMatAlpha(wallRenderers[wall][i], alpha);
            wallRenderers[wall][i].material.DOFade(alpha, wallFadeTime);

        }
    }


    /// <summary>
    /// 메테리얼의 알파값을 인스턴스후 수정
    /// </summary>
    /// <param name="renderer">렌더러</param>
    /// <param name="alpha">0~1 알파값</param>
    private void ChangeMatAlpha(Renderer renderer, float alpha)
    {
        Material mat = renderer.material;
        //Color matColor = mat.color;

        //if (alpha > 0.5f) matColor = Color.white;
        //else if (alpha <= 0.5f) matColor = Color.black;

        mat.DOFade(alpha, wallFadeTime);
        //mat.color = matColor;
    }
    public void SetWallTarget(Transform target)
    {
        characterTr = target;
    }
}
