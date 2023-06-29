using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

public class CarrotMove : MonoBehaviourPun
{
    GameOptionManager gameOptionManager;
    Transform kTr;
    RaycastHit hit;
    Button attackBtn;
    public float atkLength;
    public float curTime;
    public float coolTime;
    Ray ray;
    void Start()
    {
        kTr = GetComponent<Transform>();
        attackBtn = GameObject.FindGameObjectWithTag("AttackBtn").GetComponent<Button>();
        attackBtn.onClick.AddListener(OnClickAtk);
        //gameOptionManager = GameOptionManager.Instance();
    }


    void Update()
    {
    }
    /// <summary>
    /// ��ư�� �������� �ݶ��̴� z������ atkLength��ŭ ray�� �߻��Ͽ� atkLength��ŭ �����������մϴ�.
    /// </summary>
    public void OnClickAtk()
    {
        if (photonView.IsMine)
        {
            ray = new Ray(transform.GetChild(1).transform.position, transform.forward);

            //gameOptionManager.PlaySfxSound("Attack");
            if (Physics.Raycast(ray, out hit, atkLength))
            {
                //GameObject hitObj = hit.transform.gameObject;
                //Debug.Log("hit obj : " + hitObj.name);
                //if (hitObj.CompareTag("Player"))
                //{
                //    hitObj.GetComponent<PlayerController>().IsDead = true;
                //}
                //if (hitObj.CompareTag("AI"))
                //{
                //    hitObj.GetComponent<AIPattern>().IsAiDead = true;
                //}
                Debug.Log(hit.transform.name);
                if (hit.transform.CompareTag("AI"))
                {
                    int viewId = hit.transform.gameObject.GetPhotonView().ViewID;
                    photonView.RPC(nameof(DestroyNetworkObject), RpcTarget.MasterClient, viewId);
                }
                else if (hit.transform.CompareTag("Player"))
                {
                    int actorNum = hit.transform.gameObject.GetPhotonView().ControllerActorNr;
                    
                    //PhotonNetwork.CurrentRoom.GetPlayer();
                    //int actorNum = hit.transform.gameObject.GetPhotonView().ControllerActorNr;
                    photonView.RPC(nameof(DestroyPlayer), RpcTarget.MasterClient, PhotonNetwork.CurrentRoom.Players[actorNum]);
                }

            }
        }
    }

    [PunRPC]
    void DestroyPlayer(Player player)
    {
        PhotonNetwork.DestroyPlayerObjects(player);
    }

    [PunRPC]
    void DestroyNetworkObject(int viewId)
    {
        PhotonNetwork.Destroy(PhotonView.Find(viewId));
    }
}
