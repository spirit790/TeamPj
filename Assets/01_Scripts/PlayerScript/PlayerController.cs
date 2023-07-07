using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using Photon.Pun;
using Photon.Realtime;


public class PlayerController : MonoBehaviourPun
{
    JoyStick joyStick;
    DashBtn dashBtn;
    Button attackBtn;
    NavMeshAgent playerAgent;
    Vector3 dir;

    CharacterAnimation anim;

    Coroutine attackCoroutine;

    [Header("Move")]
    public float moveSpeed;
    [SerializeField] private float normalSpeed;
    [SerializeField] private float dashSpeed;
    [SerializeField] private float roteSpeed;

    [Header("Stun")]
    [SerializeField] private float stunTime;
    private bool isStun = false;
    private bool isAttack = false;
    

    private bool isDead = false;
    public bool IsDead
    {
        get { return isDead; }
        set
        {
            isDead = value;
            if (value == true)
            {
                StartCoroutine(PlayerDeadControl());
            }
        }
    }

    public bool isDeadZoneStarted = false;
    // Player ?щ쭩 ?대깽??
    public delegate void PlayerDie(PlayerController player);
    /// <summary>
    /// Player 사망 이벤트로 IsDead 가 true가 되면 호출됩니다. 이벤트 매개변수로 사망한 player 넣어주면 됩니다.
    /// </summary>
    public static event PlayerDie OnPlayerDie;

    private void Awake()
    {
        if (photonView.IsMine)
        {
            playerAgent = GetComponent<NavMeshAgent>();
            joyStick = GameObject.FindGameObjectWithTag("PlayerCanvas").GetComponentInChildren<JoyStick>();
            dashBtn = GameObject.FindGameObjectWithTag("DashBtn").GetComponent<DashBtn>();
            attackBtn = GameObject.FindGameObjectWithTag("AttackBtn").GetComponent<Button>();
            attackBtn.onClick.AddListener(OnClickAtk);
            anim = GetComponent<CharacterAnimation>();
            PlayerAttack.OnAIKill += Stun;
        }
    }

    void Update()
    {
        if (!photonView.IsMine || isDead || isStun || isAttack)
            return;
#if UNITY_ANDROID
        dir = PlayerJoyStickMove();
#endif
#if UNITY_EDITOR_WIN
        dir = PlayerKeyBordMove();
#endif
        MovePlayer(dir);
    }
    public Vector3 PlayerJoyStickMove()
    {
        float h = joyStick.Horizontal();
        float v = joyStick.Vertical();

        return new Vector3(h, 0, v);
    }
    public Vector3 PlayerKeyBordMove()
    {
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        return new Vector3(h, 0, v);
    }

    private void MovePlayer(Vector3 dir)
    {
        if (dir.x == 0 && dir.z == 0)
        {
            moveSpeed = 0;
            dashBtn.IsCheck = false;
        }
        else if (!(dir.x == 0 && dir.z == 0))
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
        playerAgent.speed = moveSpeed;
        playerAgent.Move(playerAgent.speed * Time.deltaTime * dir);
    }
    public void OnDestroy()
    {
        PlayerAttack.OnAIKill -= Stun;
        if (photonView.IsMine)
            OnPlayerDie(this);
    }

    public void PlayerDead()
    {
        if (photonView.IsMine)
            PhotonNetwork.DestroyPlayerObjects(PhotonNetwork.LocalPlayer);
    }

    void OnClickAtk()
    {
        if(photonView.IsMine && attackCoroutine == null && !isStun)
            attackCoroutine = StartCoroutine(Attack());
    }

    IEnumerator PlayerDeadControl()
    {
        float animTime = GetComponent<CharacterAnimation>().SetDeadAnim();
        GetComponentInChildren<BoxCollider>().enabled = false;
        yield return new WaitForSeconds(animTime);
        PlayerDead();
    }

    IEnumerator Attack()
    {
        isAttack = true;
        float[] animTime = anim.SetAttackAnim(isAttack);
        StartCoroutine(AttackMove(animTime[0],animTime[0] + animTime[1]));
        attackBtn.interactable = false;

        yield return new WaitForSeconds(animTime[0]);
        GetComponent<PlayerAttack>().AttackWithAngle();
        yield return new WaitForSeconds(animTime[1]);

        isAttack = false;
        anim.SetAttackAnim(isAttack);
        attackBtn.interactable = true;
        attackCoroutine = null;
    }

    IEnumerator AttackMove(float delayTime , float time)
    {
        float originTime = 0;
        float moveSpeed = 0;
        float moveUpRatio = 0.4f;
        float moveDownRatio = 0.15f;
        float targetSpeed = 4f;
        Vector3 dir = this.dir;

        while(time >= originTime)
        {
            originTime += Time.deltaTime;
            playerAgent.Move(moveSpeed * Time.deltaTime * dir);

            if (originTime < delayTime)
            {
                if (targetSpeed >= moveSpeed)
                    moveSpeed += moveUpRatio;
                else
                    moveSpeed = targetSpeed;
            }
            else
                moveSpeed -= moveDownRatio;

            if (isStun || moveSpeed <= 0)
                break;
            yield return null;
        }
    }

    IEnumerator StunControl()
    {
        isStun = true;
        StartCoroutine(anim.SetStunAnim(stunTime));
        yield return new WaitForSeconds(stunTime);
        isStun = false;
    }

    void Stun()
    {
        StartCoroutine(StunControl());
    }
}
