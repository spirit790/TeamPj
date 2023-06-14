using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

[RequireComponent(typeof(AIPattern))]
public class AI : MonoBehaviour
{
    IObjectPool<GameObject> AIPool { get; set; }

    public void SetPool(IObjectPool<GameObject> aiPooling)
    {
        this.AIPool = aiPooling;
    }
    
    public void ReleasePool(GameObject aiObj)
    {
        AIPool.Release(aiObj);
    }
    
    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Dead");
        ReleasePool(this.gameObject);
    }
}
