using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceOff : MonoBehaviour
{
    public Material[] faces;

    public Transform faceLocate;

    private float curTime;
    public float coolTime;


    void Update()
    {
        curTime += Time.deltaTime;

        if(curTime >= coolTime)
        {
            FaceChanger();
            curTime = 0;
        }
    }

    public void FaceChanger()
    {
        int rnd = Random.Range(0, faces.Length);
        faceLocate.GetComponent<SkinnedMeshRenderer>().material = faces[rnd];
    }
}
