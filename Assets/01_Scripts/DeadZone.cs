using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DeadZone : MonoBehaviour
{
    public float radius = 5f;

    void Start()
    {
        SetDeadZoneRadius(radius);
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
        }
    }

    /// <summary>
    /// 트윈 사용해 분기마다 줄이기
    /// </summary>
    /// <param name="newRadius"></param>
    public void SetDeadZoneRadius(float newRadius)
    {
        transform.localScale = new Vector3(newRadius, 1f, newRadius);
    }
}
