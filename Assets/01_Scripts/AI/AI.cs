using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

[RequireComponent(typeof(AIPattern))]
public class AI : MonoBehaviour
{
    IObjectPool<GameObject> AIPool { get; set; }

    /// <summary>
    /// Pooling �ʱ�ȭ�� �Լ�
    /// </summary>
    /// <param name="aiPool"></param>
    public void SetPool(IObjectPool<GameObject> aiPool)
    {
        AIPool = aiPool;
    }
    
    /// <summary>
    /// Ǯ���� ��ü ��ȯ �Լ�
    /// </summary>
    /// <param name="aiObj"></param>
    public void ReleaseAI(GameObject aiObj)
    {
        AIPool.Release(aiObj);
    }
}
