using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModeBattleRoyal : Mode
{

    public float shrinkTime;
    private float timer;
    private int timeCount;
    private int TimeCount
    {
        get
        {
            return timeCount;
        }
        set
        {
            timeCount = value;
            Debug.Log(timeCount);
            float newRadius = ((timeLimit - timeCount * shrinkTime) / timeLimit) * deadZone.radius;
            deadZone.SetDeadZoneRadius(newRadius, shrinkTime / 2);
        }
    }

    public DeadZone deadZone;
    public GameObject playerPrefab;

    void Awake()
    {
        Debug.Log("awake");
        Set(8, 5, 60f); // test
    }

    
    private void Start()
    {

    }

    void Update()
    {
        timer += Time.deltaTime;
        if (timer >= shrinkTime)
        {
            timer = 0;
            TimeCount++;
        }
    }
}
