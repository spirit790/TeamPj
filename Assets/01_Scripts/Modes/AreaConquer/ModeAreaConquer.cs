using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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

    public override void GameStart()
    {
        PlayerController.OnPlayerDie += AreaOwnerDie;
        GameManager.OnPlayersLeftOne += WinGameByKill;
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
                isGameOver = true;
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
    //public IEnumerator AreaCountDown()
    //{
    //    timeLimit = areaTimeLimit;
    //    yield return new WaitForSeconds(timeLimit);
    //    // °ÔÀÓ ½Â¸®
    //    WinGameByArea();
    //}

    public void WinGameByArea()
    {
        Debug.Log($"WinGameByArea : {AreaOwner.name}");
    }
    public void WinGameByKill()
    {

    }
}
