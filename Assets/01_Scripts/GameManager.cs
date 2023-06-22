using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

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
    /// ��Ƽ�÷��� �Ѱܹ��� �÷��̾� ��
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
    public List<Player> livePlayers = new List<Player>();
    public List<Player> deadPlayers = new List<Player>();
    [Header("UserInfo")]
    public Dictionary<string, object> userInfo = new Dictionary<string, object>();
    public bool isWin = false;
    public int death = 0;
    public int playerKills = 0;
    public int aiKills = 0;
    public string nickNamne;

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
        Player.OnPlayerDie += PlayerDie;
    }

    void Update()
    {
        
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        // ���� ���� �ܰ迡�� ��� �������� ����ǵ���, game scene���� ����ǵ���
        // scene ������ ���� �����ϸ鼭 ���� �� Ȯ���ϵ��� ��
        if(scene.buildIndex == 0)
        {
            switch (gameMode)
            {
                case Modes.BATTLEROYAL:
                    StartBattleRoyal();
                    break;
                case Modes.AREA:
                    StartAreaConquer();
                    break;
                case Modes.DEATHMATCH:
                    break;
                default:
                    break;
            }
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

    public void PlayerDie(Player player)
    {
        livePlayers.Remove(player);
        deadPlayers.Add(player);
        PlayersLeft = livePlayers.Count;
    }

    /// <summary>
    /// firebase ������ ������Ʈ �׽�Ʈ�� �Լ�
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
