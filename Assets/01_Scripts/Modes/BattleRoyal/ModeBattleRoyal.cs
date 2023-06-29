using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class ModeBattleRoyal : Mode
{

    [Header("DeadZone")]
    public DeadZone deadZone;
    public float shrinkTime;
    public MapGenerator mapGen;
    public GameObject deadZoneObj;


    [Header("Player")]
    public int playersLeft;


    private void Start()
    {
        GameManager.OnPlayersLeftOne += WinGame;
        //deadZone = GetComponentInChildren<DeadZone>();
        mapGen = GameObject.FindGameObjectWithTag("MapGen").GetComponent<MapGenerator>();
        //deadZone.gameObject.SetActive(false);
        if (PhotonNetwork.IsMasterClient)
            deadZoneObj = PhotonNetwork.InstantiateRoomObject(deadZone.name, mapGen.areaZonePos, Quaternion.identity);
        //Debug.Log(deadZone.transform.position);
        //playersLeft = playerList.Count; gm에서 처리?
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

    public void SetDeadZonePos(Vector3 pos)
    {
        deadZone.gameObject.transform.localPosition = pos;
        deadZone.gameObject.SetActive(true);
    }
    public void WinGame()
    {
        Debug.Log($"Winner: {GameManager.Instance.livePlayers[0].name}");
    }
}
