using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Localization.Settings;

public class GameOptionManager : MonoBehaviour
{




    private void Update()
    {
#if UNITY_ANDROID

        AndroidQuitApp();

#endif



    }
    //종료버튼
    #region AppQuit

    void AndroidQuitApp()
    {
        if(Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
    }
    void WindowQuit()
    {
        if(Input.GetKeyDown(KeyCode.Escape))
        {
            Application.Quit();
        }
    }



#endregion


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


}
