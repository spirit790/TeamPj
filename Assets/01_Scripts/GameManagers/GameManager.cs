using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;

public class GameManager : MonoBehaviour
{
    private static GameManager instance;
    public static GameManager Instance
    {
        get { return instance; }
        set
        {

        }
    }

    /// <summary>
    /// 멀티플레이 넘겨받은 플레이어 수
    /// </summary>
    private int playerCount = 8;
    public int PlayerCount
    {
        get { return playerCount; }
        set
        {
            playerCount = value;
        }
    }

    private int playersLeft;
    public int PlayersLeft
    {
        get { return playersLeft; }
        set 
        {
            playersLeft = value; 
            if(playersLeft == 1)
            {
                OnPlayersLeftOne();
            }
        }
    }
    
    public enum Modes
    {
        BATTLEROYAL,
        AREA,
        DEATHMATCH
    }
    public Modes gameMode;

    // 추가 부분
    public List<Mode> modes;

    [Header("BattleRoyal")]
    public int battleAIRatio = 10;
    public float battleTimeLimit = 300f;

    [Header("AreaConquer")]
    public int areaAIRatio = 10;
    public float areaTimeLimit = 300f;

    [Header("DeathMatch")]
    public int deathAIRatio = 10;
    public float deathTimeLimit = 300f;

    [Header("GameUsers")]
    public List<PlayerController> livePlayers = new List<PlayerController>();
    public List<PlayerController> deadPlayers = new List<PlayerController>();
    [Header("UserInfo")]
    public Dictionary<string, object> userInfo = new Dictionary<string, object>();
    public bool isWin = false;
    public int death = 0;
    public int playerKills = 0;
    public int aiKills = 0;
    public string nickNamne;

    const string KEY_MAP = "map";
    const string KEY_MODE = "mode";

    public string KeyMap { get { return KEY_MAP; } }
    public string KeyMode { get { return KEY_MODE; } }

    public delegate void PlayersLeftOne();
    public static PlayersLeftOne OnPlayersLeftOne;
    private void Awake()
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
        SceneManager.sceneLoaded += OnSceneLoaded;
    }
    void Start()
    {
        PlayerController.OnPlayerDie += PlayerDie;
    }

    void Update()
    {
        
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        // 게임 시작 단계에서 모드 정해지고 실행되도록, game scene에서 실행되도록
        // scene 순서는 추후 구현하면서 변경 및 확정하도록 함

        // 수정 부분
        // 매치시작시 모드 선택,맵 생성
        if(scene.buildIndex == 1)
        {
            playerCount = PhotonNetwork.CurrentRoom.PlayerCount;
            int modeNum = int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[KeyMode].ToString());
            Instantiate(modes[modeNum]);

            //TODO : 맵 설정
        }

    }

    private void StartBattleRoyal()
    {
        ModeBattleRoyal modeBattleRoyal = GameObject.Find("ModeBattleRoyal").GetComponent<ModeBattleRoyal>();
        modeBattleRoyal.Set(playerCount, battleAIRatio, battleTimeLimit);
    }

    private void StartAreaConquer()
    {
        ModeAreaConquer modeArea = GameObject.Find("ModeArea").GetComponent<ModeAreaConquer>();
        modeArea.Set(playerCount, battleAIRatio, battleTimeLimit);
    }

    public void PlayerDie(PlayerController player)
    {
        livePlayers.Remove(player);
        deadPlayers.Add(player);
        PlayersLeft = livePlayers.Count;
    }

    /// <summary>
    /// firebase 데이터 업데이트 테스트용 함수
    /// </summary>
    public void OnUpdateTest()
    {
        isWin = true;
        aiKills = 5;
        playerKills = 3;
        death = 0;
        GoogleManager.Instance.OnUpdateUserGameData();
    }
}
