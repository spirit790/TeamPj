using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class DashBtn : MonoBehaviour
{
    GameOptionManager gameOptionManager;
    [SerializeField]
    float sfxLength;

    public bool IsCheck;
 
    private void Start()
    {
        gameOptionManager = GameOptionManager.Instance();
    }

    /// <summary>
    /// Dash��ư�� ������ check�� true false���� Ȯ�� �� ���� �����ٰ� Player���� ���º�ȯ
    /// </summary>
    public void PointerDown()
    {
        IsCheck = true;
        StartCoroutine(PlayeDashSfx());
    }
    
    /// <summary>
    /// Dash��ư�� EventTrigger�� �޾Ƽ� PointerDown PointerUp�� ���� ����.
    /// </summary>
    public void PointerUp()
    {
        IsCheck = false;
    }
    IEnumerator PlayeDashSfx()
    {
        IsCheck = true;
        while (IsCheck)
        {            
            gameOptionManager.PlaySfxSound("Dash", gameOptionManager.sfxVol);
            yield return new WaitForSeconds(sfxLength);
        }
    }
    
}
