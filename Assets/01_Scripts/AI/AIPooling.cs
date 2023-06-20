using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

public class AIPooling : MonoBehaviour
{
    IObjectPool<GameObject> AIPool { get; set; }
    [SerializeField]
    int maxSize;
    [SerializeField]
    GameObject aiPrefab;

    public int count = 0;
    private void Awake()
    {
        AIPool = new ObjectPool<GameObject>(CreatePooledItem, OnTakeFromPool, OnReturnedToPool, OnDestroyPoolObject, true,10,maxSize);
    }

    private GameObject CreatePooledItem()
    {
        GameObject ai = Instantiate(aiPrefab);
        ai.GetComponent<AI>().SetPool(AIPool);
        return ai;
    }

    // ���
    private void OnTakeFromPool(GameObject aiObj)
    {
        aiObj.SetActive(true);
    }

    // ��ȯ
    private void OnReturnedToPool(GameObject aiObj)
    {
        aiObj.SetActive(false);
    }

    // ����
    private void OnDestroyPoolObject(GameObject aiObj)
    {
        Destroy(aiObj);
    }

    /// <summary>
    /// createPos ��ġ�� AI ����
    /// </summary>
    /// <param name="createPos"></param>
    public void CreateAI(Vector3 createPos)
    {
        if (count >= maxSize)
            return;
        GameObject ai = AIPool.Get();
        ai.transform.position = createPos;
        ai.transform.SetParent(gameObject.transform);
        Debug.Log($"Respawn[{createPos.x} , {createPos.z}]");
        count++;
    }
}
