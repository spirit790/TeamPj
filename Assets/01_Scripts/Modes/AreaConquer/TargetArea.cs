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
                modeArea.areaOwner = other.gameObject.GetComponent<Player>();
                StartCoroutine(modeArea.AreaCountDown());
            }
        }
        else
        {
            Player enteredPlayer = other.gameObject.GetComponent<Player>();
            if(other.gameObject.CompareTag("Player") && modeArea.areaOwner != enteredPlayer)
            {   
                StopCoroutine(modeArea.AreaCountDown());
                modeArea.areaOwner = enteredPlayer;
                StartCoroutine(modeArea.AreaCountDown());
            }
        }

    }


}
