using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

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
    private int visionLayer = 1 << 9 | 1 << 10;

    [Header("LightMesh")]
    private Mesh lightMesh;
    private int verticesIdx = 0;
    private int triangleIdx = 1;

    void Start()
    {
        targetTr = GameObject.FindWithTag("Player").GetComponent<Transform>();
     
        lightMesh = GetComponent<MeshFilter>().mesh;
    }

    void Update()
    {
        DrawMeshByAngle();
        transform.position = targetTr.position;
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

                vertices.Add(hit.point - targetTr.position);
                triangles.Add(++verticesIdx);
                triangleIdx++;

            }
            else
            {   
                vertices.Add(originPos + rayDir * lightRange - targetTr.position);
                //Debug.Log(originTr.position + rayDir * lightRange);
                triangles.Add(++verticesIdx);
                triangleIdx++;
            }

            //삼각형 정점을 중첩해 연결
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
            lightMesh.vertices = vertices.ToArray();
            lightMesh.triangles = triangles.ToArray();
        }

        // Debug.Log(vertices.Count);
        // Debug.Log(triangles.Count);

        //정점, 삼각형노드 초기화
        vertices.Clear();
        triangles.Clear();
    }

    ///<summary>
    ///deg를 radian으로 바꾸고 x,z 방향벡터화
    ///</summary>
    private Vector3 ConvertAngleToVector(float deg)
    {
        var rad = deg * Mathf.Deg2Rad;
        return new Vector3(Mathf.Sin(rad), 0, Mathf.Cos(rad));
    }


}

