using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    private static GameManager instance;
    public GameManager Instance
    {
        get { return instance; }
        set
        {
            if (instance == null)
            {
                instance = this;
                DontDestroyOnLoad(gameObject);
            }
            else
            {
                Destroy(gameObject);
            }
        }
    }

    /// <summary>
    /// 멀티플레이 넘겨받은 플레이어 수
    /// </summary>
    public int playerCount;

    private int playersLeft;
    public int PlayersLeft
    {
        get { return playersLeft; }
        set { playersLeft = value; }
    }
    
    public enum Modes
    {
        BATTLEROYAL,
        AREA,
        DEATHMATCH
    }
    public Modes gameMode;

    [Header("BattleRoyal")]
    public int battleAIRatio = 10;
    public float battleTimeLimit = 300f;

    [Header("AreaConquer")]
    public int areaAIRatio = 10;
    public float areaTimeLimit = 300f;

    [Header("DeathMatch")]
    public int deathAIRatio = 10;
    public float deathTimeLimit = 300f;

    private void Awake()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
    }
    void Start()
    {
        
    }

    void Update()
    {
        
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        // 게임 시작 단계에서 모드 정해지고 실행되도록 
        switch (gameMode)
        {
            case Modes.BATTLEROYAL:
                StartBattleRoyal();
                break;
            case Modes.AREA:
                break;
            case Modes.DEATHMATCH:
                break;
            default:
                break;
        }
    }

    private void StartBattleRoyal()
    {
        ModeBattleRoyal modeBattleRoyal = GameObject.Find("ModeBattleRoyal").GetComponent<ModeBattleRoyal>();
        modeBattleRoyal.Set(playerCount, battleAIRatio, battleTimeLimit);
    }
}
