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

    [SerializeField] BoxCollider weapon;

    CharacterAnimation anim;

    Coroutine attackCoroutine;

    public float moveSpeed;
    public float normalSpeed;
    public float dashSpeed;
    public float roteSpeed;

    private bool isStun = false;
    private float stunTime = 3f;
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
            Weapon.OnAIKill += Stun;
        }
    }

    void Update()
    {
        if (!photonView.IsMine || IsDead || isStun || isAttack)
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
        }
        else if (!(dir.x == 0 && dir.x == 0))
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
        if(photonView.IsMine && attackCoroutine == null)
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
        weapon.enabled = isAttack;
        float animTime = anim.SetAttackAnim(isAttack);
        attackBtn.interactable = false;
        yield return new WaitForSeconds(animTime);
        isAttack = false;
        weapon.enabled = isAttack;
        anim.SetAttackAnim(isAttack);
        attackBtn.interactable = true;
        attackCoroutine = null;
    }

    IEnumerator StunControl()
    {
        isStun = true;
        anim.SetStunAnim(isStun);
        yield return new WaitForSeconds(stunTime);
        isStun = false;
        anim.SetStunAnim(isStun);
    }

    void Stun()
    {
        StartCoroutine(StunControl());
    }
}
