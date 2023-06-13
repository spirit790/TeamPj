using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class AIPattern : MonoBehaviour
{
    NavMeshAgent agent;

    int RandomX { get { return Random.Range(0, 41); } }
    int RandomZ { get { return Random.Range(0, 41); } }
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

    public Vector3 targetPos;

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
        targetPos = new Vector3(RandomX, 0, RandomZ);
    }

    void Start()
    {
        MoveTo(targetPos);
    }

    void Update()
    {
        StrangeBehaviour();

        if (isDone)
        {
            isDone = false;
            targetPos = new Vector3(RandomX, 0, RandomZ);
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
}
