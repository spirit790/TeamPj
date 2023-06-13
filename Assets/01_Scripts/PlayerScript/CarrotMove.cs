using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarrotMove : MonoBehaviour
{
    Transform kTr;
    RaycastHit hit;
    public float atkLength = 1.5f;

    void Start()
    {
        kTr = GetComponent<Transform>();
    }


    void Update()
    {
        
    }
    /// <summary>
    /// 버튼을 눌렀을시 콜라이더 z축으로 atkLength만큼 ray를 발사하여 공격판정을합니다.
    /// </summary>
    public void OnClickAtk()
    {
        if (Physics.Raycast(transform.position,transform.forward,out hit, atkLength))
        {
            Debug.Log(hit.collider.name);
        }
    }
    
}
