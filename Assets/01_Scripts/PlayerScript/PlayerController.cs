using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using Photon.Pun;


public class PlayerController : MonoBehaviourPun
{
    JoyStick joyStick;
    DashBtn dashBtn;
    Rigidbody rBody;
    Transform tr;
    NavMeshAgent playerAgent;
    PLAYERSTATE playerState;

    private Animator playerAnim;
    public enum PLAYERSTATE { NONE=-1,IDLE=0,MOVE=1,DASH,ATTACK,DIE }

    public float curTime;
    public float coolTime;

    private float moveSpeed;
    public float normalSpeed;
    public float dashSpeed;
    public float roteSpeed;

    public float atkSpeed;
    private bool isDead = false;
    public bool IsDead
    {
        get { return isDead; }
        set
        {
            if (value == true)
            {
                PlayerDead();
                OnPlayerDie(this);
            }
        }
    }

    // Player ?щ쭩 ?대깽??
    public delegate void PlayerDie(PlayerController player);
    /// <summary>
    /// Player 사망 이벤트로 IsDead 가 true가 되면 호출됩니다. 이벤트 매개변수로 사망한 player 넣어주면 됩니다.
    /// </summary>
    public static event PlayerDie OnPlayerDie;

    private void Awake()
    {
        tr = GetComponent<Transform>();
        rBody = GetComponent<Rigidbody>();
        playerAgent = GetComponent<NavMeshAgent>();
        joyStick = GameObject.FindGameObjectWithTag("PlayerCanvas").GetComponentInChildren<JoyStick>();
        dashBtn = GameObject.FindGameObjectWithTag("DashBtn").GetComponent<DashBtn>();
 
    }
    private void Start()
    {
        playerState = PLAYERSTATE.IDLE;
        //OnPlayerDie(this);
    }

    void Update()
    {
        if (!photonView.IsMine)
            return;
#if UNITY_ANDROID
        PlayerJoyStickMove();
#endif
#if UNITY_EDITOR_WIN
        PlayerKeyBordMove();
#endif

    }

    public void PlayerMove()
    {
#if UNITY_ANDROID
        float h = joyStick.Horizontal();
        float v = joyStick.Vertical();
#endif
#if UNITY_EDITOR_WIN
#endif
    }

    public void PlayerJoyStickMove()
    {
        playerState = PLAYERSTATE.MOVE;
        float h = joyStick.Horizontal();
        float v = joyStick.Vertical();

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

            playerAgent.Move(dir * moveSpeed * Time.deltaTime);
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
            if (dashBtn.IsCheck)
            {
                moveSpeed = dashSpeed;
            }
            else
            {
                moveSpeed = normalSpeed;
            }
        }
        
        else if (h == 0 && v == 0)
        {
            playerState = PLAYERSTATE.IDLE;
        }
        rBody.velocity = new Vector3(h * moveSpeed, fall, v * moveSpeed);

        //Vector3 moveDiection = new Vector3(h, 0, v).normalized;
        //tr.position += moveDiection * moveSpeed * Time.deltaTime;
    }
    public void PlayerDead()
    {
        Debug.Log("Player二쎌쓬!!!!!!!!!!!!");
        playerState = PLAYERSTATE.NONE;
        //Destroy(gameObject);
        gameObject.SetActive(false);
    }
}
