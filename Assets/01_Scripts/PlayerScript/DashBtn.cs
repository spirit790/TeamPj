using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class DashBtn : MonoBehaviour
{
    
    public bool IsCheck;
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
        IsCheck = true;
    }
    /// <summary>
    /// Dash��ư�� EventTrigger�� �޾Ƽ� PointerDown PointerUp�� ���� ����.
    /// </summary>
    public void PointerUp()
    {
        Debug.Log("��ư��");
        IsCheck = false;
    }


}
