using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class DashBtn : MonoBehaviour
{
    
    public bool check;
    private void Awake()
    {

    }
    public void Update()
    {
    }
    /// <summary>
    /// Dash��ư�� ������ check�� true false���� Ȯ�� �� ���� �����ٰ� Player���� ���º�ȯ
    /// </summary>
    public void PointerDown()
    {
        Debug.Log("��ư����");
        check = true;
    }
    /// <summary>
    /// Dash��ư�� ������ check�� true false���� Ȯ�� �� ���� �����ٰ� Player���� ���º�ȯ
    /// </summary>
    public void PointerUp()
    {
        Debug.Log("��ư��");
        check = false;
    }


}
