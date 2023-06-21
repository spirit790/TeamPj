using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CarrotMove : MonoBehaviour
{
    Transform kTr;
    RaycastHit hit;    
    Button attackBtn;
    public Player player;
    public float atkLength = 1.5f;

    public float curTime;
    public float coolTime;

    void Start()
    {
        kTr = GetComponent<Transform>();
        attackBtn = GameObject.FindGameObjectWithTag("AttackBtn").GetComponent<Button>();
        attackBtn.onClick.AddListener(OnClickAtk);
        player = GetComponentInParent<Player>();
    }


    void Update()
    {
        
    }
    /// <summary>
    /// 버튼을 눌렀을시 콜라이더 z축으로 atkLength만큼 ray를 발사하여 atkLength만큼 공격판정을합니다.
    /// </summary>
    public void OnClickAtk()
    {
        if(Physics.Raycast(transform.position, transform.forward, out hit, atkLength))
        {
            GameObject hitObj = hit.transform.gameObject;

            if(hitObj.CompareTag("Player"))
            {
                hitObj.GetComponent<Player>().IsDead = true;
            }
            if(hitObj.CompareTag("AI"))
            {
                hitObj.GetComponent<AIPattern>().IsAiDead = true;
            }
            
            Debug.Log(hit.collider.tag);
            Debug.Log(hit.collider.name);
        }
        
    }
    
}
