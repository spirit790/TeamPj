using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModeDeathMatch : Mode
{
    Queue<Player> deadPlayerList = new Queue<Player>();

    [Header("AIRespawnTime")]
    [SerializeField]
    float aiRespawnMinTime;
    [SerializeField]
    float aiRespawnMaxTime;

    private void Awake()
    {
        Set(4, 5, 60);
    }

    private void Start()
    {
        CreateAI();
        StartCoroutine(RespawnAI());
    }

    private void Update()
    {
        
    }
    public override void GameOver()
    {
        
    }
    void RespawnPlayer(Player player)
    {
        player = deadPlayerList.Dequeue();
    }
    IEnumerator RespawnAI()
    {
        while (!isGameOver)
        {
            float aiRespawnTime = Random.Range(aiRespawnMinTime, aiRespawnMaxTime);
            yield return new WaitForSeconds(aiRespawnTime);
            aiPool.CreateAI(aiSpawnPos);
            Debug.Log($"Respawn[{aiSpawnPos.x} , {aiSpawnPos.z}]");
        }
    }
}
