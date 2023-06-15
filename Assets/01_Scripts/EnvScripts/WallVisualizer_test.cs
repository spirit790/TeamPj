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
    private int camToPlayerLayer = 1 << 9 | 1 << 10;
    private int playerToCamLayer = 1 << 9 | 1 << 10;



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

        WallDetectingByCam();
        WallDetectingByPlayer();

    }

    public void WallDetectingByCam()
    {
        float dist = Vector3.Distance(transform.position, character.position);

        Vector3 dir = (character.position - transform.position).normalized;

        RaycastHit hit;

        //cam -> player ray
        if (Physics.Raycast(transform.position, dir, out hit, dist, camToPlayerLayer))
        {
            if (hit.transform.gameObject.layer == 9)
            {
                //Debug.Log("in wall");
                WallAlphaChange(hit.transform, 0.5f);
                visibleWalls.Add(hit.transform);

                hit.transform.gameObject.layer = 10;
            }
            else if (hit.transform.gameObject.layer == 10)
            {
                CamHit = hit.transform;
            }
        }

    }
    public void WallDetectingByPlayer()
    {
        float dist = Vector3.Distance(transform.position, character.position);

        Vector3 dir = (transform.position - character.position).normalized;

        RaycastHit hit;

        //player -> cam ray
        if (Physics.Raycast(character.position, dir, out hit, dist, playerToCamLayer))
        {
            if (hit.transform.gameObject.layer == 9)
            {
                //Debug.Log("in wall");
                WallAlphaChange(hit.transform, 0.5f);
                visibleWalls.Add(hit.transform);

                hit.transform.gameObject.layer = 10;
            }
            else if (hit.transform.gameObject.layer == 10)
            {
                PlayerHit = hit.transform;
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
