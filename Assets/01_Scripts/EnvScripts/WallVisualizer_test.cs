using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class WallVisualizer_test : MonoBehaviour
{
    public Transform character;
    private Renderer wallRenderer;
    private int wallLayer = 1 << 9;
    private int visibleWallLayer = 1 << 0 | 1 << 10;
    [SerializeField]
    private List<Renderer> visibleWalls = new List<Renderer>();
    private Transform currentWall;

    void Update()
    {
        InWall();
        OutWall();
    }

    public void InWall()
    {
        float dist = Vector3.Distance(transform.position, character.position);

        Vector3 dir = (character.position - transform.position).normalized;

        RaycastHit hit;

        if (Physics.Raycast(transform.position, dir, out hit, dist, wallLayer))
        {
            if (hit.transform.gameObject.layer == 9)
            {
                Debug.Log("in wall");

                currentWall = hit.transform;

                wallRenderer = hit.transform.GetComponent<Renderer>();
                // Material의 Alpha를 바꾼다.
                ChangeMatAlpha(wallRenderer, 0.5f);
                visibleWalls.Add(wallRenderer);
                wallRenderer.transform.gameObject.layer = 10;
            }
        }
    }

    public void OutWall()
    {
        float dist = Vector3.Distance(transform.position, character.position);

        Vector3 dir = (character.position - transform.position).normalized;

        RaycastHit hit;

        if (Physics.Raycast(transform.position, dir, out hit, dist, visibleWallLayer))
        {
            if (hit.transform.gameObject.layer == 10)
            {
                float savedDist = Vector3.Distance(transform.position, currentWall.position);
                float nowDist = Vector3.Distance(transform.position, hit.transform.position);

                wallRenderer = hit.transform.GetComponent<Renderer>();

                if (savedDist > nowDist)
                {
                    Debug.Log("savedDist > nowDist");
                    ChangeMatAlpha(visibleWalls[visibleWalls.Count], 1.0f);
                    visibleWalls[visibleWalls.Count].gameObject.layer = 10;
                }
                else if (savedDist < nowDist)
                {
                    Debug.Log("savedDist < nowDist");
                    ChangeMatAlpha(wallRenderer, 1.0f);
                    wallRenderer.transform.gameObject.layer = 10;

                }
            }
            else if(hit.transform.gameObject.layer == 0 && visibleWalls.Count != 0)
            {
                Debug.Log("out out");
                ChangeMatAlpha(wallRenderer, 1.0f);
                wallRenderer.transform.gameObject.layer = 10;

                visibleWalls.Clear();
            }


        }

    }

    /// <summary>
    /// 메테리얼의 알파값을 수정
    /// </summary>
    /// <param name="renderer">렌더러</param>
    /// <param name="alpha">0~1 알파값</param>
    public void ChangeMatAlpha(Renderer renderer, float alpha)
    {
        Material mat = renderer.material;
        Color matColor = mat.color;
        matColor.a = alpha;
        mat.color = matColor;
    }

}
