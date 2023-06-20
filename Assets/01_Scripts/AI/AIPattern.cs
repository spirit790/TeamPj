using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using UnityEngine.AI;

public class AIPattern : MonoBehaviour
{
    NavMeshAgent agent;

    [Header("�� ������")]
    public float mapWidth;
    public float mapHeight;
    [Header("�̵�")]
    public float moveSpeed;
    public float runSpeed;

    [SerializeField]
    float targetDistance;

    Vector3 TargetPos { get { return new Vector3(Random.Range(-mapWidth / 2, mapWidth / 2), 0, Random.Range(-mapHeight / 2, mapHeight / 2)); } }

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
            if (distance < targetDistance)
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
        if (IsDone)
        {
            IsDone = false;
        }
    }

    /// <summary>
    /// AI ������ ó�� �Լ�
    /// TODO : ���� �ð� ���� ó��
    /// </summary>
    public void SpawnAI()
    {
        StartCoroutine(StopMove(2f));
    }

    void MoveTo(Vector3 target)
    {
        agent.SetDestination(target);
        StrangeBehaviour();
    }

    void StrangeBehaviour()
    {
        float rand = Random.Range(0, 100);
        if (rand < 5)
        {
            StartCoroutine(StopMove(RandomStopTime));
        }
    }

    IEnumerator StopMove(float stopTime)
    {
        agent.isStopped = true;
        yield return new WaitForSeconds(stopTime);
        agent.isStopped = false;
    }

    private void OnEnable()
    {
        MoveTo(TargetPos);
    }

    private void OnDisable()
    {
        agent.speed = 0;
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("d");
        agent.speed = 0;
    }
}