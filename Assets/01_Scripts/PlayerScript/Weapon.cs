using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class Weapon : MonoBehaviourPun
{
    public delegate void PlayerKill();
    public static event PlayerKill OnPlayerKill;

    public delegate void AIKill();
    public static event AIKill OnAIKill;

    [SerializeField] GameObject hitEffect;

    private void OnTriggerEnter(Collider other)
    {
        GetComponent<BoxCollider>().enabled = false;
        Instantiate(hitEffect, transform.position,Quaternion.identity);
        if (other.transform.CompareTag("AI"))
        {
            Debug.Log("AI Kill");
            OnAIKill();
            int viewId = other.transform.parent.gameObject.GetPhotonView().ViewID;
            photonView.RPC(nameof(KillAI), RpcTarget.MasterClient,viewId);
        }
        else if (other.transform.CompareTag("Player") && !other.transform.parent.gameObject.GetPhotonView().IsMine)
        {
            Debug.Log("Player Kill");
            OnPlayerKill();
            int viewId = other.transform.parent.gameObject.GetPhotonView().ViewID;
            photonView.RPC(nameof(KillPlyaer), RpcTarget.All, viewId);
        }
    }

    [PunRPC]
    void KillAI(int viewId)
    {
        PhotonView.Find(viewId).gameObject.GetComponent<AIPattern>().IsAiDead = true;
    }

    [PunRPC]
    void KillPlyaer(int viewId)
    {
        if (PhotonView.Find(viewId).IsMine)
            PhotonView.Find(viewId).gameObject.GetComponent<PlayerController>().IsDead = true;
    }
}
