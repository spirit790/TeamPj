using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;

public class AIPool : MonoBehaviour
{
    [SerializeField] GameObject aiPrefab;

    public void Spawn(Vector3 spawnPos)
    {
        NetworkObject ai = NetworkObjectPool.Singleton.GetNetworkObject(aiPrefab, spawnPos, Quaternion.identity);
        ai.Spawn(true);
    }
    public void DeSpawn(NetworkObject networkObject)
    {
        NetworkObjectPool.Singleton.ReturnNetworkObject(networkObject, aiPrefab);
    }
}
