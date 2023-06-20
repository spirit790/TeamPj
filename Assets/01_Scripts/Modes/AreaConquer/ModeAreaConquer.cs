using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModeAreaConquer : Mode
{
    public float areaTimeLimit;

    void Start()
    {
            
    }

    void Update()
    {
     }

    public IEnumerator AreaCountDown()
    {
        yield return new WaitForSeconds(areaTimeLimit);
        // °ÔÀÓ ½Â¸®
    }
}
