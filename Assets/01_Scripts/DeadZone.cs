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
            // �÷��̾� óġ
        }
        else if (other.gameObject.CompareTag("AI"))
        {
            // AI óġ
        }
    }

    /// <summary>
    /// Ʈ�� ����� �б⸶�� ���̱�
    /// </summary>
    /// <param name="newRadius"></param>
    public void SetDeadZoneRadius(float newRadius)
    {
        transform.localScale = new Vector3(newRadius, 1f, newRadius);
    }
}
