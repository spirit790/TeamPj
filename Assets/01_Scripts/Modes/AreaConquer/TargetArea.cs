using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetArea : MonoBehaviour
{
    public string ownerName;
    ModeAreaConquer modeArea;

    void Start()
    {
            
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player") && !string.Equals(other.gameObject.name, ownerName))
        {
            StopCoroutine(modeArea.AreaCountDown());
            ownerName = other.gameObject.name; // nick name
            StartCoroutine(modeArea.AreaCountDown());
        }
    }


}
