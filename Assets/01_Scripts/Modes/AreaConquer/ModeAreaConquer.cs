using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModeAreaConquer : Mode
{
    public float areaTimeLimit;
    public Player areaOwner;

    void Start()
    {
        Player.OnPlayerDie += AreaOwnerDie;
    }

    void Update()
    {
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
    }

    void WinByLastSurvive()
    {
        if(GameManager.Instance.livePlayers.Count == 1)
        {
            Player winner = GameManager.Instance.livePlayers[0];
        }
    }
}
