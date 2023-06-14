using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class Player : MonoBehaviour
{
    JoyStick joyStick;

    public Animator playerAnim;

    public float moveSpeed;
    public float normalSpeed;
    public float dashSpeed;
    public float atkSpeed;
    public GameObject dashBtn;
    bool check;

    public float curTime;
    public float coolTime;
    Transform tr;
    Rigidbody rBody;

    private void Awake()
    {
        tr = GetComponent<Transform>();
        rBody = GetComponent<Rigidbody>();
        joyStick = GameObject.FindGameObjectWithTag("PlayerCanvas").GetComponentInChildren<JoyStick>();
        dashBtn = GameObject.FindGameObjectWithTag("DashBtn");
        dashBtn.GetComponent<DashBtn>();
    }

    void Start()
    {
        
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
        float fall = rBody.velocity.y;

        if (h != 0 || v != 0)
        {
            

            //velocity로 이동
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
        if (check)
        {
            Debug.Log("~!!!");
            rBody.velocity = new Vector3(h * moveSpeed, fall, v * moveSpeed);
        }
        else if (!check)
        {
            rBody.velocity = new Vector3(h * moveSpeed, fall, v * moveSpeed);
        }
        //Vector3 moveDiection = new Vector3(h, 0, v).normalized;
        //tr.position += moveDiection * moveSpeed * Time.deltaTime;
    }
}
