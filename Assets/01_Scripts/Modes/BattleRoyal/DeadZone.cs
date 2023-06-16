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
            // �÷��̾� óġ
        }
        else if (other.gameObject.CompareTag("AI"))
        {
            // AI óġ
            Destroy(other.gameObject);
        }
    }

    /// <summary>
    /// Ʈ�� ����� �б⸶�� ���̱�
    /// </summary>
    /// <param name="newRadius"></param>
    public void SetDeadZoneRadius(float newRadius, float shrinkTime)
    {
        //transform.localScale = new Vector3(newRadius, 1f, newRadius);
        transform.DOScaleX(newRadius, shrinkTime);
        transform.DOScaleZ(newRadius, shrinkTime);
    }
}
