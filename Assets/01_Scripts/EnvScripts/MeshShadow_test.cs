using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

[System.Serializable]
public class MeshShadow_test : MonoBehaviour
{   [SerializeField]
    public List<Vector3> vertices = new List<Vector3>();
    [SerializeField]
    public List<int> triangles = new List<int>();

    [Header("VisionArea")]
    public Transform targetTr;
    public float offset = 0;
    public int lightAngle = 160;
    public float lightRange = 10f;

    [Header("LightMesh")]
    public Mesh lightMesh;
    private int verticesIdx = 0;
    private int triangleIdx = 1;

    void Start()
    {
        //--------------------------
        // player�� �����Ǳ� ����
        // targetTr�� �ν����� �󿡼� ����
        //--------------------------
        //targetTr = GameObject.FindWithTag("Player").GetComponent<Transform>();
        lightMesh = GetComponent<MeshFilter>().mesh;

    }

    void Update()
    {
        DrawMeshByAngle();
    }

    ///<summary>
    ///������ŭ ���̸� ���� ��Ʈ ���� �������� ������� �������� �����
    ///�̸� ���� �޽��� ����
    ///</summary>
    public void DrawMeshByAngle()
    {
        Vector3 originPos = targetTr.position + new Vector3(0, offset, 0);
        vertices.Add(originPos);
        triangles.Add(0);

        verticesIdx = 0;
        triangleIdx = 1;

        for (int i = -(int)lightAngle/2; i < (int)lightAngle/2; i++)
        {
            RaycastHit hit;

            float angle = targetTr.rotation.eulerAngles.y;
            if (angle < 0)
            {
                angle += 360;
            }

            //���� ������ ���� �� ����ȭ
            Vector3 rayDir = ConvertAngleToVector(angle + i);

            if (Physics.Raycast(originPos, rayDir, out hit, lightRange))
            {
                if (hit.transform != null)
                {
                    vertices.Add(hit.point);
                    triangles.Add(++verticesIdx);
                    triangleIdx++;
                }
            }
            else
            {   
                //���� �ȿ� hit�� ���� ��� ���� ���� ǥ��
                vertices.Add(originPos + rayDir * lightRange);
                //Debug.Log(originTr.position + rayDir * lightRange);
                triangles.Add(++verticesIdx);
                triangleIdx++;
            }

            //������ ��� ����
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

        //�������� ������ ��� �ʱ�ȭ
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


}

