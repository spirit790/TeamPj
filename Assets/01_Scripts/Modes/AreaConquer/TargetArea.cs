using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetArea : MonoBehaviour
{
    public bool isOwnerStay = false;
    public List<GameObject> stayColliders = new List<GameObject>();
    ModeAreaConquer modeArea;
    void Start()
    {
        modeArea = FindAnyObjectByType<ModeAreaConquer>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            stayColliders.Add(other.gameObject);

            if (!isOwnerStay)
            {
                if (modeArea.AreaOwner == null)
                    modeArea.AreaOwner = other.GetComponentInParent<PlayerController>();
                else if (modeArea.AreaOwner.gameObject != other.gameObject)
                    modeArea.AreaOwner = other.GetComponentInParent<PlayerController>();
            }
        }
    }
    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.CompareTag("Player"))
        {
            foreach (var collider in stayColliders)
            {
                if (collider == modeArea.AreaOwner)
                {
                    isOwnerStay = true;
                    return;
                }                
            }
        }
    }
    private void OnTriggerExit(Collider other)
    {
        stayColliders.Remove(other.gameObject);
        if(other.gameObject == modeArea.AreaOwner)
        {
            isOwnerStay = false;
        }
    }
}
