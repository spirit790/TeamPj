using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;
using Photon.Pun;

public class DeadZone : MonoBehaviour
{
    public float radius = 5f;
    public float deadZoneTime = 2f;
    public ModeBattleRoyal mode;
    void Start()
    {
        DOTween.Init();
        SetDeadZoneRadius(radius, 0);
        mode = FindAnyObjectByType<ModeBattleRoyal>();
        if(PhotonNetwork.IsMasterClient)
            StartCoroutine(ShirinkDeadZone());
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            PlayerController player = other.gameObject.GetComponent<PlayerController>();
            // �÷��̾� óġ
            StartCoroutine(PlayerDeadByDeadZone(player));
        }
        else if (other.gameObject.CompareTag("AI"))
        {
            // AI óġ
            mode.DeSpawnAI();
        }
    }

    IEnumerator PlayerDeadByDeadZone(PlayerController player)
    {
        yield return new WaitForSeconds(deadZoneTime);
        Debug.Log("�������� �÷��̾� ���");
        player.IsDead = true;
    }
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            PlayerController player = other.gameObject.GetComponent<PlayerController>();
            StopCoroutine(PlayerDeadByDeadZone(player));
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
        transform.DOScaleY(newRadius, shrinkTime);
        transform.DOScaleZ(newRadius, shrinkTime);
    }

    IEnumerator ShirinkDeadZone()
    {
        Debug.Log("Co");
        float limitTime = GameManager.Instance.battleTimeLimit;
        float timer = limitTime;
        int timeCount = 0;
        float shirinkTimer = 0;
        while (timer > 0)
        {
            timer -= Time.deltaTime;
            shirinkTimer += Time.deltaTime;
            if (shirinkTimer > mode.shrinkTime)
            {
                timeCount++;
                shirinkTimer = 0;
                float newRadius = ((limitTime - timeCount * mode.shrinkTime) / limitTime) * radius;
                SetDeadZoneRadius(newRadius, mode.shrinkTime / 2);
            }
            yield return null;
        }
        yield return null;

    }
}
