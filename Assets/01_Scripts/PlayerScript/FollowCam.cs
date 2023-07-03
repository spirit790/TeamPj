using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Cinemachine;

public class FollowCam : MonoBehaviour
{
    [SerializeField] CinemachineVirtualCamera virtualCamera;
    [SerializeField] MeshVisionGen vision;

    public void SetCamTarget(GameObject target)
    {
        virtualCamera.Follow = target.transform;
        vision.SetVisionTarget(target.transform);
    }
}
