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
        mapGen = GameObject.FindGameObjectWithTag("MapGen").GetComponent<MapGenerator>();
        if (PhotonNetwork.IsMasterClient)
            deadZoneObj = PhotonNetwork.InstantiateRoomObject(deadZone.name, mapGen.areaZonePos, Quaternion.identity);
    }
    public override void GameStart()
    {
        base.GameStart();
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

    protected override void PlayerKillControl()
    {
        base.PlayerKillControl();
    }

    public void SetDeadZonePos(Vector3 pos)
    {
        deadZone.gameObject.transform.localPosition = pos;
        deadZone.gameObject.SetActive(true);
    }
}
