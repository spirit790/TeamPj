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

    public AudioClip bgm;
    public Slider bgmSlider;

    public AudioMixer audioMixer;

    private void Start()
    {
        GetComponent<AudioSource>().clip = bgm;
        GetComponent<AudioSource>().loop = true;
        GetComponent<AudioSource>().Play();
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
    public void PlaySfx(AudioClip sfx)
    {
        GetComponent<AudioSource>().PlayOneShot(sfx);
    }
    public void SetBgmVolme()
    {
        audioMixer.SetFloat("BGM", Mathf.Log10(bgmSlider.value) * 20);
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
