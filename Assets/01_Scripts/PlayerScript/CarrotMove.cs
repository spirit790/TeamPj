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
    /// ��ư�� �������� �ݶ��̴� z������ atkLength��ŭ ray�� �߻��Ͽ� atkLength��ŭ �����������մϴ�.
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
