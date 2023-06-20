using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;


public class Player : MonoBehaviour
{
    JoyStick joyStick;
    DashBtn dashBtn;
    Rigidbody rBody;
    Transform tr;

    private Animator playerAnim;


    private float moveSpeed;
    public float normalSpeed;
    public float dashSpeed;
    public float roteSpeed;

    public float atkSpeed;

    private void Awake()
    {
        tr = GetComponent<Transform>();
        rBody = GetComponent<Rigidbody>();
        joyStick = GameObject.FindGameObjectWithTag("PlayerCanvas").GetComponentInChildren<JoyStick>();
        dashBtn = GameObject.FindGameObjectWithTag("DashBtn").GetComponent<DashBtn>();
    }

    

    void Update()
    {
#if UNITY_ANDROID
        PlayerJoyStickMove();
#endif
#if UNITY_EDITOR_WIN
        PlayerKeyBordMove();
#endif
    }

    public void PlayerJoyStickMove()
    {
        float h = joyStick.Horizontal();
        float v = joyStick.Vertical();
        float fall = rBody.velocity.y;

        if (h != 0 || v != 0)
        {
            if (dashBtn.IsCheck)
            {
                moveSpeed = dashSpeed;
            }                
            else
            {
                moveSpeed = normalSpeed;
            }
            Vector3 dir = new Vector3(h, 0, v);
            transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.LookRotation(dir), roteSpeed);

            rBody.velocity = new Vector3(h * moveSpeed, fall, v * moveSpeed);
            //transform.position으로 이동
            //Vector3 moveDiection = new Vector3(h, 0, v).normalized;
            //tr.position += moveDiection * moveSpeed * Time.deltaTime;
        }
    }
    public void PlayerKeyBordMove()
    {
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");
        float fall = rBody.velocity.y;
        Vector3 dir = new Vector3(h, 0, v);

        if (!(h == 0 && v == 0))
        {
            transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.LookRotation(dir), roteSpeed);
        }
        if (dashBtn.IsCheck)
        {
            moveSpeed = dashSpeed;
        }
        else
        {
            moveSpeed = normalSpeed;
        }
        if (h == 0 && v == 0)
            return;

        rBody.velocity = new Vector3(h * moveSpeed, fall, v * moveSpeed);
        //Vector3 moveDiection = new Vector3(h, 0, v).normalized;
        //tr.position += moveDiection * moveSpeed * Time.deltaTime;
    }
}
