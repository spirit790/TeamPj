using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class FollowCam : MonoBehaviour
{
    GameObject target;
    float offset = 6;
    
    void Update()
    {
        transform.position = new Vector3(target.transform.position.x, transform.position.y, target.transform.position.z - offset);
    }

    public void SetCamTarget(GameObject target)
    {
        this.target = target;
    }
}
