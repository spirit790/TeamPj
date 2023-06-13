using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Player : MonoBehaviour
{
    JoyStick joyStick;

    public Animator playerAnim;

    public float moveSpeed;
    public float dashSpeed;
    public float atkSpeed;
    public Button dashBtn;

    public float curTime;
    public float coolTime;
    Transform tr;



    void Start()
    {
        joyStick = GameObject.FindGameObjectWithTag("PlayerCanvas").GetComponentInChildren<JoyStick>();
        tr = GetComponent<Transform>();
        dashBtn = GameObject.FindGameObjectWithTag("DashBtn").GetComponent<Button>();
    }

    void Update()
    {
        PlayerKeyBordMove();
        PlayerJoyStickMove();
    }

    public void PlayerJoyStickMove()
    {
        float h = joyStick.Horizontal();
        float v = joyStick.Vertical();

        if (h != 0 || v != 0)
        {
            Vector3 moveDiection = new Vector3(h, 0, v).normalized;
            tr.position += moveDiection * moveSpeed * Time.deltaTime;
        }
    }
    public void PlayerKeyBordMove()
    {
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        Vector3 moveDiection = new Vector3(h, 0, v).normalized;
        tr.position += moveDiection * moveSpeed * Time.deltaTime;
    }
    public void OnclickDash()
    {
        Debug.Log("대시버튼");
    }
}
