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

        //GetHashCode()�� �ϸ� string Ÿ���� seed ���� ���ڸ� �̾Ƴ��µ� ������ ���ڶ� prng �μ� ��ġ�� �ִµ�, �ڼ��ϰԴ� �� �˾ƺ����ҵ�.
        //prng�� pseudoRandomNumberGenerator �� �����ε�, ��ǻ�ʹ� ������ �������� ���ؼ� �Ϲ������� ������ ���ؼ� seed�� �ʿ��ϴ�.
        //�̶� �� ������ ���� seed�� �����ϰ� �������ִ°� �ʿ��ѵ�, �Ϲ������� prng ��� �θ��µ��ϴ�.
        System.Random prng = new System.Random(seed.GetHashCode());

        for (int x = 0; x < width; x++)
        {
            for (int y = 0; y < height; y++)
            {
                //�Ʒ� ���ǹ��� �׸��� �׷������� �ؼ� ���ظ� �ؾ߰ڴ�... �Ƹ��� ����� 3*3������ 1���� �־��ִ� �� �ϴ�.
                if (x == 0 || x == width - 1 || y == 0 || y == height - 1)
                {
                    map[x, y] = 1;
                }
                else
                {
                    //�����ۼ�Ʈ���� ������ 1�� ��ȯ�ϴµ�, �̴� 1���� �ǹ��ϰ� 0�� �� ������ �ǹ��Ѵ�.
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
                //�̿��� Ÿ���� 4�� �ʰ��� �ڽŵ� ���̵ȴ�..
                if (neighbourWallTiels > 4)
                {
                    map[x, y] = 1;
                }
                //�̿��� Ÿ���� 4�� �̸��̸� �ո� �����̵ȴ�..
                //�� �̿��� Ÿ���� �������� ���� ���������� ���̵ǰ�, �������� ���� ���������� ������� �Ǵ°�.
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
        //�Ʒ� 2�� for���� gridX�� �ָ� 3*3�� �ִ� �̿��� ���� �����´�.
        for (int neighbourX = gridX - 1; neighbourX <= gridX + 1; neighbourX++)
        {
            for (int neighbourY = gridY - 1; neighbourY <= gridY + 1; neighbourY++)
            {
                //�Ʒ� �������� ���湮�ε�. ���μ��ΰ� �̳����� �̿����� ����ϱ����� ���ǹ�
                if (neighbourX >= 0 && neighbourX < width && neighbourY >= 0 && neighbourY < height)
                {
                    //�̿��� ���� �������� ���� �ڱ��ڽ��� ���� �����Ѵ�
                    //�ڱ� �ڽ��� ���� �̿��� 8���� Ÿ�Ͽ��� ���� ������ ī��Ʈ�մϴ�
                    if (neighbourX != gridX || neighbourY != gridY)
                    {
                        wallCount += map[neighbourX, neighbourY];
                    }
                }
                else
                {
                    //�̿����� ����Ҷ� width, height���� �������� �ʾ����Ƿ� �׵θ��� ��� ������ �����Ǹ� ī��Ʈ�ȴ�;
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
