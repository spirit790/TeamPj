using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

[System.Serializable]
public class MeshShadow_test : MonoBehaviour
{  
    private List<Vector3> vertices = new List<Vector3>();
    private List<int> triangles = new List<int>();

    [Header("VisionArea")]
    public Transform targetTr;
    public float positionOffset = 0;
    public int lightAngle = 160;
    public float lightRange = 10f;
    public int visionDensity = 2;

    //[Header("LightMesh")]
    private Mesh lightMesh;
    private int verticesIdx = 0;
    private int triangleIdx = 1;

    private Transform currentHit;
    private Vector3 currentHitPoint;

    void Start()
    {
        //--------------------------
        // player가 지정되기 전엔
        // targetTr은 인스펙터 상에서 지정
        //--------------------------
        //targetTr = GameObject.FindWithTag("Player").GetComponent<Transform>();
        lightMesh = GetComponent<MeshFilter>().mesh;

    }

    void Update()
    {
        DrawMeshByAngle();
    }

    ///<summary>
    ///각도만큼 레이를 쏴서 히트 점과 오리진을 연결시켜 폴리곤을 만들고
    ///이를 엮어 메쉬로 만듦
    ///</summary>
    public void DrawMeshByAngle()
    {
        Vector3 originPos = targetTr.position + new Vector3(0, positionOffset, 0);
        vertices.Add(originPos);
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

            //수색범위를 라디안 단위로 변경 후 방향벡터화
            Vector3 rayDir = ConvertAngleToVector(angle + (float)i/visionDensity);

            if (Physics.Raycast(originPos, rayDir, out hit, lightRange))
            {
                //코너 전환
                //if (currentHit != null && currentHit != hit.transform)
                //{
                //    //코너에서 생성되는 폴리곤 보정
                //    vertices.Add(InterpolateCornerVertex(originPos, currentHitPoint, hit.point));
                //    triangles.Add(++verticesIdx);
                //    triangleIdx++;

                //    triangles.Add(0);
                //    triangleIdx++;

                //    vertices.Add(originPos + InterpolateCornerVertex(originPos, currentHitPoint, hit.point).normalized * (currentHitPoint + hit.point).magnitude/2);
                //    triangles.Add(++verticesIdx);
                //    triangleIdx++;

                //    vertices.Add(hit.point);
                //    triangles.Add(++verticesIdx);
                //    triangleIdx++;
                //}
                //else
                //{
                    vertices.Add(hit.point);
                    triangles.Add(++verticesIdx);
                    triangleIdx++;
                //}

                //currentHit = hit.transform;
                //currentHitPoint = hit.point;
            }
            else
            {   
                //범위 안에 hit가 없는 경우 수색 범위 표시
                //if (currentHit != null)
                //{
                //    //코너에서 생성되는 폴리곤 보정
                //    vertices.Add(InterpolateCornerVertex(originPos, currentHitPoint, originPos + rayDir * lightRange));
                //    triangles.Add(++verticesIdx);
                //    triangleIdx++;

                //    triangles.Add(0);
                //    triangleIdx++;
                    
                //    vertices.Add(originPos + InterpolateCornerVertex(originPos, currentHitPoint, originPos + rayDir * lightRange).normalized * (currentHitPoint + hit.point).magnitude / 2);
                //    triangles.Add(++verticesIdx);
                //    triangleIdx++;

                //    vertices.Add(originPos + rayDir * lightRange);
                //    triangles.Add(++verticesIdx);
                //    triangleIdx++;
                //}
                //else
                //{
                    vertices.Add(originPos + rayDir * lightRange);
                    //Debug.Log(originTr.position + rayDir * lightRange);
                    triangles.Add(++verticesIdx);
                    triangleIdx++;
                //}

                //currentHit = null;

            }

            //폴리곤끼리 연속하도록 노드 연결
            if (triangleIdx % 3 == 0)
            {
                triangles.Add(0);
                triangleIdx++;
                triangles.Add(verticesIdx);
                triangleIdx++;
            }

        }

        //폴리곤 노드는 3의 배수로 조정
        if (triangleIdx > 3 && triangleIdx % 3 == 1)
        {
            triangles.RemoveAt(triangleIdx - 1);
        }
        else if (triangleIdx > 3 && triangleIdx % 3 == 2)
        {
            triangles.RemoveAt(triangleIdx - 1);
            triangles.RemoveAt(triangleIdx - 2);
        }

        //폴리곤이 완성되면 메쉬 업데이트
        if (triangleIdx > 3)
        {
            lightMesh.vertices = vertices.ToArray();
            lightMesh.triangles = triangles.ToArray();
        }

        // Debug.Log(vertices.Count);
        // Debug.Log(triangles.Count);

        //정점과 폴리곤 노드 초기화
        vertices.Clear();
        triangles.Clear();

    }

    ///<summary>
    ///deg값을 받아 라디안(Mathf)으로 변경 후 y축 기준 방향벡터화 
    ///</summary>
    private Vector3 ConvertAngleToVector(float deg)
    {
        var rad = deg * Mathf.Deg2Rad;
        return new Vector3(Mathf.Sin(rad), 0, MathF.Cos(rad));
    }



    /// <summary>
    /// 코너 보정용 함수
    ///
    /// </summary>
    /// <param name="pointO">원점</param>
    /// <param name="pointA">코너 전 정점</param>
    /// <param name="pointB">코너 후 정점</param>
    /// <returns></returns>
    private Vector3 InterpolateCornerVertex(Vector3 pointO, Vector3 pointA, Vector3 pointB)
    {
        float newPointLength = (pointA + pointB).magnitude / 2;
        Vector3 newPointDir = (pointA + pointA).normalized;

        Vector3 newPoint = pointO + newPointDir * newPointLength;

        return newPoint;
    }

}

