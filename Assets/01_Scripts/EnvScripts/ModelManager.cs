using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelManager : MonoBehaviour
{
    private static ModelManager instance = null;
    public static ModelManager Instance
    { 
        get 
        { 
            return instance; 
        } 
    }

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    public GameObject[] modelRefs;
    //public Dictionary<GameObject[], Material[]> modelColors;
    //public Dictionary<GameObject[], Material[]> weaponColors;

    [Header("Model Settings")]
    public int modelNum = 0;
    public int modelColor = 0;
    public int weaponColor = 0;

}
