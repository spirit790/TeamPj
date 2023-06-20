using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerRote : MonoBehaviour
{
    public Transform plTransform;

    public float roteSpeed;

    void Start()
    {
        plTransform = GetComponent<Transform>();
    }


    void Update()
    {
        PlayerRotaition();
    }
    void PlayerRotaition()
    {
        float h = Input.GetAxis("Horizontal");
        float v = Input.GetAxis("Vertical");

        Vector3 dir = new Vector3(h, 0, v);

        if (!(h == 0 && v == 0))
        {
            transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.LookRotation(dir), roteSpeed);
        }
    }
}
