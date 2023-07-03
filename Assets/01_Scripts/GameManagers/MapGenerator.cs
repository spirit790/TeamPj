using Photon.Pun;
using System.Collections.Generic;
using Unity.AI.Navigation;
using UnityEngine;
using UnityEngine.AI;

public class MapGenerator : MonoBehaviourPunCallbacks
{
    [Header("Chunk")]
    public int chunkX = 4;
    public int chunkZ = 3;
    public int chunkWidth = 9;
    public int chunkHeight = 9; 
    int[,] chunk;
    int rand;
    public Vector3 pos;


    int randomIndex;

    [Header("Area and Zone Pos")]
    public Vector3 areaZonePos;
    public Vector3 mainBuildingPos1;
    public Vector3 mainBuildingPos2;
    public List<Vector3> posList = new List<Vector3>();
    [Header("Road")]
    public int width;
    public int height;

    public int[,] map;
    public string strMapData;
    public string strSendMapData;
    public string seed;
    public GameObject groundPrefab;
    public GameObject roadPrefab;

    [Range(0, 100)]
    public int randomFillPercent;


    [Header("Concepts")]
    public int concept;
    List<List<GameObject>> concepts = new List<List<GameObject>>();
    List<GameObject> obstaclePrefabs;
    public List<GameObject> groundPrefabs;
    public List<GameObject> roadPrefabs;
    public List<GameObject> envPrefabs;
    const int NUMBER_OF_CONCEPTS = 3;

    [Header("JungleObstacles")]
    public List<GameObject> jungleObstacles;

    [Header("SchoolObstacles")]
    public List<GameObject> schoolObstacles;

    [Header("TowerObstacles")]
    public List<GameObject> towerObstacles;

    void Start()
    {
        concepts.Add(jungleObstacles);
        concepts.Add(schoolObstacles);
        concepts.Add(towerObstacles);

        chunk = new int[chunkHeight, chunkWidth];
        concept = int.Parse(PhotonNetwork.CurrentRoom.CustomProperties[GameManager.Instance.KeyMap].ToString());
        obstaclePrefabs = concepts[concept];
        groundPrefab = groundPrefabs[concept];
        roadPrefab = roadPrefabs[concept];
        if (PhotonNetwork.IsMasterClient)
        {
            for (int i = 0; i < chunkZ; i++)
            {
                for (int j = 0; j < chunkX; j++)
                {
                    photonView.RPC(nameof(SendChunkData), RpcTarget.All, obstaclePrefabs.Count, i, j);
                }
            }
        }

        width = chunkX * chunkWidth;
        height = chunkZ * chunkHeight;
        map = new int[width, height];

        GenerateMap();

        mainBuildingPos1 = new Vector3(width / 2f - chunkWidth / 2f, 0, height / 2f);
        mainBuildingPos2 = new Vector3(width / 2f + chunkWidth / 2f, 0, height / 2f);
        MakeRandomZonePos();
        randomIndex = Random.Range(0, posList.Count);
        areaZonePos = posList[randomIndex];
    }
    public void MakeChunk(int structures, int chunkX, int chunkY)
    {
        int count = 0;
        for (int i = 0; i < chunkHeight; i++)
        {
            for (int j = 0; j < chunkWidth; j++)
            {
                int rand = Random.Range(0, 81);
                if(count < structures && rand < structures)
                {
                    GameObject structure = Instantiate(obstaclePrefabs[rand], new Vector3(i + chunkY * chunkWidth, 1, j + chunkX * chunkHeight), transform.rotation);
                    structure.isStatic = true;
                    structure.transform.SetParent(gameObject.transform);
                    count++;
                }
            }
        }
    }

    public void MakeRandomZonePos()
    {
        for (int i = 1; i < chunkX+1; i++)
        {
            for (int j = 1; j < chunkZ+1; j++)
            {
                Vector3 pos = new Vector3( i * chunkWidth - chunkWidth / 2f, 0,j * chunkHeight - chunkHeight / 2f);
                if (pos.x == mainBuildingPos1.x && pos.z == mainBuildingPos1.z)
                    continue;
                else if (pos.x == mainBuildingPos2.x && pos.z == mainBuildingPos2.z)
                    continue;
                else
                    posList.Add(pos);
            }
        }
    }
    private void GenerateMap()
    {
        if (PhotonNetwork.IsMasterClient)
        {
            RandomFillMap();

            for (int i = 0; i < 5; i++)
            {
                SmoothMap();
            }
            ConvertStrMapData();
            photonView.RPC(nameof(SendMapData), RpcTarget.AllBufferedViaServer, strMapData);
        }
    }

