using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class AIPattern : MonoBehaviour
{
    NavMeshAgent agent;

    [Header("MapSize")]
    public float mapWidth;
    public float mapHeight;

    Vector3 targetPos { get { return new Vector3(Random.Range(-mapWidth / 2, mapWidth / 2), 0, Random.Range(-mapHeight / 2, mapHeight / 2)); } }


    float randomStopTime { get { return Random.Range(0, 5); } }
    public bool isRunning
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

    public float targetDistance;

    public float moveSpeed;
    public float runSpeed;
    public bool isDone 
    {
        get
        {
            float distance = Vector3.Distance(targetPos, transform.position);
            if (distance < targetDistance)
                return true;
            else
                return false;
        }
        set {}
    }

    private void Awake()
    {
        agent = GetComponent<NavMeshAgent>();
        agent.speed = moveSpeed;
    }

    void Start()
    {
    }

    void Update()
    {
        StrangeBehaviour();

        if (isDone)
        {
            isDone = false;
            MoveTo(targetPos);
            if (isRunning)
                agent.speed = runSpeed;
            else
                agent.speed = moveSpeed;
        }

    }
    void StrangeBehaviour()
    {
        int rand = Random.Range(0, 200);
        if (rand < 1)
            StartCoroutine(StopMove(randomStopTime));
    }
    
    void MoveTo(Vector3 target)
    {
        agent.SetDestination(target);
    }

    IEnumerator StopMove(float stopTime)
    {
        agent.isStopped = true;
        yield return new WaitForSeconds(stopTime);
        agent.isStopped = false;
    }
    private void OnEnable()
    {
        MoveTo(targetPos);
    }
}
