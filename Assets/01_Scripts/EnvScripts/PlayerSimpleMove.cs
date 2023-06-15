using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerSimpleMove : MonoBehaviour
{
    public CharacterController characterCtrl;
    public float moveSpeed = 3f;
    public float rotSpeed = 3f;
    public float rotConst = 0.5f;

    void Start()
    {
        characterCtrl = GetComponent<CharacterController>();
    }

    void Update()
    {
        /*
        float h = rotSpeed * Input.GetAxis("Mouse X");
        float v = rotSpeed * Input.GetAxis("Mouse Y");

        transform.Rotate(0, h, 0);

        if(Input.GetKey(KeyCode.W))
        {
            characterCtrl.SimpleMove(moveSpeed * transform.forward);
        }
        if (Input.GetKey(KeyCode.S))
        {
            characterCtrl.SimpleMove(moveSpeed * -transform.forward);
        }
        if (Input.GetKey(KeyCode.A))
        {
            characterCtrl.SimpleMove(moveSpeed * -transform.right);
        }
        if (Input.GetKey(KeyCode.D))
        {
            characterCtrl.SimpleMove(moveSpeed * transform.right);
        }
        */

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




    }
}