    void RandomFillMap()
    {
        seed = Random.Range(0, 999f).ToString();

        //GetHashCode()를 하면 string 타입의 seed 에서 숫자를 뽑아내는데 렌덤한 숫자라 prng 로서 가치가 있는듯, 자세하게는 더 알아봐야할듯.
        //prng는 pseudoRandomNumberGenerator 의 약자인데, 컴퓨터는 난수를 생성하지 못해서 일반적으로 난수를 위해서 seed가 필요하다.
        //이때 이 난수를 위한 seed를 랜덤하게 생성해주는게 필요한데, 일반적으로 prng 라고 부르는듯하다.
        System.Random prng = new System.Random(seed.GetHashCode());

        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                //아래 조건문은 그림을 그려보던가 해서 이해를 해야겠다... 아마도 정가운데 3*3공간에 1값을 넣어주는 듯 하다.
                if (x == 0 || x == width - 1 || y == 0 || y == height - 1)
                {
                    map[x, y] = 1;
                }
                else
                {
                    //랜덤퍼센트보다 낮으면 1을 반환하는데, 이는 1벽을 의미하고 0은 빈 공간을 의미한다.
                    map[x, y] = (prng.Next(0, 100) < randomFillPercent) ? 1 : 0;
                }
            }
        }
    }

    void SmoothMap()
    {
        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                int neighbourWallTiels = GetSurroundingWallCount(x, y);
                //이웃한 타일이 4개 초과면 자신도 벽이된다..
                if (neighbourWallTiels > 4)
                {
                    map[x, y] = 1;
                }
                //이웃한 타일이 4개 미만이면 뚫린 공간이된다..
                //즉 이웃한 타일이 많은쪽은 점점 많은쪽으로 벽이되고, 없는쪽은 점점 없는쪽으로 빈공간이 되는것.
                else if (neighbourWallTiels < 4)
                {
                    map[x, y] = 0;
                }
            }
        }
    }

    int GetSurroundingWallCount(int gridX, int gridY)
    {
        int wallCount = 0;
        //아래 2중 for문은 gridX의 주면 3*3에 있는 이웃의 값을 가져온다.
        for (int neighbourX = gridX - 1; neighbourX <= gridX + 1; neighbourX++)
        {
            for (int neighbourY = gridY - 1; neighbourY <= gridY + 1; neighbourY++)
            {
                //아래 이프문은 예방문인듯. 가로세로값 이내에서 이웃값을 계산하기위한 조건문
                if (neighbourX >= 0 && neighbourX < width && neighbourY >= 0 && neighbourY < height)
                {
                    //이웃의 값만 가져오기 위해 자기자신의 값을 제외한다
                    //자기 자신을 빼고 이웃한 8개의 타일에서 벽의 개수를 카운트합니다
                    if (neighbourX != gridX || neighbourY != gridY)
                    {
                        wallCount += map[neighbourX, neighbourY];
                    }
                }
                else
                {
                    //이웃값을 계산할때 width, height값을 포함하지 않았으므로 테두리는 모두 벽으로 인정되며 카운트된다;
                    wallCount++;
                }
            }
        }
        return wallCount;
    }

    private void DrawMap()
    {
        Instantiate(envPrefabs[concept]);
        string[] mapData = strSendMapData.Split("\n");
        if (mapData != null)
        {
            for (int x = 0; x < width; x++)
            {
                for (int y = 0; y < height; y++)
                {
                    Vector3 pos = new Vector3(x, 0, y);
                    GameObject tile;
                    if (mapData[x][y].ToString() == "1")
                    {
                        tile = Instantiate(groundPrefab, pos, groundPrefab.transform.rotation);
                    }
                    else
                    {
                        tile = Instantiate(roadPrefab, pos, groundPrefab.transform.rotation);
                    }
                    tile.isStatic = true;
                    tile.transform.SetParent(gameObject.transform);
                }
            }
        }
    }

    void ConvertStrMapData()
    {
        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                if (map[x, y] == 1)
                {
                    strMapData += "1";
                }
                else
                {
                    strMapData += "0";
                }
            }
            strMapData += "\n";
        }
    }
    [PunRPC]
    public void SendChunkData(int structures, int chunkX, int chunkY)
    {
        int count = 0;
        for (int i = 0; i < chunkHeight; i++)
        {
            for (int j = 0; j < chunkWidth; j++)
            {
                int random = 0;
                if (PhotonNetwork.IsMasterClient)
                {
                    random = Random.Range(0, 81);
                    photonView.RPC(nameof(SendStructure), RpcTarget.All, random, count, structures, i, j, chunkX, chunkY);
                }
            }
        }
    }

    [PunRPC]
    public void SendStructure(int num, int count, int structures, int i, int j, int chunkX,int chunkY)
    {
        rand = num;
        if (count < structures && rand < structures)
        {
            GameObject structure = Instantiate(obstaclePrefabs[rand], new Vector3(i + chunkY * chunkWidth, 1, j + chunkX * chunkHeight), transform.rotation);
            structure.isStatic = true;
            structure.transform.SetParent(gameObject.transform);
            count++;
        }
        //Debug.Log(num);
    }

    [PunRPC]
    void SendRandomIndex(int n)
    {
        randomIndex = n;
        Debug.Log(randomIndex);
    }

    [PunRPC]
    void SendMapData(string mapData, PhotonMessageInfo message)
    {
        strSendMapData = mapData;
        DrawMap();
        NavMesh.RemoveAllNavMeshData();
        gameObject.GetComponent<NavMeshSurface>().BuildNavMesh();
        photonView.RPC(nameof(SendIsReady), RpcTarget.AllBufferedViaServer);
    }
    [PunRPC]
    void SendIsReady()
    {
        GameManager.Instance.mapGenerateCount++;
    }
}
