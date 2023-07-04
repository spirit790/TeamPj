using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class TargetArea : MonoBehaviourPun
{
    public bool isOwnerStay = false;
    public List<GameObject> stayColliders = new List<GameObject>();
    ModeAreaConquer modeArea;
    void Start()
    {
        modeArea = FindAnyObjectByType<ModeAreaConquer>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {

            if (modeArea.AreaOwner == null)
            {
                PlayerController owner = other.gameObject.GetComponentInParent<PlayerController>();
                photonView.RPC(nameof(SetOwnerRPC), RpcTarget.All, owner.photonView.ViewID);
                photonView.RPC(nameof(SetIsOwnerStayRPC), RpcTarget.All, true);
            }
            else
            {
                PlayerController owner = other.gameObject.GetComponentInParent<PlayerController>();
                if (!isOwnerStay && modeArea.AreaOwner != owner)
                {
                    photonView.RPC(nameof(SetOwnerRPC), RpcTarget.All, owner.photonView.ViewID);
                    photonView.RPC(nameof(SetIsOwnerStayRPC), RpcTarget.All, true);
                }
            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            if (other.gameObject.GetComponentInParent<PlayerController>() == modeArea.AreaOwner)
            {
                Debug.Log("OWNER EXIT");
                photonView.RPC(nameof(SetIsOwnerStayRPC), RpcTarget.All, false);
            }
        }

    }

    [PunRPC]
    void SetIsOwnerStayRPC(bool isOwnerStay)
    {
        this.isOwnerStay = isOwnerStay;
    }
    [PunRPC]
    void SetOwnerRPC(int ownerViewID)
    {
        modeArea.AreaOwner = PhotonView.Find(ownerViewID).gameObject.GetComponent<PlayerController>();
    }
}
