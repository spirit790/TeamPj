using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class ModeAreaConquer : Mode
{
    private float areaTimeLimit = 15f;
    private PlayerController areaOwner;
    public PlayerController AreaOwner
    {
        get
        {
            return areaOwner;
        }
        set
        {
            areaOwner = value;
            if (timeLimit <= areaTimeLimit)
                timeLimit = areaTimeLimit;
        }
    }
    public MapGenerator mapGen;
    public TargetArea area;
    private void Start()
    {
        mapGen = GameObject.FindGameObjectWithTag("MapGen").GetComponent<MapGenerator>();
        if (PhotonNetwork.IsMasterClient)
            PhotonNetwork.InstantiateRoomObject(area.name, mapGen.areaZonePos, Quaternion.identity);
    }
    public override void GameStart()
    {
        PlayerController.OnPlayerDie += AreaOwnerDie;
        base.GameStart();
    }

    protected override void GameOverControl()
    {
        if (AreaOwner != null)
        {
            txtTimeLimit.text = string.Format("{0:0}\n{1}", timeLimit,AreaOwner.name);

            timeLimit -= Time.deltaTime;
            if (timeLimit <= 0)
            {
                WinGameByArea();
            }
        }
    }

    protected override void GameOver()
    {
        base.GameOver();
    }
    public void AreaOwnerDie(PlayerController player)
    {
        if(AreaOwner == player)
        {
            AreaOwner = null;
        }
    }

    public void WinGameByArea()
    {
        IsGameOver = true;
        Debug.Log($"WinGameByArea : {AreaOwner.name}");
        GameManager.Instance.winnerId = AreaOwner.name;
    }
}
