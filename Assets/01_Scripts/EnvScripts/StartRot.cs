using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartRot : MonoBehaviour
{

    void Start()
    {
        int rnd = Random.Range(0, 8) * 45;

        transform.localRotation = Quaternion.Euler(new Vector3(0, rnd, 0));
    }

}
