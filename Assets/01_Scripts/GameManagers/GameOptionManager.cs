using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Localization.Settings;
using UnityEngine.UI;

public class GameOptionManager : MonoBehaviour
{
    GameObject optionPanel;



    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.Escape))
        {
            
        }
    }


    //����ȭ ������ �Լ�
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

    //���� �ɼ�
    #region SoundOption

    #endregion


}
