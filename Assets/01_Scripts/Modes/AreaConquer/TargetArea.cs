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
                modeArea.AreaOwner = other.GetComponentInParent<PlayerController>();
                photonView.RPC(nameof(SetIsOwnerStayRPC), RpcTarget.All, true);
            }
            else
            {
                if (!isOwnerStay && modeArea.AreaOwner.gameObject != other.gameObject)
                {
                    modeArea.AreaOwner = other.GetComponentInParent<PlayerController>();
                    photonView.RPC(nameof(SetIsOwnerStayRPC), RpcTarget.All, true);
                }
                    

            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            if (other.gameObject.GetComponent<PlayerController>() == modeArea.AreaOwner)
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
}
