using System.Collections;
using System.Collections.Generic;
using UnityEngine;
[RequireComponent(typeof(AIPattern))]
public class AI : MonoBehaviour
{

    void Start()
    {
        
    }

    void Update()
    {
        
    }
    public void CreateAI(Vector3 createPos)
    {
        Instantiate(gameObject, createPos, Quaternion.identity);
    }
}
