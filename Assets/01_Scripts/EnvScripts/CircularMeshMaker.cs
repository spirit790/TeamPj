using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;

[System.Serializable]
public class CircularMeshMaker : MonoBehaviour
{
    private List<Vector3> vertices = new List<Vector3>();
    private List<int> triangles = new List<int>();

    [Header("Polygons")]
    [Range(3, 30)]
    public int vertexNum = 3;
    public float shapeSize = 10f;
    public Vector3 shapeOffset = Vector3.zero;

    private MeshFilter mesh;
    private int verticesIdx = 0;
    private int triangleIdx = 1;

    void OnValidate()
    {
        if (mesh == null) return;

        if (shapeSize > 0 || shapeOffset.magnitude > 0 || vertexNum >= 3)
        {
            DrawShape(mesh);
        }
    }

    void Start()
    {

        mesh = GetComponent<MeshFilter>();


        DrawShape(mesh);

    }

    public void DrawShape(MeshFilter meshFilter)
    {
        meshFilter.mesh = null;

        Mesh mesh = new Mesh();
        Vector3 originPos = transform.position;
        vertices.Add(originPos);
        triangles.Add(0);

        verticesIdx = 0;
        triangleIdx = 1;



        for (int i = 0; i < vertexNum; i++)
        {
            Vector3 dir = ConvertAngleToVector(360/vertexNum * (i + 1));

            vertices.Add(originPos + dir * shapeSize);
            triangles.Add(++verticesIdx);
            triangleIdx++;

            if (triangleIdx % 3 == 0)
            {
                triangles.Add(0);
                triangleIdx++;
                triangles.Add(verticesIdx);
                triangleIdx++;
            }

        }

        vertices.Add(vertices[1]);
        triangles.Add(1);

        mesh.vertices = vertices.ToArray();
        mesh.triangles = triangles.ToArray();

        meshFilter.mesh = mesh;

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

}