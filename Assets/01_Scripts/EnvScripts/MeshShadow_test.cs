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
    // public float positionOffset = 0;
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
        // player�� �����Ǳ� ����
        // targetTr�� �ν����� �󿡼� ����
        //--------------------------
        //targetTr = GameObject.FindWithTag("Player").GetComponent<Transform>();\
     
        lightMesh = GetComponent<MeshFilter>().mesh;

    }

    void Update()
    {
        DrawMeshByAngle();
        transform.position = targetTr.position;
    }

    ///<summary>
    ///������ŭ ���̸� ���� ��Ʈ ���� �������� ������� �������� �����
    ///�̸� ���� �޽��� ����
    ///</summary>
    public void DrawMeshByAngle()
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

            //���������� ���� ������ ���� �� ���⺤��ȭ
            Vector3 rayDir = ConvertAngleToVector(angle + (float)i/visionDensity);

            if (Physics.Raycast(originPos, rayDir, out hit, lightRange))
            {
                //�ڳ� ��ȯ
                //if (currentHit != null && currentHit != hit.transform)
                //{
                //    //�ڳʿ��� �����Ǵ� ������ ����
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
                    vertices.Add(hit.point - targetTr.position);
                    triangles.Add(++verticesIdx);
                    triangleIdx++;
                //}

                //currentHit = hit.transform;
                //currentHitPoint = hit.point;
            }
            else
            {   
                //���� �ȿ� hit�� ���� ��� ���� ���� ǥ��
                //if (currentHit != null)
                //{
                //    //�ڳʿ��� �����Ǵ� ������ ����
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
                    vertices.Add(originPos + rayDir * lightRange - targetTr.position);
                    //Debug.Log(originTr.position + rayDir * lightRange);
                    triangles.Add(++verticesIdx);
                    triangleIdx++;
                //}

                //currentHit = null;

            }

            //�����ﳢ�� �����ϵ��� ��� ����
            if (triangleIdx % 3 == 0)
            {
                triangles.Add(0);
                triangleIdx++;
                triangles.Add(verticesIdx);
                triangleIdx++;
            }

        }

        //������ ���� 3�� ����� ����
        if (triangleIdx > 3 && triangleIdx % 3 == 1)
        {
            triangles.RemoveAt(triangleIdx - 1);
        }
        else if (triangleIdx > 3 && triangleIdx % 3 == 2)
        {
            triangles.RemoveAt(triangleIdx - 1);
            triangles.RemoveAt(triangleIdx - 2);
        }

        //�������� �ϼ��Ǹ� �޽� ������Ʈ
        if (triangleIdx > 3)
        {
            lightMesh.vertices = vertices.ToArray();
            lightMesh.triangles = triangles.ToArray();
        }

        // Debug.Log(vertices.Count);
        // Debug.Log(triangles.Count);

        //������ ������ ��� �ʱ�ȭ
        vertices.Clear();
        triangles.Clear();

    }

    ///<summary>
    ///deg���� �޾� ����(Mathf)���� ���� �� y�� ���� ���⺤��ȭ 
    ///</summary>
    private Vector3 ConvertAngleToVector(float deg)
    {
        var rad = deg * Mathf.Deg2Rad;
        return new Vector3(Mathf.Sin(rad), 0, MathF.Cos(rad));
    }



    /// <summary>
    /// �ڳ� ������ �Լ�
    ///
    /// </summary>
    /// <param name="pointO">����</param>
    /// <param name="pointA">�ڳ� �� ����</param>
    /// <param name="pointB">�ڳ� �� ����</param>
    /// <returns></returns>
    private Vector3 InterpolateCornerVertex(Vector3 pointO, Vector3 pointA, Vector3 pointB)
    {
        float newPointLength = (pointA + pointB).magnitude / 2;
        Vector3 newPointDir = (pointA + pointA).normalized;

        Vector3 newPoint = pointO + newPointDir * newPointLength;

        return newPoint;
    }

}

