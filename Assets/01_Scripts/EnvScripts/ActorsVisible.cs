using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActorsVisible : MonoBehaviour
{


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.layer != 6) return;
        Debug.Log("vision in");
        other.gameObject.layer = 7;
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.layer != 7) return;

        Debug.Log("vision out");
        other.gameObject.layer = 6;
    }
}
