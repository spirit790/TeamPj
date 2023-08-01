using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using System;

public class TargetArea : MonoBehaviourPun
{
    public bool isOwnerStay = false;
    ModeAreaConquer modeArea;
    public List<PlayerController> playersInArea = new List<PlayerController>();
    void Start()
    {
        modeArea = FindAnyObjectByType<ModeAreaConquer>();
        PlayerController.OnPlayerDie += PlayerDieInArea;
    }

    private void PlayerDieInArea(PlayerController player)
    {
        if (playersInArea.Contains(player))
        {
            playersInArea.Remove(player);
        }
        if(player == modeArea.AreaOwner)
        {
            if (playersInArea.Count > 0)
            {
                modeArea.AreaOwner = playersInArea[0];
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            PlayerController player = other.gameObject.GetComponentInParent<PlayerController>();
            playersInArea.Add(player);
            if (!isOwnerStay)
            {
                Debug.Log(player.photonView.ViewID);
                photonView.RPC(nameof(SetAreaOwnerRPC), RpcTarget.All, player.photonView.ViewID);
                photonView.RPC(nameof(SetIsOwnerStayRPC), RpcTarget.All, true);
            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            PlayerController player = other.gameObject.GetComponentInParent<PlayerController>();
            playersInArea.Remove(player);
            if (player == modeArea.AreaOwner)
            {
                Debug.Log(other.gameObject.name);
                photonView.RPC(nameof(SetIsOwnerStayRPC), RpcTarget.All, false);
                if (playersInArea.Count > 0)
                {
                    modeArea.AreaOwner = playersInArea[0];
                    photonView.RPC(nameof(SetIsOwnerStayRPC), RpcTarget.All, true);
                }
            }
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
