using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
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
        Set(4, 5, 60);
        GameStart();
    }

    private void Start()
    {
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
    void RespawnPlayer(Player player)
    {
        player = deadPlayerList.Dequeue();
    }
    
    IEnumerator RespawnAI()
    {
        yield return new WaitForSeconds(2f);
        while (!isGameOver)
        {
            yield return new WaitForSeconds(AIRespawnTime);
        }
    }
}
