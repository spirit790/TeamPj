using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class FollowCam : MonoBehaviour
{
    GameObject[] targets;
    GameObject target;
    float offset = 6;
    void Start()
    {
        targets = GameObject.FindGameObjectsWithTag("Player");
        foreach(var item in targets)
        {
            if (item.GetPhotonView().IsMine)
            {
                target = item;
                break;
            }
        }
    }

    void Update()
    {
        transform.position = new Vector3(target.transform.position.x, transform.position.y, target.transform.position.z - offset);
    }
}
