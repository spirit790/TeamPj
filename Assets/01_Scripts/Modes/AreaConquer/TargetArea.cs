using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetArea : MonoBehaviour
{
    ModeAreaConquer modeArea;

    void Start()
    {
        modeArea = GameObject.Find("ModeArea").GetComponent<ModeAreaConquer>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (modeArea.areaOwner == null)
        {
            if (other.gameObject.CompareTag("Player"))
            {
                modeArea.areaOwner = other.gameObject.GetComponent<PlayerController>();
                StartCoroutine(modeArea.AreaCountDown());
            }
        }
        else
        {
            PlayerController enteredPlayer = other.gameObject.GetComponent<PlayerController>();
            if(other.gameObject.CompareTag("Player") && modeArea.areaOwner != enteredPlayer)
            {   
                StopCoroutine(modeArea.AreaCountDown());
                modeArea.areaOwner = enteredPlayer;
                StartCoroutine(modeArea.AreaCountDown());
            }
        }

    }


}
