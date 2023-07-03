using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ButtonScene : MonoBehaviour
{
    public void OnToMainBtnClicked()
    {
        SceneManager.LoadScene(1);
    }

    public void OnExitBtnClicked()
    {
        Application.Quit();
    }
}
