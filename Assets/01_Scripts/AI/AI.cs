using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

[RequireComponent(typeof(AIPattern))]
public class AI : MonoBehaviour
{
    IObjectPool<GameObject> AIPool { get; set; }

    /// <summary>
    /// Pooling 초기화용 함수
    /// </summary>
    /// <param name="aiPooling"></param>
    public void SetPool(IObjectPool<GameObject> aiPooling)
    {
        this.AIPool = aiPooling;
    }
    
    /// <summary>
    /// 풀링된 객체 반환 함수
    /// </summary>
    /// <param name="aiObj"></param>
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
