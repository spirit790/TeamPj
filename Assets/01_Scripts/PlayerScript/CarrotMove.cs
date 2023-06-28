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
    /// 버튼을 눌렀을시 콜라이더 z축으로 atkLength만큼 ray를 발사하여 atkLength만큼 공격판정을합니다.
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
