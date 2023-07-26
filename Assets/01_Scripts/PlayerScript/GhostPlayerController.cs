using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class GhostPlayerController : MonoBehaviour
{
    JoyStick joyStick;
    DashBtn dashBtn;
    NavMeshAgent ghostPlayerAgent;
    CharacterController ghostController;
    Vector3 dir;

    [Header("Move")]
    public float moveSpeed;
    [SerializeField] private float normalSpeed;
    [SerializeField] private float dashSpeed;
    [SerializeField] private float roteSpeed;
    void Start()
    {
        //ghostPlayerAgent = GetComponent<NavMeshAgent>();
        ghostController = GetComponent<CharacterController>();
        joyStick = GameObject.FindGameObjectWithTag("PlayerCanvas").GetComponentInChildren<JoyStick>();
        dashBtn = GameObject.FindGameObjectWithTag("DashBtn").GetComponent<DashBtn>();
    }

    void Update()
    {
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
        //ghostPlayerAgent.speed = moveSpeed;
        //ghostPlayerAgent.Move(ghostPlayerAgent.speed * Time.deltaTime * dir);
        ghostController.Move(moveSpeed * Time.deltaTime * dir);
    }
}
