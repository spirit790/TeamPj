using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PrefabPool : MonoBehaviour
{
    [SerializeField] List<GameObject> prefabList;
    void Start()
    {
        DefaultPool pool = PhotonNetwork.PrefabPool as DefaultPool;
        if(prefabList != null && pool != null)
        {
            foreach (var prefab in prefabList)
            {
                pool.ResourceCache.Add(prefab.name, prefab);
            }
        }
    }
}
