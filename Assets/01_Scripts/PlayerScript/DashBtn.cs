using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class DashBtn : MonoBehaviour
{
    GameOptionManager gameOptionManager;
    public float sfxLength;

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
        while (true)
        {
            IsCheck = true;
            gameOptionManager.PlaySfxSound("Dash", transform.position, gameOptionManager.sfxVol);
            yield return new WaitForSeconds(sfxLength);
        }

    }
}
