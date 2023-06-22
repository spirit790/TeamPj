using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModeAreaConquer : Mode
{
    public float areaTimeLimit;
    public Player areaOwner;

    void Start()
    {
        CreatePlayer();
        Player.OnPlayerDie += AreaOwnerDie;
        GameManager.OnPlayersLeftOne += WinGame;
    }

    public void AreaOwnerDie(Player player)
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
        WinGame();
    }

    public void WinGame()
    {

    }
}
