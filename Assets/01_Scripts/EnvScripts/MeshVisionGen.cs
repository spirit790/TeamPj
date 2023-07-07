using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

[System.Serializable]
public class MeshVisionGen : MonoBehaviour
{  
    private List<Vector3> vertices = new List<Vector3>();
    private List<int> triangles = new List<int>();

    [Header("VisionArea")]
    private Transform targetTr;
    public int lightAngle = 160;
    public float lightRange = 10f;
    public int visionDensity = 2;
    private int visionLayer = 1 << 6 | 1 << 9 | 1 << 10;
    private List<Transform> visibleActors = new List<Transform>();

    [Header("VisionQueue")]
    public int visibleRenderQueue = 3001;
    public int invisibleRenderQueue = 3000;

    [Header("LightMesh")]
    private Mesh lightMesh;
    private int verticesIdx = 0;
    private int triangleIdx = 1;

    void Start()
    {
        DOTween.Init();

        //targetTr = GameObject.FindWithTag("Player").GetComponent<Transform>();

        
    }

    void Update()
    {
        if(targetTr != null)
        {
            DrawMeshByAngle();

            transform.position = targetTr.position;

            //시야 내 액터들 확인
            VailActors(visibleActors);
        }
    }


    ///<summary>
    ///range 만큼 레이캐스팅, 정점 생성, 연결 후 메시화 
    ///</summary>
    private void DrawMeshByAngle()
    {
        Vector3 originPos = targetTr.position;
        vertices.Add(originPos - targetTr.position);
        triangles.Add(0);

        verticesIdx = 0;
        triangleIdx = 1;

        int searchAngle = (int)lightAngle/2 * visionDensity;

        for (int i = -searchAngle ; i < searchAngle; i ++)
        {
            RaycastHit hit;

            float angle = targetTr.rotation.eulerAngles.y;
            if (angle < 0)
            {
                angle += 360;
            }

            //시야각만큼 레이캐스팅
            Vector3 rayDir = ConvertAngleToVector(angle + (float)i/visionDensity);

            if (Physics.Raycast(originPos, rayDir, out hit, lightRange, visionLayer))
            {
                if (hit.transform.gameObject.layer == 6)
                {
                    /*
                    시야 영역에 유저나 AI에 있을 때

                    */
                    SkinnedMeshRenderer[] hitRenderers = hit.transform.GetComponentsInChildren<SkinnedMeshRenderer>();
                    MeshRenderer weaponRenderer = hit.transform.GetComponentInChildren<MeshRenderer>();
                    GameObject shadow = hit.transform.parent.Find("Shadow").gameObject;
                    hitRenderers[0].enabled = true;
                    hitRenderers[0].material.renderQueue = visibleRenderQueue;
                    hitRenderers[1].enabled = true;
                    shadow.SetActive(true);
                    hit.transform.gameObject.layer = 7;
                    weaponRenderer.enabled = true;

                    visibleActors.Add(hit.transform);
                }
                else
                {
                    vertices.Add(hit.point - targetTr.position);
                    triangles.Add(++verticesIdx);
                    triangleIdx++;
                }
            }
            else
            {   
                vertices.Add(originPos + rayDir * lightRange - targetTr.position);
                //Debug.Log(originTr.position + rayDir * lightRange);
                triangles.Add(++verticesIdx);
                triangleIdx++;
            }

            //정점 노드를 중첩해 연결
            if (triangleIdx % 3 == 0)
            {
                triangles.Add(0);
                triangleIdx++;
                triangles.Add(verticesIdx);
                triangleIdx++;
            }
        }

        //삼각형 노드가 3의배수가 되도록
        if (triangleIdx > 3 && triangleIdx % 3 == 1)
        {
            triangles.RemoveAt(triangleIdx - 1);
        }
        else if (triangleIdx > 3 && triangleIdx % 3 == 2)
        {
            triangles.RemoveAt(triangleIdx - 1);
            triangles.RemoveAt(triangleIdx - 2);
        }

        //삼각형 생성
        if (triangleIdx > 3)
        {
            lightMesh.Clear();
            lightMesh.vertices = vertices.ToArray();
            lightMesh.triangles = triangles.ToArray();
        }

        //Debug.Log(vertices.Count);
        //Debug.Log(triangles.Count);

        //정점, 삼각형노드 초기화
        vertices.Clear();
        triangles.Clear();
    }

    //시야각 밖의 오브젝트 레이어 변경
    private void VailActors(List<Transform> trs)
    {
        if (trs.Count <= 0) return;

        for (int i = 0; i < trs.Count; i++)
        {
            {
                if (trs[i] != null)
                {
                    if (Mathf.Acos(Vector3.Dot(targetTr.forward, (trs[i].position - transform.position).normalized)) * Mathf.Rad2Deg >= lightAngle / 2)
                    {
                        SkinnedMeshRenderer[] trsRenderer = trs[i].GetComponentsInChildren<SkinnedMeshRenderer>();
                        MeshRenderer weaponRenderer = trs[i].GetComponentInChildren<MeshRenderer>();
                        GameObject shadow = trs[i].parent.Find("Shadow").gameObject;

                        trs[i].gameObject.layer = 6;
                        trsRenderer[0].material.renderQueue = invisibleRenderQueue;
                        trsRenderer[0].enabled = false;
                        trsRenderer[1].enabled = false;
                        shadow.SetActive(false);
                        weaponRenderer.enabled = false;
                        FadeActors(trsRenderer[2], 0, 1f);

                        trs.Remove(trs[i]);
                    }
                        
                }              
            }
        }
    }

    ///<summary>
    ///deg를 radian으로 바꾸고 x,z 방향벡터화
    ///</summary>
    private Vector3 ConvertAngleToVector(float deg)
    {
        var rad = deg * Mathf.Deg2Rad;
        return new Vector3(Mathf.Sin(rad), 0, Mathf.Cos(rad));
    }

    private void FadeActors(Renderer renderer, float alpha, float dur)
    {
        renderer.material.DOFade(alpha, dur);
    }

    public void SetVisionTarget(Transform target)
    {
        targetTr = target;
        lightMesh = GetComponent<MeshFilter>().mesh;
    }
}

