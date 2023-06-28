using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class CarrotMove : MonoBehaviourPun
{
    GameOptionManager gameOptionManager;
    Transform kTr;
    RaycastHit hit;    
    Button attackBtn;
    public float atkLength = 1.5f;

    public float curTime;
    public float coolTime;

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
            //gameOptionManager.PlaySfxSound("Attack");
            if (Physics.Raycast(transform.position, transform.forward, out hit, atkLength))
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
                if (hit.transform.CompareTag("AI") || hit.transform.CompareTag("Player"))
                {
                    int viewId = hit.transform.gameObject.GetPhotonView().ViewID;
                    photonView.RPC(nameof(DestroyNetworkObject), RpcTarget.MasterClient, viewId);
                }
            }
        }
    }

    [PunRPC]
    void DestroyNetworkObject(int viewId)
    {
        Debug.Log(viewId);
        PhotonNetwork.Destroy(PhotonView.Find(viewId));
    }
}
