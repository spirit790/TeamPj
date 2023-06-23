using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Localization.Settings;
using UnityEngine.UI;
using UnityEngine.Audio;

public class GameOptionManager : MonoBehaviour
{

    [SerializeField]
    GameObject option;


    AudioSource bgmPlayer;
    AudioSource sfxPlayer;

    public AudioClip[] audioClips;
    public AudioMixer audioMixer;

    SFXCASE sfxCase;
    public enum SFXCASE
    {

    }


    private void Awake()
    {
        bgmPlayer = GameObject.Find("BGM Player").GetComponent<AudioSource>();
        sfxPlayer = GameObject.Find("Sfx Player").GetComponent<AudioSource>();
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
