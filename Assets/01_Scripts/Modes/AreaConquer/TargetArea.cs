using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetArea : MonoBehaviour
{
    ModeAreaConquer modeArea;
    void Start()
    {
        modeArea = FindAnyObjectByType<ModeAreaConquer>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            if (modeArea.AreaOwner == null)
                modeArea.AreaOwner = other.GetComponentInParent<PlayerController>();
            else if (modeArea.AreaOwner.gameObject != other.gameObject)
                modeArea.AreaOwner = other.GetComponentInParent<PlayerController>();
        }
        //if (modeArea.areaOwner == null)
        //{
        //    if (other.gameObject.CompareTag("Player"))
        //    {
        //        modeArea.areaOwner = other.gameObject.GetComponent<PlayerController>();
        //        modeArea.SetAreaCoroutine();
        //    }
        //}
        //else
        //{
        //    PlayerController enteredPlayer = other.gameObject.GetComponent<PlayerController>();
        //    if(other.gameObject.CompareTag("Player") && modeArea.areaOwner != enteredPlayer)
        //    {
        //        modeArea.StopAreaCoroutine();
        //        modeArea.areaOwner = enteredPlayer;
        //        modeArea.SetAreaCoroutine();
        //    }
        //}
    }
}
