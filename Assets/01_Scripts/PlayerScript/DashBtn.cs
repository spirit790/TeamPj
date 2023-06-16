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
    /// Dash버튼은 오로지 check의 true false값만 확인 이 값을 가져다가 Player에서 상태변환
    /// </summary>
    public void PointerDown()
    {
        Debug.Log("버튼눌림");
        check = true;
    }
    /// <summary>
    /// Dash버튼은 오로지 check의 true false값만 확인 이 값을 가져다가 Player에서 상태변환
    /// </summary>
    public void PointerUp()
    {
        Debug.Log("버튼땜");
        check = false;
    }


}
