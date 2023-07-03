using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

[System.Serializable]
public class PlayerAttack : MonoBehaviourPun
{
    public delegate void PlayerKill();
    public static event PlayerKill OnPlayerKill;

    public delegate void AIKill();
    public static event AIKill OnAIKill;

    [SerializeField] GameObject hitEffect;

    public int attackAngle = 30;
    public float attackRange = 1f;
    private int attackDensity = 1;

    [SerializeField]
    List<Transform> targets = new List<Transform>();

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.KeypadEnter)) Attack();
    }
    private void Attack()
    {
        int searchAngle = (int)attackAngle/2 * attackDensity;

        for (int i = -searchAngle; i < searchAngle; i++)
        {
            RaycastHit hit;

            float angle = transform.rotation.eulerAngles.y;
            if (angle < 0)
            {
                angle += 360;
            }

            //공격각만큼 레이캐스팅
            Vector3 rayDir = ConvertAngleToVector(angle + (float)i / attackDensity);

            if (Physics.Raycast(transform.position, rayDir, out hit, attackRange))
            {
                if (targets.Count == 0) targets.Add(hit.transform);
                if (targets[targets.Count-1] != hit.transform) targets.Add(hit.transform);
            }
        }

        float[] dist = new float[targets.Count];

        for (int i = 0; i < targets.Count; i++)
        {
            dist[i] = Vector3.Distance(transform.position, targets[i].position);
        }

        TargetSorting(dist, targets);

        if (targets[0].transform.CompareTag("AI"))
        {
            Instantiate(hitEffect, transform.position, Quaternion.identity);

            Debug.Log("AI Kill");
            OnAIKill();
            int viewId = targets[0].transform.parent.gameObject.GetPhotonView().ViewID;
            photonView.RPC(nameof(KillAI), RpcTarget.MasterClient, viewId);
        }
        else if (targets[0].transform.CompareTag("Player") && !targets[0].transform.parent.gameObject.GetPhotonView().IsMine)
        {
            Instantiate(hitEffect, transform.position, Quaternion.identity);

            Debug.Log("Player Kill");
            OnPlayerKill();
            int viewId = targets[0].transform.parent.gameObject.GetPhotonView().ViewID;
            photonView.RPC(nameof(KillPlyaer), RpcTarget.All, viewId);
        }

        targets.Clear();
    }

    [PunRPC]
    void KillAI(int viewId)
    {
        PhotonView.Find(viewId).gameObject.GetComponent<AIPattern>().IsAiDead = true;
    }

    [PunRPC]
    void KillPlyaer(int viewId)
    {
        if (PhotonView.Find(viewId).IsMine)
            PhotonView.Find(viewId).gameObject.GetComponent<PlayerController>().IsDead = true;
    }

     private Vector3 ConvertAngleToVector(float deg)
    {
        var rad = deg * Mathf.Deg2Rad;
        return new Vector3(Mathf.Sin(rad), 0, Mathf.Cos(rad));
    }

    void TargetSorting(float[] dist, List<Transform> list)
    {
        int i, j;
        float temp;
        Transform tempT;

        for (i = dist.Length - 1; i > 0; i--)
        {
            // 0 ~ (i-1)까지 반복
            for (j = 0; j < i; j++)
            {
                // j번째와 j+1번째의 요소가 크기 순이 아니면 교환
                if (dist[j] < dist[j + 1])
                {
                    temp = dist[j];
                    tempT = list[j];

                    dist[j] = dist[j + 1];
                    list[j] = list[j + 1];

                    dist[j + 1] = temp;
                    list[j + 1] = tempT;
                }
            }
        }
    }
}
