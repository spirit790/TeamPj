using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModeBattleRoyal : Mode
{

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
            //Debug.Log(timeCount);
            float newRadius = ((timeLimit - timeCount * shrinkTime) / timeLimit) * deadZone.radius;
            deadZone.SetDeadZoneRadius(newRadius, shrinkTime / 2);
        }
    }

    [Header("DeadZone")]
    public DeadZone deadZone;
    public float shrinkTime;

    [Header("Player")]
    public int playersLeft;

    
    private void Start()
    {
        GameManager.OnPlayersLeftOne += WinGame;
        //playersLeft = playerList.Count; gm에서 처리?
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
    public override void GameStart()
    {
        base.GameStart();
        //StartCoroutine(RespawnAI());
    }

    protected override void GameOverControl()
    {
        base.GameOverControl();
    }

    protected override void GameOver()
    {
        base.GameOver();
    }
    public void DeSpawnAI()
    {
        
    }

    public void WinGame()
    {
        Debug.Log($"Winner: {GameManager.Instance.livePlayers[0].name}");
    }
}
