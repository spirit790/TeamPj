using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CamFollowsPlayer : MonoBehaviour
{
    public Transform playerTr;
    public float offset;


    void Update()
    {
        transform.position = new Vector3(playerTr.position.x, transform.position.y, playerTr.position.z - offset);
    }
}
