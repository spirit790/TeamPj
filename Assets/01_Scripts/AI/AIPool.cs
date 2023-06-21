using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;
using Photon.Pun;

public class AIPool: MonoBehaviour
{
    IObjectPool<GameObject> Pool { get; set; }
    [SerializeField]
    int maxSize;
    [SerializeField]
    GameObject aiPrefab;

    public int count = 0;
    private void Awake()
    {
        Pool = new ObjectPool<GameObject>(CreatePooledItem, OnTakeFromPool, OnReturnedToPool, OnDestroyPoolObject, true, 10, maxSize);
    }

    private GameObject CreatePooledItem()
    {
        GameObject ai = PhotonNetwork.Instantiate(aiPrefab.name,Vector3.zero,Quaternion.identity);
        ai.GetComponent<AI>().SetPool(Pool);
        return ai;
    }

    private void OnTakeFromPool(GameObject ai)
    {
        count++;
        ai.SetActive(true);
        ai.GetComponent<AIPattern>().SpawnAI();
    }

    private void OnReturnedToPool(GameObject ai)
    {
        count--;
        ai.SetActive(false);
    }

    private void OnDestroyPoolObject(GameObject ai)
    {
        count--;
        Destroy(ai);
    }

    public void Spawn(Vector3 createPos)
    {
        if (count >= maxSize)
            return;
        GameObject ai = Pool.Get();
        ai.transform.position = createPos;
        ai.transform.SetParent(gameObject.transform);
    }
}