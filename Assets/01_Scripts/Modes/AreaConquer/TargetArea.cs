using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class TargetArea : MonoBehaviourPun
{
    public bool isOwnerStay = false;
    ModeAreaConquer modeArea;
    void Start()
    {
        modeArea = FindAnyObjectByType<ModeAreaConquer>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {

            if (!isOwnerStay)
            {
                PlayerController owner = other.gameObject.GetComponentInParent<PlayerController>();
                photonView.RPC(nameof(SetAreaOwnerRPC), RpcTarget.All, owner.photonView.ViewID);
                photonView.RPC(nameof(SetIsOwnerStayRPC), RpcTarget.All, true);
            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if(other.gameObject == modeArea.AreaOwner)
        {
            photonView.RPC(nameof(SetIsOwnerStayRPC), RpcTarget.All, false);
        }
    }
    [PunRPC]
    void SetAreaOwnerRPC(int ownerViewId)
    {
        modeArea.AreaOwner = PhotonView.Find(ownerViewId).gameObject.GetComponent<PlayerController>();
    }
    [PunRPC]
    void SetIsOwnerStayRPC(bool isOwnerStay)
    {
        this.isOwnerStay = isOwnerStay;
    }
    
}
