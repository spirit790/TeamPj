using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Localization.Settings;
using UnityEngine.UI;
using UnityEngine.Audio;

public class GameOptionManager : MonoBehaviour
{
    static GameOptionManager instance = null;

    public static GameOptionManager Instance()
    {
        return instance;
    }
    Slider bgmSlider;
    Slider sfxSlider;
    GameObject optionPanel;
    AudioSource bgmPlayer;
    AudioSource sfxPlayer;
    public AudioClip[] bgmClips;
    public AudioClip[] sfxClips;

    //public AudioMixer audioMixer;
    private void Awake()
    {
        if(instance ==null)
        {
            instance = this;
            DontDestroyOnLoad(instance);
        }
        else
        {
            Destroy(gameObject);
        }
        
        bgmPlayer = GameObject.FindWithTag("BgmPlayer").GetComponent<AudioSource>();
        sfxPlayer = GameObject.FindWithTag("SfxPlayer").GetComponent<AudioSource>();

        //PlayerCanvas하위 오브젝트들의 순서에 따라 찾게 해놨습니다.
        optionPanel = GameObject.FindWithTag("PlayerCanvas").transform.GetChild(0).gameObject;
        bgmSlider = optionPanel.transform.GetChild(0).GetComponent<Slider>();
        sfxSlider = optionPanel.transform.GetChild(1).GetComponent<Slider>();
        bgmSlider.onValueChanged.AddListener(ChangeBgmVol);
        sfxSlider.onValueChanged.AddListener(ChangeSfxVol);
    }
    private void Update()
    {
        if (Input.GetKey(KeyCode.Escape))
        {
            optionPanel.SetActive(true);
        }
#if UNITY_ANDROID
        if (Application.platform == RuntimePlatform.Android)
        {
            if (Input.GetKey(KeyCode.Escape))
            {
                optionPanel.SetActive(true);
            }
        }
#endif
    }


    //현지화 변수와 함수
    #region Localization
    bool isChanging = false;

    public void ChangeLocale(int index)
    {
        if (isChanging)
            return;

        StartCoroutine(LocaleChange(index));
    }

    IEnumerator LocaleChange(int index)
    {
        isChanging = true;

        yield return LocalizationSettings.InitializationOperation;
        Debug.Log(index);
        Debug.Log("바뀜");
        LocalizationSettings.SelectedLocale = LocalizationSettings.AvailableLocales.Locales[index];

        isChanging = false;
    }
    #endregion

    //사운드 옵션
    #region SoundOption
    /// <summary>
    /// case추가하시고 소리가 나야하는 스크립트 위치에 가져오셔서 PlayBgmSound("???")로 쓰면됩니다.
    /// </summary>
    /// <param name="type"></param>
    public void PlayBgmSound(string type)
    {
        int index = 0;

        switch (type)
        {
            case "Intro": index = 0; break;
            case "Lobby": index = 1; break;
            case "InGame1": index = 2; break;
            case "InGame2": index = 3; break;
            case "InGame3": index = 4; break;
            case "InGame4": index = 5; break;
            case "Result": index = 6; break;
        }
        bgmPlayer.clip = bgmClips[index];
        bgmPlayer.loop = true;
        bgmPlayer.Play();        
    }
    /// <summary>
    /// case추가하시고 소리가 나야하는 스크립트 위치에 가져오셔서 PlaySfxSound("???")로 쓰면됩니다.
    /// </summary>
    /// <param name="type"></param>
    public void PlaySfxSound(string type)
    {
        int index = 0;

        switch (type)
        {
            case "Touch": index = 0; break;
            case "Attack": index = 1; break;
            case "Dash": index = 2; break;
            case "Close": index = 3; break;
        }

        sfxPlayer.clip = sfxClips[index];
        sfxPlayer.Play();
    }

    void ChangeBgmVol(float bgmVol)
    {
        bgmPlayer.volume = bgmVol;
    }
    void ChangeSfxVol(float sfxVol)
    {
        sfxPlayer.volume = sfxVol;
    }
    #endregion

    public void CloseOptionPanelBtn()
    {
        optionPanel.SetActive(false);
    }

    public void AppQuitBtn()
    {
        Application.Quit();
    }
}
