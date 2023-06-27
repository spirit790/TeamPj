using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;
using Photon;

public class GameManager : MonoBehaviourPunCallbacks
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
    public object startTime;

    public List<Mode> modes;

    const string KEY_MAP = "map";
    const string KEY_MODE = "mode";

    public string KeyMap { get { return KEY_MAP; } }
    public string KeyMode { get { return KEY_MODE; } }

    List<Dictionary<string, object>> gameDatas = new List<Dictionary<string, object>>();
    List<Dictionary<string,object>> GameDatas
    {
        get { return gameDatas; }
        set
        {
            gameDatas = value;
            if(gameDatas.Count == PhotonNetwork.CurrentRoom.PlayerCount)
            {
                SendData();
            }
        }
    }

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
        Mode.OnGameOver += GameOver;
        //GoogleManager.Instance.OnGetUserInfo();
        //nickNamne = userInfo["NickName"].ToString();
    }
    public string test;
    [PunRPC]
    void SetAll(string tempString, int number)
    {
        test += tempString;
        Debug.Log(test);
    }
    void Update()
    {
        
    }

    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        // 게임 시작 단계에서 모드 정해지고 실행되도록, game scene에서 실행되도록
        // scene 순서는 추후 구현하면서 변경 및 확정하도록 함

        // 매치시작시 모드 선택,맵 생성
        if(scene.buildIndex == 1)
        {
            playerCount = PhotonNetwork.CurrentRoom.PlayerCount;
            //int modeNum = int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[KeyMode].ToString());
            int modeNum = 0;
            Mode currentGameMode = Instantiate(modes[modeNum]);
            currentGameMode.modeName = currentGameMode.GetType().Name;
            Debug.Log(currentGameMode.name);

            switch (modeNum) 
            {
                case 0:
                    // battleRoyal
                    gameMode = Modes.BATTLEROYAL;
                    currentGameMode.Set(playerCount, battleAIRatio, battleTimeLimit);
                    string tempString = Random.Range(0, 1000).ToString();
                    Debug.Log(tempString);
                    
                    break;
                case 1:
                    // areaConquer
                    gameMode = Modes.AREA;
                    currentGameMode.Set(playerCount, areaAIRatio, areaTimeLimit);
                    break;
                case 2:
                    // deathMatch
                    gameMode = Modes.DEATHMATCH;
                    currentGameMode.Set(playerCount, deathAIRatio, deathTimeLimit);
                    break;
                default:
                    break;
            }
            currentGameMode.IsGameOver = true;
            //TODO : 맵 설정
        }
    }


    public void PlayerDie(PlayerController player)
    {
        livePlayers.Remove(player);
        deadPlayers.Add(player);
        PlayersLeft = livePlayers.Count;
    }

    public void GameOver()
    {
        
        //GameUserData data = new GameUserData(PhotonNetwork.LocalPlayer.NickName, isWin, death, playerKills, aiKills);
        Dictionary<string, object> data = new Dictionary<string, object>
        {
            { "GoogleId", PhotonNetwork.LocalPlayer.NickName },
            { "IsWin", isWin },
            { "Death", death },
            { "PlayerKills", playerKills },
            { "AIKills", aiKills }
        };
        if (PhotonNetwork.LocalPlayer.IsMasterClient)
        {
            GameDatas.Add(data);
        }
        else
        {
            photonView.RPC("SendDataToMaster", RpcTarget.MasterClient, data);
        }
    }

    void SendData()
    {
        var endTime = Firebase.Firestore.FieldValue.ServerTimestamp;
        Dictionary<string, object> gameData = new Dictionary<string, object>
        {
            { "Mode", (int)gameMode },
            { "StartTime", startTime },
            { "EndTime", endTime },
            { "GameDatas", GameDatas }
        };
        Debug.Log(gameData);
        GoogleManager.Instance.OnCreateGameData(gameData);
    }
    [PunRPC]
    private void SendDataToMaster(Dictionary<string, object> data)
    {
        GameDatas.Add(data);
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
