using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using Photon.Pun;

public class AIPattern : MonoBehaviourPun
{
    NavMeshAgent agent;

    [Header("맵 사이즈")]
    public float mapWidth;
    public float mapHeight;
    [Header("이동")]
    public float moveSpeed;
    public float runSpeed;

    private bool isDead;
    const float TARGET_DISTANCE = 3;

    public delegate void AIDie();
    public static event AIDie OnAIDie;

    Vector3 RandomTargetPos { get { return new Vector3(Random.Range(-mapWidth * 0.1f, mapWidth + mapWidth * 0.1f), 0, Random.Range(-mapHeight * 0.1f, mapHeight + mapHeight * 0.1f)); } }

    float RandomStopTime { get { return Random.Range(2, 10); } }

    public bool IsRunning
    {
        get
        {
            int randomIdx = Random.Range(0, 4);
            if (randomIdx == 1)
                return true;
            else
                return false;
        }
    }
    public bool IsDone 
    {
        get
        {
            float distance = Vector3.Distance(RandomTargetPos, transform.position);
            if (distance < TARGET_DISTANCE)
                return true;
            else
                return false;
        }
        set 
        {
            MoveTo(RandomTargetPos);
            if (IsRunning)
                agent.speed = runSpeed;
            else
                agent.speed = moveSpeed;
        }
    }

    private void Awake()
    {
        agent = GetComponent<NavMeshAgent>();
    }

    void Update()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            if (agent.isStopped)
                agent.speed = 0;
            if (IsDone)
            {
                IsDone = false;
            }
        }
    }
    
    void MoveTo(Vector3 target)
    {
        if (PhotonNetwork.IsMasterClient && !agent.isStopped)
        {
            agent.SetDestination(target);
            StrangeBehaviour();
        }
    }

    void StrangeBehaviour()
    {
        float rand = Random.Range(0, 100);
        if (rand < 20)
        {
            StartCoroutine(StopMove(RandomStopTime));
        }
    }

    public IEnumerator StopMove(float stopTime)
    {
        agent.speed = 0;
        agent.isStopped = true;
        yield return new WaitForSeconds(stopTime);
        agent.isStopped = false;
        agent.speed = moveSpeed;
    }

    public void Stop(bool isStop)
    {
        agent.isStopped = isStop;
    }

    void AIDeadControl()
    {
        agent.isStopped = true;
        GetComponentInChildren<BoxCollider>().enabled = false;
        photonView.RPC(nameof(AIDead), RpcTarget.All,photonView.ViewID);
    }

    private void OnEnable()
    {
        agent.speed = moveSpeed;
        MoveTo(RandomTargetPos);
    }

    private void OnDisable()
    {
        agent.speed = 0;
    }

    private void OnDestroy()
    {
    }
    
    public bool IsAiDead
    {
        get { return IsAiDead; }
        set
        {
            if(value == true)
            {
                OnAIDie();
                AIDeadControl();
            }
        }
    }

    [PunRPC]
    public void AIDead(int viewId)
    {
        PhotonView.Find(viewId).gameObject.SetActive(false);
    }

}
