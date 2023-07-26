using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Cinemachine;

public class FollowCam : MonoBehaviour
{
    [SerializeField] CinemachineVirtualCamera virtualCamera;
    [SerializeField] MeshVisionGen_Updated vision;
    [SerializeField] ThroughWallVision wallVision;
    [SerializeField] SilhouetteRadar radar;


    public void SetCamTarget(GameObject target)
    {
        virtualCamera.Follow = target.transform;
        vision.SetVisionTarget(target.transform);
        wallVision.SetWallTarget(target.transform);
        radar.SetRadarCenter(target.transform);
    }
}
