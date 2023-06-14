using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CarrotMove : MonoBehaviour
{
    Transform kTr;
    RaycastHit hit;
    public float atkLength = 1.5f;
    Button attackBtn;

    public float curTime;
    public float coolTime;

    void Start()
    {
        kTr = GetComponent<Transform>();
        attackBtn = GameObject.FindGameObjectWithTag("AttackBtn").GetComponent<Button>();
        attackBtn.onClick.AddListener(OnClickAtk);

    }


    void Update()
    {
        
    }
    /// <summary>
    /// ��ư�� �������� �ݶ��̴� z������ atkLength��ŭ ray�� �߻��Ͽ� atkLength��ŭ �����������մϴ�.
    /// </summary>
    public void OnClickAtk()
    {
        if (Physics.Raycast(transform.position,transform.forward,out hit, atkLength))
        {
            Debug.Log(hit.collider.name);
        }
    }
    
}
