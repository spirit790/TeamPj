using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

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

    private void OnEnable() 
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
    }

    public GameObject[] modelRefs;
    //public Dictionary<GameObject[], Material[]> modelColors;
    //public Dictionary<GameObject[], Material[]> weaponColors;

    [Header("Model Settings")]
    public int modelNum = 0;
    public int modelColor = 0;
    public int weaponColor = 0;

    public int modelNumbs = 0;
    public bool isModelSet = false;


    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        InitModel();

        if(scene.name == "02_Main" || scene.name == "01_Login") return;

        StartCoroutine(ModelSetting());
    }

    private void InitModel()
    {
        modelNum = 0;
        modelColor = 0;
        weaponColor = 0;
        modelNumbs = 0;
        isModelSet = false;
    }

    IEnumerator ModelSetting() 
    {
        yield return new WaitUntil(() => GameManager.Instance.isLoaded);
        // Debug.Log("PlayerCount1 : " + GameManager.Instance.PlayerCount);

        yield return new WaitUntil(() => modelNumbs == GameManager.Instance.PlayerCount * 6);
        // Debug.Log("model Numbs : " + modelNumbs);
        // Debug.Log("PlayerCount2 : " + GameManager.Instance.PlayerCount);
        isModelSet = true;
    }

    private void OnDisable() 
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }
}
