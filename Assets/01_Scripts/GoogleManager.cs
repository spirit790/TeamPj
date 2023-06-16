using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GooglePlayGames;
using Firebase.Firestore;
using Firebase.Extensions;

public class GoogleManager : MonoBehaviour
{
    [Header("UI")]
    public Text logText;
    public InputField nickNameInput;
    public GameObject signUpPanel;

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
    void Start()
    {
        PlayGamesPlatform.DebugLogEnabled = true;
        PlayGamesPlatform.Activate();
        Login();
    }


    public void Login()
    {
        Social.localUser.Authenticate((bool success) =>
        {
            if (success)
            {
                logText.text = Social.localUser.id + "\n" + Social.localUser.userName;
                IsGoogleLoginSuccess = true;
            }
            else logText.text = "login failed";
        });
    }

    public void LogOut()
    {
        ((PlayGamesPlatform)Social.Active).SignOut();
        logText.text = "logout";
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
            { "SignUpDate", FieldValue.ServerTimestamp }
        };

        yield return docRef.SetAsync(user).ContinueWithOnMainThread(task =>
        {
            if (task.IsCompleted)
            {
                Debug.Log("가입 완료");
                signUpPanel.SetActive(false);
            }
            else
            {
                // 에러 처리
            }
        });
    }
}
