using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using Photon.Pun;

public class AIPattern : MonoBehaviourPun
{
    NavMeshAgent agent;

    [Header("�� ������")]
    public float mapWidth;
    public float mapHeight;
    [Header("�̵�")]
    public float moveSpeed;
    public float runSpeed;

    private bool isDead;
    const float TARGET_DISTANCE = 3;

    public delegate void AIDie();
    public static event AIDie OnAIDie;

    Vector3 TargetPos { get { return new Vector3(Random.Range(-mapWidth * 0.1f, mapWidth + mapWidth * 0.1f), 0, Random.Range(-mapHeight * 0.1f, mapHeight + mapHeight * 0.1f)); } }

    float RandomStopTime { get { return Random.Range(0, 3); } }

    public bool IsRunning
    {
        get
        {
            int randomIdx = Random.Range(0, 2);
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
            float distance = Vector3.Distance(TargetPos, transform.position);
            if (distance < TARGET_DISTANCE)
                return true;
            else
                return false;
        }
        set 
        {
            MoveTo(TargetPos);
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
            if (IsDone)
            {
                IsDone = false;
            }
        }
    }
    
    void MoveTo(Vector3 target)
    {
        if (PhotonNetwork.IsMasterClient)
        {
            agent.SetDestination(target);
            StrangeBehaviour();
        }
    }

    void StrangeBehaviour()
    {
        float rand = Random.Range(0, 100);
        if (rand < 5)
        {
            StartCoroutine(StopMove(RandomStopTime));
        }
    }

    public IEnumerator StopMove(float stopTime)
    {
        enabled = false;
        yield return new WaitForSeconds(stopTime);
        enabled = true;
    }

    private void OnEnable()
    {
        MoveTo(TargetPos);
    }

    private void OnDisable()
    {
        agent.speed = 0;
    }

    private void OnDestroy()
    {
        OnAIDie();
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("d");
        agent.speed = 0;
    }

    public bool IsAiDead
    {
        get { return IsAiDead; }
        set
        {
            if(value == true)
            {
                AiDead();
            }
        }
    }

    public void AiDead()
    {
        Debug.Log("AI �� ����!!!!!!!!!!!!");
        PhotonNetwork.Destroy(gameObject);
    }

}
