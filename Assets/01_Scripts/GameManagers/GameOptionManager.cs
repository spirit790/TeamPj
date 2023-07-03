using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Localization.Settings;
using UnityEngine.UI;
using UnityEngine.Audio;
using UnityEngine.SceneManagement;

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
    Button closeBtn;
    Button quitBtn;
    Button localEngBtn;
    Button localKorBtn;
    MapGenerator mapGenerator;

    public float sfxVol;
    public float bgmVol;
    public int loCalIndex;
    public AudioClip[] bgmClips;
    public AudioClip[] sfxClips;

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
        SceneManager.sceneLoaded += OnSceneLoaded;
        
    }
    public void Start()
    {
        
    }
    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        bgmPlayer = GameObject.FindWithTag("BgmPlayer").GetComponent<AudioSource>();
        optionPanel = GameObject.FindWithTag("OptionPanel").transform.GetChild(0).gameObject;
        bgmSlider = optionPanel.transform.GetChild(0).GetComponent<Slider>();
        sfxSlider = optionPanel.transform.GetChild(1).GetComponent<Slider>();
        localEngBtn = optionPanel.transform.GetChild(2).GetChild(0).GetComponent<Button>();
        localKorBtn = optionPanel.transform.GetChild(2).GetChild(1).GetComponent<Button>();
        closeBtn = optionPanel.transform.GetChild(3).GetComponent<Button>();
        quitBtn = optionPanel.transform.GetChild(4).GetComponent<Button>();

        quitBtn.onClick.AddListener(AppQuitBtn);
        closeBtn.onClick.AddListener(CloseOptionPanelBtn);
        bgmSlider.onValueChanged.AddListener(ChangeBgmVol);
        sfxSlider.onValueChanged.AddListener(ChangeSfxVol);
        localEngBtn.onClick.AddListener(() => ChangeLocale(0));
        localKorBtn.onClick.AddListener(() => ChangeLocale(1));

        PlayerPrefabLoad();
        
        if (scene.buildIndex == 1)
        {
            bgmPlayer.clip = bgmClips[0];
            bgmPlayer.volume = bgmVol;
            bgmPlayer.loop = true;
            bgmPlayer.Play();
        }
        if(scene.buildIndex == 2)
        {
            mapGenerator = GameObject.FindWithTag("MapGen").GetComponent<MapGenerator>();
            if (mapGenerator.concept == 1)
            {
                bgmPlayer.clip = bgmClips[0];
                bgmPlayer.volume = bgmVol;
                bgmPlayer.loop = true;
                bgmPlayer.Play();
            }
        }
    }


    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            optionPanel.SetActive(true);
        }

#if UNITY_ANDROID
        if (Application.platform == RuntimePlatform.Android)
        {
            if (Input.GetKeyDown(KeyCode.Escape))
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
        loCalIndex = index;
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
    public void PlayBgmSound(string type,float vol)
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
        bgmPlayer.volume = vol;
        bgmPlayer.loop = true;
        bgmPlayer.Play();        
    }
    /// <summary>
    /// case추가하시고 소리가 나야하는 스크립트 위치에 가져오셔서 PlaySfxSound("???")로 쓰면됩니다.
    /// </summary>
    /// <param name="type"></param>

    public void PlaySfxSound(string type, Vector3 position,float vol)
    {
        int index = 0;

        switch (type)
        {
            case "Touch": index = 0; break;
            case "Attack": index = 1; break;
            case "Dash": index = 2; break;
            case "Close": index = 3; break;
        }
        GameObject soundObject = new GameObject("SfxSound");
        soundObject.transform.position = position;
        
        AudioSource sfxPlayer = soundObject.AddComponent<AudioSource>();
        sfxPlayer.clip = sfxClips[index];
        sfxPlayer.volume = vol;

        sfxPlayer.Play();

        Destroy(soundObject, sfxPlayer.clip.length);
    }

    void ChangeBgmVol(float bgmVol)
    {
        this.bgmVol = bgmVol;
        bgmPlayer.volume = bgmVol;
    }
    void ChangeSfxVol(float sfxVol)
    {
        this.sfxVol = sfxVol;
        
    }
    #endregion

    /// <summary>
    /// PlayerPrefab으로 개인컴퓨터에 간단한 데이터 저장
    /// </summary>
    public void PlayerPrefabSave()
    {
        PlayerPrefs.SetFloat("SfxVol", sfxVol);
        PlayerPrefs.SetFloat("BgmVol", bgmVol);
        PlayerPrefs.SetInt("Local", loCalIndex);
    }
    /// <summary>
    /// PlayerPrefab에 저장되어있는 데이터를 불러와서 세팅
    /// </summary>
    public void PlayerPrefabLoad()
    {
        sfxSlider.value = PlayerPrefs.GetFloat("SfxVol", sfxVol);
        bgmSlider.value = PlayerPrefs.GetFloat("BgmVol", bgmVol);
        loCalIndex = PlayerPrefs.GetInt("Local", loCalIndex);
        ChangeLocale(loCalIndex);
    }

    public void CloseOptionPanelBtn()
    {
        PlayerPrefabSave();
        optionPanel.SetActive(false);
    }

    public void AppQuitBtn()
    {
        Application.Quit();
    }
}
