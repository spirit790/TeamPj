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
    AudioSource sfxPlayer;
    Button closeBtn;
    Button quitBtn;
    Button localEngBtn;
    Button localKorBtn;

    public GameObject touchImage;
    public float dahsSfxLength;
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
    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        if (scene.buildIndex > 0)
        {
            FindOptionPenal();

            quitBtn.onClick.AddListener(AppQuitBtn);
            closeBtn.onClick.AddListener(CloseOptionPanelBtn);
            bgmSlider.onValueChanged.AddListener(ChangeBgmVol);
            sfxSlider.onValueChanged.AddListener(ChangeSfxVol);
            localEngBtn.onClick.AddListener(() => ChangeLocale(0));
            localKorBtn.onClick.AddListener(() => ChangeLocale(1));

            PlayerPrefabLoad();

            optionPanel.SetActive(false);
        }

        BgmSoundChang(scene);
    }
    private void FindOptionPenal()
    {
        bgmPlayer = GameObject.FindWithTag("BgmPlayer").GetComponent<AudioSource>();
        sfxPlayer = GameObject.FindWithTag("SfxPlayer").GetComponent<AudioSource>();
        optionPanel = GameObject.FindWithTag("OptionPanel").gameObject;
        bgmSlider = optionPanel.transform.GetChild(1).GetComponent<Slider>();
        sfxSlider = optionPanel.transform.GetChild(2).GetComponent<Slider>();
        localEngBtn = optionPanel.transform.GetChild(3).Find("Eng").GetComponent<Button>();
        localKorBtn = optionPanel.transform.GetChild(3).Find("Kor").GetComponent<Button>();
        closeBtn = optionPanel.transform.GetChild(4).GetComponent<Button>();
        quitBtn = optionPanel.transform.GetChild(5).GetComponent<Button>();
    }


    private void Update()
    {
        int touchBiildIndex = SceneManager.GetActiveScene().buildIndex;

        if (touchBiildIndex == 1)
        {
            if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
            {
                OnTouchBegan();
                TouchImage();
            }
        }
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            optionPanel.SetActive(true);
        }
        if(Input.GetKeyDown(KeyCode.Space))
        {
            OnTouchBegan();
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
    void PlayBgmSound(string type, float vol)
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

    void BgmSoundChang(Scene scene)
    {
        if (scene.buildIndex == 1)
        {
            Debug.Log("introBgm");
            bgmPlayer.clip = bgmClips[0];
            bgmPlayer.volume = bgmVol;
            bgmPlayer.loop = true;
            bgmPlayer.Play();
        }
        if (scene.buildIndex == 2)
        {
            Debug.Log("정글BGM");
            bgmPlayer.clip = bgmClips[1];
            bgmPlayer.volume = bgmVol;
            bgmPlayer.loop = true;
            bgmPlayer.Play();
        }
        if (scene.buildIndex == 3)
        {
            Debug.Log("스쿨BGM");
            bgmPlayer.clip = bgmClips[2];
            bgmPlayer.volume = bgmVol;
            bgmPlayer.loop = true;
            bgmPlayer.Play();
        }
        if (scene.buildIndex == 4)
        {
            Debug.Log("타워BGM");
            bgmPlayer.clip = bgmClips[3];
            bgmPlayer.volume = bgmVol;
            bgmPlayer.loop = true;
            bgmPlayer.Play();
        }
    }


    /// <summary>
    /// case추가하시고 소리가 나야하는 스크립트 위치에 가져오셔서 PlaySfxSound("???")로 쓰면됩니다.
    /// </summary>
    /// <param name="type"></param>
    public void PlaySfxSound(string type, float vol)
    {
        int index = 0;

        switch (type)
        {
            case "Touch": index = 0; break;
            case "Touch1": index = 1; break;
            case "Touch2": index = 2; break;
            case "Attack": index = 3; break;
            case "Dash": index = 4; break;
            case "Close": index = 5; break;
        }
        sfxPlayer.clip = sfxClips[index];
        sfxPlayer.volume = vol;
        sfxPlayer.Play();
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
    /// <summary>
    /// 확률적 터치소리변경
    /// </summary>
    private void OnTouchBegan()
    {
        int randomSfx = Random.Range(0, 100);

        if (randomSfx <= 50)
        {
            sfxPlayer.clip = sfxClips[0];
            sfxPlayer.volume = bgmVol;
            sfxPlayer.Play();
        }
        else if (randomSfx >= 50 && randomSfx <= 80)
        {
            sfxPlayer.clip = sfxClips[1];
            sfxPlayer.volume = bgmVol;
            sfxPlayer.Play();
        }
        else if (randomSfx > 80)
        {
            sfxPlayer.clip = sfxClips[2];
            sfxPlayer.volume = bgmVol;
            sfxPlayer.Play();
        }
    }
    #endregion
    void TouchImage()
    {
        Vector3 touchPos = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
        Instantiate(touchImage, touchPos, Quaternion.identity);
    }


    #region PlayerPrefab
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
    #endregion

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
