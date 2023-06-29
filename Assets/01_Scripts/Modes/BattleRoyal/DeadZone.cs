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
            // 플레이어 처치
            StartCoroutine(PlayerDeadByDeadZone(player));
        }
        else if (other.gameObject.CompareTag("AI"))
        {
            // AI 처치
            mode.DeSpawnAI();
        }
    }

    IEnumerator PlayerDeadByDeadZone(PlayerController player)
    {
        yield return new WaitForSeconds(deadZoneTime);
        Debug.Log("데드존에 플레이어 사망");
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
    /// 트윈 사용해 자기장 크기를 분기마다 줄이는 함수
    /// </summary>
    /// <param name="newRadius">ModeBattleRoyal에서 시간으로 계산해 줄어들 반지름</param>
    /// <param name="shrinkTime">크기 줄이는 시간</param>
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
