using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GooglePlayGames;
using Firebase.Firestore;
using Firebase.Extensions;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine.SceneManagement;

public class GoogleManager : MonoBehaviour
{
    public static GoogleManager instance;
    public static GoogleManager Instance
    {
        get { return instance; }
    }
    [Header("UI")]
    public Text logText;
    public InputField nickNameInput;
    public GameObject signUpPanel;
    public GameObject updatePanel;

    private bool isGoogleLoginSuccess = false;
    public bool IsGoogleLoginSuccess
    {
        get { return isGoogleLoginSuccess; }
        set
        {
            if (value == true)
            {
                // 회원가입 안되어있다면 가입하도록
                StartCoroutine(CheckUserInfo(Social.localUser.id));
            }
        }
    }

    public string userID;
    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(instance);
        }
        else
        {
            Destroy(gameObject);
        }
    }
    void Start()
    {
#if UNITY_ANDROID
        PlayGamesPlatform.DebugLogEnabled = true;
        PlayGamesPlatform.Activate();
#endif
        Login();
    }


    public void Login()
    {
        Social.localUser.Authenticate((bool success) =>
        {
            if (success)
            {
                userID = Social.localUser.id;
                Debug.Log(userID);
                logText.text = Social.localUser.id + "\n" + Social.localUser.userName;
                IsGoogleLoginSuccess = true;
            }
            else logText.text = "login failed";
        });
    }

    public void LogOut()
    {
#if UNITY_ANDROID
        ((PlayGamesPlatform)Social.Active).SignOut();
        logText.text = "logout";
#endif
    }

    IEnumerator CheckUserInfo(string userId)
    {
        FirebaseFirestore db = FirebaseFirestore.DefaultInstance;
        DocumentReference docRef = db.Collection("users").Document(userId);
        yield return docRef.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            DocumentSnapshot snapShot = task.Result;
            if (snapShot.Exists)
            {
                // 게임시작 씬전환 등
                //updatePanel.SetActive(true);
                SceneManager.LoadScene(1);
            }
            else
            {
                // 회원가입창
                signUpPanel.SetActive(true);
            }
        });
    }

    public void OnCreateUser()
    {
        StartCoroutine(CreateUserInfo(nickNameInput.text));
    }

    IEnumerator CreateUserInfo(string nickName)
    {
        FirebaseFirestore db = FirebaseFirestore.DefaultInstance;
        DocumentReference docRef = db.Collection("users").Document(Social.localUser.id);
        Dictionary<string, object> user = new Dictionary<string, object>
        {
            { "UserName", Social.localUser.userName },
            { "NickName", nickName },
            { "Kills", 0 },
            { "Wins", 0 },
            { "Plays", 0},
            { "PlayerKills", 0 },
            { "AIKills", 0 },
            { "Death", 0 },
            { "isAdsFree", false },
            { "SignUpDate", FieldValue.ServerTimestamp },
            { "LoginDate", FieldValue.ServerTimestamp }
        };

        yield return docRef.SetAsync(user).ContinueWithOnMainThread(task =>
        {
            if (task.IsCompleted)
            {
                Debug.Log("가입 완료");
                signUpPanel.SetActive(false);
                //updatePanel.SetActive(true);
                SceneManager.LoadScene(1);
            }
            else
            {
                // 에러 처리
            }
        });
    }

    
    public void OnUpdateUserGameData()
    {
        int wins = 0;
        int plays = 0;
        int playerKills = 0;
        int aiKills = 0;
        int death =0;


        foreach (KeyValuePair<string, object> pair in GameManager.Instance.userInfo)
        {
            switch (pair.Key)
            {
                case "Wins":
                    Debug.Log($"{pair.Key}: {pair.Value}");
                    wins = int.Parse(pair.Value.ToString());
                    if (GameManager.Instance.isWin)
                    {
                        wins += 1;
                        Debug.Log(wins);
                    }
                    break;
                case "Plays":
                    Debug.Log($"{pair.Key}: {pair.Value}");
                    plays = int.Parse(pair.Value.ToString());
                    plays++;
                    break;
                case "PlayerKills":
                    Debug.Log($"{pair.Key}: {pair.Value}");
                    playerKills = int.Parse(pair.Value.ToString());
                    playerKills += GameManager.Instance.playerKills;
                    Debug.Log($"PlayerKills: {playerKills}");
                    break;
                case "AIKills":
                    Debug.Log($"{pair.Key}: {pair.Value}");
                    aiKills = int.Parse(pair.Value.ToString());
                    aiKills += GameManager.Instance.aiKills;
                    Debug.Log($"AIKills: {aiKills}");
                    break;
                case "Death":
                    Debug.Log($"{pair.Key}: {pair.Value}");
                    death = int.Parse(pair.Value.ToString());
                    death += GameManager.Instance.death;
                    break;
                default:
                    break;
            }
        }
        StartCoroutine(UpdateUserGameData(wins, plays, playerKills, aiKills, death));
    }
    IEnumerator UpdateUserGameData(int wins, int plays, int playerKills, int aiKills, int death)
    {
        int kills = playerKills + aiKills;
        FirebaseFirestore db = FirebaseFirestore.DefaultInstance;
        DocumentReference docRef = db.Collection("users").Document(Social.localUser.id);
        Dictionary<string, object> gameData = new Dictionary<string, object>
        {
            { "Kills", kills },
            { "Wins", wins },
            { "Plays", plays },
            { "PlayerKills", playerKills },
            { "AIKills", aiKills },
            { "Death", death },
        };
        yield return docRef.UpdateAsync(gameData).ContinueWithOnMainThread(task =>
        {
            if (task.IsCompleted)
            {
                Debug.Log("Update User GameData");
            }
            else
            {
                // 에러 처리
            }
        });

    }


    IEnumerator UpdateUserLoginDate()
    {
        FirebaseFirestore db = FirebaseFirestore.DefaultInstance;
        DocumentReference docRef = db.Collection("users").Document(Social.localUser.id);
        Dictionary<string, object> loginDate = new Dictionary<string, object>
        {
            { "LoginDate", FieldValue.ServerTimestamp }
        };
        yield return docRef.UpdateAsync(loginDate).ContinueWithOnMainThread(task =>
        {
            if (task.IsCompleted)
            {
                Debug.Log("Update User LoginDate");
            }
            else
            {
                // 에러 처리
            }
        });

    }

    IEnumerator UpdateUserLogoutDate()
    {
        FirebaseFirestore db = FirebaseFirestore.DefaultInstance;
        DocumentReference docRef = db.Collection("users").Document(Social.localUser.id);
        Dictionary<string, object> logoutDate = new Dictionary<string, object>
        {
            { "LoginDate", FieldValue.ServerTimestamp }
        };
        yield return docRef.UpdateAsync(logoutDate).ContinueWithOnMainThread(task =>
        {
            if (task.IsCompleted)
            {
                Debug.Log("Update User LogoutDate");
            }
            else
            {
                // 에러 처리
            }
        });
    }

    public void OnGetUserInfo()
    {
        StartCoroutine(GetUserInfo());
    }
    IEnumerator GetUserInfo()
    {
        FirebaseFirestore db = FirebaseFirestore.DefaultInstance;
        DocumentReference docRef = db.Collection("users").Document(Social.localUser.id);
        yield return docRef.GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            DocumentSnapshot snapshot = task.Result;
            if (snapshot.Exists)
            {
                GameManager.Instance.userInfo = snapshot.ToDictionary();
            }
        });
    }

    public void OnCreateGameData(Dictionary<string, object> data)
    {
        StartCoroutine(CreateGameData(data));
    }
    IEnumerator CreateGameData(Dictionary<string, object> data)
    {
        int id = 0;
        FirebaseFirestore db = FirebaseFirestore.DefaultInstance;
        yield return db.Collection("games").GetSnapshotAsync().ContinueWithOnMainThread(task =>
        {
            QuerySnapshot snapshot = task.Result;
            id = snapshot.Count;
        });
        id++;
        Debug.Log(id);
        DocumentReference docRef = db.Collection("games").Document(id.ToString());
        yield return docRef.SetAsync(data).ContinueWithOnMainThread(task =>
        {
            if (task.IsCompleted)
            {
                Debug.Log("Game Data Added");
            }
        });
    }
}
