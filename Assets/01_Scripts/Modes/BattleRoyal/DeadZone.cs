using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class DeadZone : MonoBehaviour
{
    public float radius = 5f;
    public float deadZoneTime = 2f;
    public ModeBattleRoyal mode;
    void Start()
    {
        DOTween.Init();
        SetDeadZoneRadius(radius, 0);
        mode = GameObject.Find("ModeBattleRoyal").GetComponent<ModeBattleRoyal>();
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            // �÷��̾� óġ
            StartCoroutine(PlayerDeadByDeadZone());
        }
        else if (other.gameObject.CompareTag("AI"))
        {
            // AI óġ
            mode.DeSpawnAI();
        }
    }

    IEnumerator PlayerDeadByDeadZone()
    {
        yield return new WaitForSeconds(deadZoneTime);
        Debug.Log("�������� �÷��̾� ���");
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            StopCoroutine(PlayerDeadByDeadZone());
        }
    }

    /// <summary>
    /// Ʈ�� ����� �ڱ��� ũ�⸦ �б⸶�� ���̴� �Լ�
    /// </summary>
    /// <param name="newRadius">ModeBattleRoyal���� �ð����� ����� �پ�� ������</param>
    /// <param name="shrinkTime">ũ�� ���̴� �ð�</param>
    public void SetDeadZoneRadius(float newRadius, float shrinkTime)
    {
        //transform.localScale = new Vector3(newRadius, 1f, newRadius);
        transform.DOScaleX(newRadius, shrinkTime);
        transform.DOScaleZ(newRadius, shrinkTime);
    }
}
