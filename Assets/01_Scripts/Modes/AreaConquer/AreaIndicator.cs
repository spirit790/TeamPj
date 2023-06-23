using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AreaIndicator : MonoBehaviour
{
    public Transform area;
    public float displayDistance = 5f;
    public PlayerController player;

    void Start()
    {
            
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 v = area.position - player.transform.position;
        float angle = Mathf.Atan2(v.x, v.y) * Mathf.Rad2Deg;
        Debug.Log(angle);
    }
}
