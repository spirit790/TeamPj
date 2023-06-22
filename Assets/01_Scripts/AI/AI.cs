using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

[RequireComponent(typeof(AIPattern))]
public class AI : MonoBehaviour
{
    IObjectPool<GameObject> Pool { get; set; }
   
    public void SetPool(IObjectPool<GameObject> aiPool)
    {
        Pool = aiPool;
    }

    public void ReleaseAI(GameObject aiObj)
    {
        Pool.Release(aiObj);
    }
}
