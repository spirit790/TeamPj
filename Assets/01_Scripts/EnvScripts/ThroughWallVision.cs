using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using DG.Tweening;

[System.Serializable]
public class ThroughWallVision : MonoBehaviour
{
    private List<Transform> visibleWalls = new List<Transform>();

    private Transform camTr;
    public Transform character;
    private int detectingLayer = 1 << 9 | 1 << 10;

    [Range(0.1f, 1f)]
    public float wallFadeTime = 0.33f;

    //public RaycastHit[] hits;

    private void Start()
    {
        DOTween.Init();
        camTr = Camera.main.transform;
    }
    void Update()
    {
        DetectingByCam();
    }

    public void DetectingByCam()
    {
        float dist = Vector3.Distance(camTr.position, character.position);

        Vector3 dir = (character.position - camTr.position).normalized;

        RaycastHit[] hits = Physics.RaycastAll(camTr.position, dir, dist, detectingLayer);

        for (int i = 0; i < hits.Length; i++)
        {
            if(hits[i].transform.gameObject.layer == 9)
            {
                WallAlphaChange(hits[i].transform, 0.5f);
                visibleWalls.Add(hits[i].transform);
                hits[i].transform.gameObject.layer = 10;
            }
            else if(hits[i].transform.gameObject.layer == 10)
            {
               if(hits.Length == 1)
                {
                    for (int j = 0; j < visibleWalls.Count - 1; j++)
                    {
                        WallAlphaChange(visibleWalls[j].transform, 1.0f);
                        visibleWalls[j].transform.gameObject.layer = 9;
                        visibleWalls.Remove(visibleWalls[j]);
                    }
                }
            }
        }

        if (hits.Length == 0)
        {
            for (int i = 0; i < visibleWalls.Count; i++)
            {
                WallAlphaChange(visibleWalls[i].transform, 1.0f);
                visibleWalls[i].transform.gameObject.layer = 9;
                visibleWalls.Remove(visibleWalls[i]);
            }
        }


    }

    private void WallAlphaChange(Transform wall, float alpha)
    {
        Renderer wallRenderer = wall.GetComponent<Renderer>();
 
        if(wallRenderer != null)
        {
            // Material의 Alpha를 바꾼다.
            ChangeMatAlpha(wallRenderer, alpha);
        }
    }


    /// <summary>
    /// 메테리얼의 알파값을 수정
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
        character = target;
    }
}
