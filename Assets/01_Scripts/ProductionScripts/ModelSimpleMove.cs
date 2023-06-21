using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class ModelSimpleMove : MonoBehaviour
{
    public Transform[] models;

    void Start()
    {
        DOTween.Init();

        for (int i = 0; i < models.Length; i++)
        {
            int rnd = Random.Range(1, 20);

        }
    }

}
