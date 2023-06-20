using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class DashBtn : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{
    public bool check;
    public GameObject playerSpeed;
    private void Awake()
    {

    }
    public void Update()
    {
        if(check)
        {
            Debug.Log("dash");
        }
    }

    /// <summary>
    /// �������� Ȯ�εǴ°�
    /// </summary>
    /// <param name="eventData"></param>
    public void OnPointerDown(PointerEventData eventData)
    {
        Debug.Log("Begin");
        check = true;
    }


    /// <summary>
    /// ��ġ�� �������� ���¸� ����
    /// </summary>
    /// <param name="eventData"></param>
    public void OnPointerUp(PointerEventData eventData)
    {
        Debug.Log("End");
        check = false;
    }

    public void DashOn()
    {
    }

}
