using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ModeDeathMatch : Mode
{
    Queue<Player> deadPlayerList = new Queue<Player>();

    [Header("AI 리스폰 시간")]
    [SerializeField]
    float aiRespawnMinTime;
    [SerializeField]
    float aiRespawnMaxTime;

    float AIRespawnTime { get { return Random.Range(aiRespawnMinTime, aiRespawnMaxTime); } }

    private void Awake()
    {
        Set(1, 1, 10);
        CreateAI();
    }

    private void Start()
    {
        StartCoroutine(GamePlaying());
        StartCoroutine(RespawnAI());
    }

    private void Update()
    {
        
    }

    protected override void GameOver()
    {
        base.GameOver();
    }
    void RespawnPlayer(Player player)
    {
        player = deadPlayerList.Dequeue();
    }
    
    IEnumerator RespawnAI()
    {
        while (!isGameOver)
        {
            aiPool.PoolAI(aiSpawnPos);
            yield return new WaitForSeconds(AIRespawnTime);
        }
    }
}
