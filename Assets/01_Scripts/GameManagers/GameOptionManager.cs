using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Localization.Settings;
using UnityEngine.UI;
using UnityEngine.Audio;

public class GameOptionManager : MonoBehaviour
{
    public static GameOptionManager instance;

    [SerializeField]
    GameObject option;

    
    AudioSource bgmPlayer;
    AudioSource sfxPlayer;
    [Header("Audio List")]
    public AudioClip[] audioClips;
    public AudioMixer audioMixer;

    public Slider bgmSlider;
    public Slider sfxSlider;
        
    private void Awake()
    {
        instance = this;
        bgmPlayer = GameObject.FindWithTag("BgmPlayer").GetComponent<AudioSource>();
        sfxPlayer = GameObject.FindWithTag("SfxPlayer").GetComponent<AudioSource>();

        
    }

    private void Start()
    {

    }


    private void Update()
    {
        if (Input.GetKey(KeyCode.Escape))
        {
            option.SetActive(true);
        }
#if UNITY_ANDROID
        if (Application.platform == RuntimePlatform.Android)
        {
            if (Input.GetKey(KeyCode.Escape))
            {
                option.SetActive(true);
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
        LocalizationSettings.SelectedLocale = LocalizationSettings.AvailableLocales.Locales[index];

        isChanging = false;
    }
    #endregion

    //사운드 옵션
    #region SoundOption

    public void PlaySound(string type)
    {
        int index = 0;

        switch (type)
        {
            case "Touch": index = 0; break;
            case "Attack": index = 1; break;
            case "Dash": index = 2; break;
            case "Close": index = 3; break;
        }

        sfxPlayer.clip = audioClips[index];
        sfxPlayer.Play();
    }

    void OnMouseDown()
    {
        instance.PlaySound("Touch");
        instance.PlaySound("Attack");
        instance.PlaySound("Dash");
        instance.PlaySound("Close");
    }


    #endregion

    public void CloseOptionPanelBtn()
    {
        option.SetActive(false);
    }

    public void AppQuitBtn()
    {
        Application.Quit();
    }

}
