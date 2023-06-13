using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AreaIndicator : MonoBehaviour
{
    public Transform area;
    public float displayDistance = 5f;
    public Player player;

    void Start()
    {
            
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log(Vector3.Distance(area.position, transform.position));
        if (Vector3.Distance(area.position, transform.position) > displayDistance)
        {
            float angle = Vector3.Dot(player.transform.forward, area.forward);
            //float angle = Vector3.Dot(gameObject.transform.forward, area.forward);
            Debug.Log(angle);
            if (angle <0.5)
            {
                gameObject.SetActive(true);
            }
            else
                gameObject.SetActive(false);
        }
        else
        {
            gameObject.SetActive(false);
        }

        if (gameObject.activeSelf)
            gameObject.transform.LookAt(area);

    }
}
