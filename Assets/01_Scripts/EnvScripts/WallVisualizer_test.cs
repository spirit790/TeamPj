using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WallVisualizer_test : MonoBehaviour
{
    public Transform character;
    Renderer wallRenderer;
    private int layer = 1 << 0 | 1 << 9;

    void Update()
    {
        float dist = Vector3.Distance(transform.position, character.position);

        Vector3 dir = (character.position - transform.position).normalized;

        RaycastHit hit;

        if (Physics.Raycast(transform.position, dir, out hit, dist, layer))
        {
            if (hit.transform != character)
            {
                wallRenderer = hit.transform.GetComponent<Renderer>();

                // Material¿« Alpha∏¶ πŸ≤€¥Ÿ.
                Material mat = wallRenderer.material;
                Color matColor = mat.color;
                matColor.a = 0.5f;
                mat.color = matColor;

                wallRenderer.transform.gameObject.layer = 10;
            }
            else if(wallRenderer != null && hit.transform == character)
            {
                Material mat = wallRenderer.material;
                Color matColor = mat.color;
                matColor.a = 1f;
                mat.color = matColor;

                wallRenderer.transform.gameObject.layer = 9;
            }

        }
    }
}
