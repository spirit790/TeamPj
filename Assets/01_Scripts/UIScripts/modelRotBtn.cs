using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class modelRotBtn : MonoBehaviour
{
    public GameObject modelPos;

    public bool isRight = true;

    private bool isPressed = false;
    private void Update()
    {
        if (!isPressed) return;
        if (isRight) modelPos.transform.Rotate(0, -300f * Time.deltaTime, 0);
        else if (!isRight) modelPos.transform.Rotate(0, 300f * Time.deltaTime, 0);
    }
    public void OnPressRot()
    {
        isPressed = true;
    }
    public void OutPressRot()
    {
        isPressed = false;  
    }

}
