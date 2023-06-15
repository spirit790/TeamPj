using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class WallVisualizer_test : MonoBehaviour
{
    [SerializeField]
    private List<Transform> visibleWalls = new List<Transform>();

    public Transform character;
    private Renderer wallRenderer;
    private int detectingLayer = 1 << 9 | 1 << 10;
    private int camToPlayerLayer = 1 << 9 | 1 << 10;
    private int playerToCamLayer = 1 << 9 | 1 << 10;

    //public RaycastHit[] hits;

    private Transform _camHit;
    public Transform CamHit
    {
        get => _camHit;
        set
        {
            if (_camHit == null)
            {
                _camHit = value;
            }

            float curDist = Vector3.Distance(_camHit.position, character.position);
            float newDist = Vector3.Distance(value.position, character.position);
            
            if (curDist != newDist )
            {
                Debug.Log("New wall for cam");





                _camHit = value;
            }

        }

    }

    private Transform _playerHit;
    public Transform PlayerHit
    {
        get => _playerHit;
        set
        {
            if (_playerHit == null)
            {
                _playerHit = value;
            }

            float curDist = Vector3.Distance(_playerHit.position, character.position);
            float newDist = Vector3.Distance(value.position, character.position);

            if (curDist != newDist)
            {
                Debug.Log("New wall for player");
                
                
                
                _playerHit = value;
            }
        }
    }

    void Update()
    {
        DetectingByCam();

    }

    public void DetectingByCam()
    {
        float dist = Vector3.Distance(transform.position, character.position);

        Vector3 dir = (character.position - transform.position).normalized;

        RaycastHit[] hits = Physics.RaycastAll(transform.position, dir, dist, detectingLayer);

        for (int i = 0; i < hits.Length; i++)
        {
            if(hits[i].transform.gameObject.layer == 9)
            {
                WallAlphaChange(hits[i].transform, 0.5f);
                visibleWalls.Add(hits[i].transform);

                hits[i].transform.gameObject.layer = 10;
            }
            else if(hits[i].transform.gameObject.layer == 10)
            {
               if(hits.Length == 1)
                {
                    for (int j = 0; j < visibleWalls.Count - 1; j++)
                    {
                        WallAlphaChange(visibleWalls[j].transform, 1.0f);
                        visibleWalls[j].transform.gameObject.layer = 9;
                        visibleWalls.Remove(visibleWalls[j]);
                    }
                }
            }
        }

        if(hits.Length != 0 && hits[hits.Length - 1].transform.gameObject.layer == 10)
        {
            Debug.Log("In wall");


        }

        if (hits.Length == 0)
        {
            Debug.Log("Out wall");

            for (int i = 0; i < visibleWalls.Count; i++)
            {
                WallAlphaChange(visibleWalls[i].transform, 1.0f);
                visibleWalls[i].transform.gameObject.layer = 9;
                visibleWalls.Remove(visibleWalls[i]);
            }
        }


    }

    private void WallAlphaChange(Transform wall, float alpha)
    {
        wallRenderer = wall.GetComponent<Renderer>();
        // Material의 Alpha를 바꾼다.
        ChangeMatAlpha(wallRenderer, alpha);
    }


    /// <summary>
    /// 메테리얼의 알파값을 수정
    /// </summary>
    /// <param name="renderer">렌더러</param>
    /// <param name="alpha">0~1 알파값</param>
    private void ChangeMatAlpha(Renderer renderer, float alpha)
    {
        Material mat = renderer.material;
        Color matColor = mat.color;
        matColor.a = alpha;
        mat.color = matColor;
    }

}
