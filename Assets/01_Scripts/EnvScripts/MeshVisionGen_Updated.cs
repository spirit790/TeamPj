using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using System.Linq;
using Photon.Pun;

[System.Serializable]
public class MeshVisionGen_Updated : MonoBehaviour
{
    private static MeshVisionGen_Updated instance;
    public static MeshVisionGen_Updated Instance
    {
        get { return instance; }
        set
        {

        }
    }
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
    public int myRenderQueue = 3002;
    public float visionFreq = 0.1f;

    [Header("LightMesh")]
    private Mesh lightMesh;
    private int verticesIdx = 0;
    private int triangleIdx = 1;

    [Header("MeshDatas")]
    private GameObject[] playerNum;
    private GameObject[] aiNum;

    public Dictionary<Transform, SkinnedMeshRenderer[]> actorRenderers = new Dictionary<Transform, SkinnedMeshRenderer[]>();
    public Dictionary<Transform, MeshRenderer[]> accRenderers = new Dictionary<Transform, MeshRenderer[]>();

    public bool isDataSaved = false;

    IEnumerator Start()
    {
        DOTween.Init();

        // targetTr = GameObject.FindWithTag("Player").GetComponent<Transform>();
        lightMesh = GetComponent<MeshFilter>().mesh;

        /*
        Wait 'til loading done; 
        */

        yield return new WaitUntil(() => ModelManager.Instance.isModelSet);

        yield return StartCoroutine(GetRenderDatas());

        isDataSaved = true;

        yield return new WaitForSeconds(1f);

        StartCoroutine(DrawMeshByAngle());
    }

     /*
     * *******************************
     * note:
     * 0 == 모델링
     * 1 == 표정
     * length-1 == 아웃라인
     * 
     * acc 0 == 무기
     * acc 1 == 그림자
     * *******************************
     */
    IEnumerator GetRenderDatas()
    {
        yield return playerNum = GameObject.FindGameObjectsWithTag("Player");
        yield return aiNum = GameObject.FindGameObjectsWithTag("AI");

        //players' datas
        for (int i = 0; i < playerNum.Length; i++)
        {
            //my character always goes front
            if (playerNum[i].transform.gameObject.GetPhotonView().IsMine)
            // if (i == 0) for self-test
            {
                SkinnedMeshRenderer[] myRenderers = playerNum[i].transform.gameObject.GetComponentsInChildren<SkinnedMeshRenderer>();

                for (int j = 0; j < myRenderers.Length - 1; j++)
                {
                    SkinnedMeshRenderer myRender = myRenderers[j];
                    myRender.material.renderQueue = j == 0 || j == 1 ? myRenderQueue + 1 : myRenderQueue;
                }

                MeshRenderer[] meshAccRenderers = playerNum[i].transform.gameObject.GetComponentsInChildren<MeshRenderer>();
                for (int k = 0; k < meshAccRenderers.Length; k++)
                {
                    MeshRenderer myRender = meshAccRenderers[k];
                    myRender.material.renderQueue = myRenderQueue;
                }
                continue;
            }

            actorRenderers.Add(playerNum[i].transform, playerNum[i].GetComponentsInChildren<SkinnedMeshRenderer>());
            accRenderers.Add(playerNum[i].transform, playerNum[i].GetComponentsInChildren<MeshRenderer>());
            ChangeMeshVisiblity(playerNum[i].transform, false);
        }

        //AIs' datas
        for (int i = 0; i < aiNum.Length; i++)
        {
            actorRenderers.Add(aiNum[i].transform, aiNum[i].GetComponentsInChildren<SkinnedMeshRenderer>());
            accRenderers.Add(aiNum[i].transform, aiNum[i].GetComponentsInChildren<MeshRenderer>());
            ChangeMeshVisiblity(aiNum[i].transform, false);

        }

        yield return null;
    }


    ///<summary>
    ///range 만큼 레이캐스팅, 정점 생성, 연결 후 메시화 
    ///</summary>
    IEnumerator DrawMeshByAngle()
    {
        while (targetTr != null)
        {
            transform.position = targetTr.position + Vector3.up * 0.2f;

            Vector3 originPos = targetTr.position;
            vertices.Add(originPos - targetTr.position);
            triangles.Add(0);

            verticesIdx = 0;
            triangleIdx = 1;

            int searchAngle = (int)(lightAngle * 0.5f) * visionDensity;

            for (int i = -searchAngle; i < searchAngle; i++)
            {
                RaycastHit hit;

                float angle = targetTr.rotation.eulerAngles.y;
                if (angle < 0)
                {
                    angle += 360;
                }

                //시야각만큼 레이캐스팅
                Vector3 rayDir = ConvertAngleToVector(angle + (float)i / visionDensity);

                if (Physics.Raycast(originPos, rayDir, out hit, lightRange, visionLayer))
                {
                    if (hit.transform.gameObject.layer == 6)
                    {
                        /*
                        시야 영역에 유저나 AI에 있을 때

                        */

                        actorRenderers[hit.transform][0].material.renderQueue = visibleRenderQueue;

                        ChangeMeshVisiblity(hit.transform, true);

                        hit.transform.gameObject.layer = 7;

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

            yield return StartCoroutine(VailActors(visibleActors));

            yield return new WaitForSeconds(visionFreq);
        }
    }

    //시야각 밖의 오브젝트 레이어 변경
    IEnumerator VailActors(List<Transform> trs)
    {

        if (trs.Count <= 0) yield break;

        for (int i = 0; i < trs.Count; i++)
        {
            if (Mathf.Acos(Vector3.Dot(targetTr.forward, (trs[i].position - transform.position).normalized)) * Mathf.Rad2Deg >= lightAngle * 0.5f)
            {
                ChangeMeshVisiblity(trs[i], false);
                actorRenderers[trs[i]][0].material.renderQueue = invisibleRenderQueue;

                trs[i].gameObject.layer = 6;

                trs.Remove(trs[i]);
            }
        }

    }



    private void ChangeMeshVisiblity(Transform actors, bool isVisible)
    {
        if (actors == null) return;

        for (int i = 0; i < actorRenderers[actors].Length - 1; i++)
        {
            actorRenderers[actors][i].enabled = isVisible;
            //actorRenderers[actors][i].gameObject.layer = targetLayer;
        }

        actorRenderers[actors][actorRenderers[actors].Length - 1].enabled = !isVisible;
        actorRenderers[actors][actorRenderers[actors].Length - 1].material.DOFade(isVisible ? 1 : 0, 1f);

        for (int j = 0; j < accRenderers[actors].Length; j++)
        {
            accRenderers[actors][j].enabled = isVisible;
            //accRenderers[actors][j].gameObject.layer = targetLayer;
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

    public void InitActors()
    {
        StopAllCoroutines();
        visibleActors.Clear();
        foreach (var actors in actorRenderers.Keys)
        {
            actors.gameObject.layer = 7;
            actorRenderers[actors][0].material.renderQueue = visibleRenderQueue;

            ChangeMeshVisiblity(actors, true);
        }

        //gameObject.SetActive(false);
    }

    //#if UNITY_EDITOR
    //    void Update()
    //    {
    //        if (Input.GetKeyDown(KeyCode.F))
    //        {
    //            InitActors();

    //        }
    //        else if (Input.GetKeyDown(KeyCode.G))
    //        {
    //            StartCoroutine(DrawMeshByAngle());
    //        }
    //    }
    //#endif
}

