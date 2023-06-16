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

    // 사용
    private void OnTakeFromPool(GameObject ai)
    {
        count++;
        ai.SetActive(true);
        ai.GetComponent<AIPattern>().SpawnAI();
    }

    // 반환
    private void OnReturnedToPool(GameObject ai)
    {
        count--;
        ai.SetActive(false);
    }

    // 삭제
    private void OnDestroyPoolObject(GameObject ai)
    {
        count--;
        Destroy(ai);
    }

    /// <summary>
    /// createPos 위치에 AI 생성
    /// </summary>
    /// <param name="createPos"></param>
    public void PoolAI(Vector3 createPos)
    {
        if (count >= maxSize)
            return;
        GameObject ai = AIPool.Get();
        ai.transform.position = createPos;
        ai.transform.SetParent(gameObject.transform);
    }
}
