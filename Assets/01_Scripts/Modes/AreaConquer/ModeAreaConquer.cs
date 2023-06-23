using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModeAreaConquer : Mode
{
    public float areaTimeLimit;
    public PlayerController areaOwner;

    void Start()
    {
        CreatePlayer();
        PlayerController.OnPlayerDie += AreaOwnerDie;
        GameManager.OnPlayersLeftOne += WinGameByKill;
    }

    public void AreaOwnerDie(PlayerController player)
    {
        if(areaOwner == player)
        {
            StopCoroutine(AreaCountDown());
            areaOwner = null;
        }
    }
    public IEnumerator AreaCountDown()
    {
        yield return new WaitForSeconds(areaTimeLimit);
        // °ÔÀÓ ½Â¸®
        WinGameByArea();
    }

    public void WinGameByArea()
    {
        Debug.Log($"WinGameByArea : {areaOwner.name}");
    }
    public void WinGameByKill()
    {

    }
}
