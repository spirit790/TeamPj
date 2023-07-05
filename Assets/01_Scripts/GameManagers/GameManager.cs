using System.Collections;
using System.Collections.Generic;
using System.Linq;
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

    // 맵 생성된 클라이언트 갯수
    public int mapGenerateCount;
    // 플레이어 생성된 클라이언트 갯수
    public int createPlayercount;
    public bool isDataSented;
    public bool isReMatch;
    public bool isReInvite;

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

    public int playersLeft;
    public int PlayersLeft
    {
        get { return playersLeft; }
        set
        {
            playersLeft = value;
            if (playersLeft == 1)
            {
                //OnPlayersLeftOne();
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

    [Header("UserInfo")]
    public Dictionary<string, object> userInfo = new Dictionary<string, object>();
    private bool isWin = false;
    public bool IsWin
    {
        get { return isWin; }
        set
        {
            isWin = value;
            if (isWin)
            {
                //photonView.RPC(nameof(ShowPanel), RpcTarget.All);
                //resultPanel.SetActive(true);
            }
        }
    }
    public int death = 0;
    public int playerKills = 0;
    public int aiKills = 0;
    public string nickName;
    public object startTime;

    public string winnerId;

    public List<Mode> modes;

    const string KEY_MAP = "map";
    const string KEY_MODE = "mode";
    const string KEY_SYSTEM = "system";
    /// <summary>
    /// 룸 맵 프로퍼티
    /// 0 : 배틀로얄 모드
    /// 1 : 점령전 모드
    /// 2 : 대학살 모드
    /// </summary>
    public string KeyMap { get { return KEY_MAP; } }
    public string KeyMode { get { return KEY_MODE; } }
    /// <summary>
    /// 룸 시스템 프로퍼티
    /// 0 : 매치 시스템
    /// 1 : 초대 시스템
    /// </summary>
    public string KeySystem { get { return KEY_SYSTEM; } }
    private bool isDead;
    public bool IsDead 
    {
        get
        {
            return isDead;
        }
        set
        {
            isDead = value;
            if (isDead)
            {
                death++;
            }
        }
    }

    

    List<Dictionary<string, object>> gameDatas = new List<Dictionary<string, object>>();

    int dataCount;
    int DataCount
    {
        get { return dataCount; }
        set
        {
            dataCount = value;
            Debug.Log($"GameDatas Count {gameDatas.Count}");

            if (PhotonNetwork.InRoom && dataCount == PhotonNetwork.CurrentRoom.PlayerCount)
            {
                if (PhotonNetwork.IsMasterClient)
                {
                    SendData();
                    photonView.RPC(nameof(RpcIsDataSented), RpcTarget.All);
                    OnDataSent();
                }
            }
            
        }
    }

    public GameObject resultPanel;

    //public delegate void PlayersLeftOne();
    //public static PlayersLeftOne OnPlayersLeftOne;

    public delegate void DataSent();
    public static event DataSent OnDataSent;

    [PunRPC]
    void ShowPanel()
    {
        resultPanel.SetActive(true);
    }
    [PunRPC]
    void RpcIsDataSented()
    {
        isDataSented = true;
    }
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
        Mode.OnGameOver += GameOver;
    }
    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if(scene.buildIndex == 1)
        {
            // 초기화해야 할 값들 초기화
            mapGenerateCount = 0;
            createPlayercount = 0;
            isDataSented = false;
            IsWin = false;
            IsDead = false;
            PlayerCount = 0;
            PlayersLeft = 0;
            aiKills = 0;
            playerKills = 0;
            death = 0;
            DataCount = 0;
        }
        // 게임 시작 단계에서 모드 정해지고 실행되도록, game scene에서 실행되도록
        // scene 순서는 추후 구현하면서 변경 및 확정하도록 함

        // 매치시작시 모드 선택,맵 생성
        if(scene.buildIndex >= 2)
        {
            isReInvite = false;
            isReMatch = false;
            playerCount = PhotonNetwork.CurrentRoom.PlayerCount;
            PlayersLeft = PlayerCount;
            int modeNum = int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[KeyMode].ToString());
            //int modeNum = 0;
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
            Debug.Log("Master");
        }
    }
    public void GameOver()
    {
        Debug.Log($"{PhotonNetwork.LocalPlayer.NickName} ::: {winnerId} ::: {IsWin}");
        Debug.Log($"PlayerCount {PhotonNetwork.CurrentRoom.PlayerCount}");
        Dictionary<string, object> data = new Dictionary<string, object>
        {
            { "GoogleId", PhotonNetwork.LocalPlayer.NickName },
            { "IsWin", IsWin },
            { "Death", death },
            { "PlayerKills", playerKills },
            { "AIKills", aiKills },
            { "NickName", nickName }
        };
        if (PhotonNetwork.LocalPlayer.IsMasterClient)
        {
            Debug.Log($"Master");
            gameDatas.Add(data);
            DataCount = gameDatas.Count;
        }
        else
        {
            Debug.Log($"Client {PhotonNetwork.LocalPlayer.NickName}");
            photonView.RPC("SendDataToMaster", RpcTarget.MasterClient, data);
        }
        GoogleManager.Instance.OnUpdateUserGameData();
    }

    void SendData()
    {
        Debug.Log("Send Data");
        var endTime = Firebase.Firestore.FieldValue.ServerTimestamp;
        Dictionary<string, object> gameData = new Dictionary<string, object>
        {
            { "Mode", (int)gameMode },
            { "StartTime", startTime },
            { "EndTime", endTime },
            { "GameDatas", gameDatas }
        };
        GoogleManager.Instance.OnCreateGameData(gameData);
    }
    [PunRPC]
    private void SendDataToMaster(Dictionary<string, object> data)
    {
        gameDatas.Add(data);
        DataCount = gameDatas.Count;
    }

    public Dictionary<string, object> GetMostPlayerKiller()
    {
        Dictionary<string, object> mostKiller = new Dictionary<string, object>();
        int most = -1;
        foreach (var gamedata in gameDatas)
        {
            if (most < (int)gamedata["PlayerKills"])
            {
                most = (int)gamedata["PlayerKills"];
                mostKiller = gamedata;
            }
        }
        Debug.Log($"mostKiller Count {mostKiller.Count}");
        return mostKiller;
    }

    public Dictionary<string, object> GetWorstPlayerKiller()
    {
        Dictionary<string, object> worstKiller = new Dictionary<string, object>();
        int worst = int.MaxValue;
        foreach (var gamedata in gameDatas)
        {
            if (worst > (int)gamedata["PlayerKills"])
            {
                worst = (int)gamedata["PlayerKills"];
                worstKiller = gamedata;
            }
        }
        return worstKiller;
    }
    public Dictionary<string, object> GetMostAIKiller()
    {
        Dictionary<string, object> mostKiller = new Dictionary<string, object>();
        int most = -1;
        foreach (var gamedata in gameDatas)
        {
            if (most < (int)gamedata["AIKills"])
            {
                most = (int)gamedata["AIKills"];
                mostKiller = gamedata;
            }
        }
        return mostKiller;
    }

    public Dictionary<string, object> GetWinner()
    {
        Dictionary<string, object> winner = new Dictionary<string, object>();

        Debug.Log("GameDatas ::: " + gameDatas.Count);
        foreach (var gamedata in gameDatas)
        {
            foreach (var data in gamedata)
            {
                Debug.Log($"{data.Key} ::: {data.Value}");
            }
            if ((bool)gamedata["IsWin"])
            {
                winner = gamedata;
            }
        }
        Debug.Log($"winner Count {winner.Count}");
        return winner;
    }
}
