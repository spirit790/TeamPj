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

    public void OnClickAtk()
    {
        if (Physics.Raycast(transform.position,transform.forward,out hit, atkLength))
        {
            Debug.Log(hit.collider.name);
        }
    }
    
}
