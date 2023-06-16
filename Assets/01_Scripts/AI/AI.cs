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
    /// <param name="aiPool"></param>
    public void SetPool(IObjectPool<GameObject> aiPool)
    {
        AIPool = aiPool;
    }
    
    /// <summary>
    /// 풀링된 객체 반환 함수
    /// </summary>
    /// <param name="aiObj"></param>
    public void ReleaseAI(GameObject aiObj)
    {
        AIPool.Release(aiObj);
    }
}
