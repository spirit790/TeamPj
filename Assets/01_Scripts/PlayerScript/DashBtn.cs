using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class DashBtn : MonoBehaviour
{
    GameOptionManager gameOptionManager;

    public bool IsCheck;
    private void Awake()
    {
        
    }
    private void Start()
    {
        gameOptionManager = GameOptionManager.Instance();
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
        IsCheck = true;
        gameOptionManager.PlaySfxSound("Dash",transform.position,gameOptionManager.sfxVol);

    }
    /// <summary>
    /// Dash버튼에 EventTrigger를 달아서 PointerDown PointerUp의 각각 연결.
    /// </summary>
    public void PointerUp()
    {
        Debug.Log("버튼땜");
        IsCheck = false;
    }


}
