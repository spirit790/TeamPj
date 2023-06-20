using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class DeadZone : MonoBehaviour
{
    public float radius = 5f;

    void Start()
    {
        DOTween.Init();
        SetDeadZoneRadius(radius, 0);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            // 플레이어 처치
        }
        else if (other.gameObject.CompareTag("AI"))
        {
            // AI 처치
            Destroy(other.gameObject);
        }
    }

    /// <summary>
    /// 트윈 사용해 분기마다 줄이기
    /// </summary>
    /// <param name="newRadius"></param>
    public void SetDeadZoneRadius(float newRadius, float shrinkTime)
    {
        //transform.localScale = new Vector3(newRadius, 1f, newRadius);
        transform.DOScaleX(newRadius, shrinkTime);
        transform.DOScaleZ(newRadius, shrinkTime);
    }
}
