using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSimpleMove : MonoBehaviour
{
    public CharacterController characterCtrl;
    public float moveSpeed = 3f;
    public float rotSpeed = 3f;
    public float rotConst = 0.5f;

    public Animator playerAnim;

    void Start()
    {
        characterCtrl = GetComponent<CharacterController>();
    }

    void Update()
    {
        /*
        float h = rotSpeed * Input.GetAxis("Mouse X");
        float v = rotSpeed * Input.GetAxis("Mouse Y");
        */

#if UNITY_ANDROID

#endif

#if UNITY_STANDALONE_WIN || UNITY_EDITOR_WIN
        if (Input.GetKey(KeyCode.W))
        {
            characterCtrl.SimpleMove(moveSpeed * transform.forward);
            characterCtrl.transform.rotation = Quaternion.Slerp(characterCtrl.transform.rotation, Quaternion.Euler(0, 0, 0), rotConst);
        }
        if (Input.GetKey(KeyCode.S))
        {
            characterCtrl.SimpleMove(moveSpeed * transform.forward);
            characterCtrl.transform.rotation = Quaternion.Slerp(characterCtrl.transform.rotation, Quaternion.Euler(0, 180, 0), rotConst);
        }
        if (Input.GetKey(KeyCode.A))
        {
            characterCtrl.SimpleMove(moveSpeed * transform.forward);
            characterCtrl.transform.rotation = Quaternion.Slerp(characterCtrl.transform.rotation, Quaternion.Euler(0, -90, 0), rotConst);
        }
        if (Input.GetKey(KeyCode.D))
        {
            characterCtrl.SimpleMove(moveSpeed * transform.forward);
            characterCtrl.transform.rotation = Quaternion.Slerp(characterCtrl.transform.rotation, Quaternion.Euler(0, 90, 0), rotConst);
        }

        if (playerAnim != null)
        {
            if (Input.GetKeyDown(KeyCode.KeypadEnter))
            {
                float rnd = Random.Range(0, 100);

                playerAnim.SetFloat("AtkCoin", rnd/100);
                playerAnim.SetBool("Attack", true);
            }
            else if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.A) || Input.GetKey(KeyCode.S) || Input.GetKey(KeyCode.D))
            {
                playerAnim.SetInteger("PlayerMotion", 1);
                playerAnim.SetBool("Attack", false);

            }
            else
            {
                playerAnim.SetInteger("PlayerMotion", 0);
                playerAnim.SetBool("Attack", false);

            }




        }
#endif





    }
}
