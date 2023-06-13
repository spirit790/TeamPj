using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{

    public Animator playerAnim;

    public float moveSpeed;
    public float dashSpeed;
    public float atkSpeed;

    public float curTime;
    public float coolTime;
    Transform tr;


    void Start()
    {
        tr = GetComponent<Transform>();

    }


    void Update()
    {
        PlayerMove();
    }

    /// <summary>
    /// 플레이어 이동입니다. GetAxis로 받아 이동합니다.
    /// </summary>
    public void PlayerMove()
    {
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        Vector3 moveDiection = new Vector3(h, 0, v).normalized;
        tr.position += moveDiection * moveSpeed * Time.deltaTime;
    }
}
