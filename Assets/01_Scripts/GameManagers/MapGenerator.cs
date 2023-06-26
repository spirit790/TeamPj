using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using Unity.AI.Navigation;
public class MapGenerator : MonoBehaviour
{
    [Header("Chunk")]
    public int chunkX = 4;
    public int chunkZ = 3;
    public int chunkWidth = 9;
    public int chunkHeight = 9; 
    int[,] chunk;
    public GameObject[] structurePrefabs;

    [Header("Road")]
    public int width;
    public int height; 
    int[,] map;
    public string seed;
    public GameObject groundPrefab;
    public GameObject roadPrefab;

    List<NavMeshSurface> surfaces = new List<NavMeshSurface>();
    [Range(0, 100)]
    public int randomFillPercent;

    GameObject[] concepts; 
    GameObject[] concept1Items;

    void Start()
    {
        chunk = new int[chunkHeight, chunkWidth];
        for (int i = 0; i < chunkZ; i++)
        {
            for (int j = 0; j < chunkX; j++)
            {
                MakeChunk(structurePrefabs.Length, i, j);
            }
        }
        width = chunkX * chunkWidth;
        height = chunkZ * chunkHeight;
        GenerateMap();
        //NavMesh.RemoveAllNavMeshData();

        surfaces[0].BuildNavMesh();
        
    }

    public void MakeChunk(int structures, int chunkX, int chunkY)
    {
        int count = 0;
        for (int i = 0; i < chunkHeight; i++)
        {
            for (int j = 0; j < chunkWidth; j++)
            {
                //Instantiate(groundPrefab, new Vector3(i + chunkX * width, 0, j + chunkY * 9), transform.rotation);
                int rand = Random.Range(0, 81);
                if(count < structures && rand < structures)
                {
                    GameObject structure = Instantiate(structurePrefabs[rand], new Vector3(i + chunkY * chunkWidth, 1, j + chunkX * chunkHeight), transform.rotation);
                    structure.isStatic = true;
                    structure.transform.SetParent(gameObject.transform);
                    count++;
                }
            }
        }
    }

    private void GenerateMap()
    {
        map = new int[width, height];
        RandomFillMap();

        for (int i = 0; i < 5; i++)
        {
            SmoothMap();
        }

        DrawMap();
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
        if (map != null)
        {
            for (int x = 0; x < width; x++)
            {
                for (int y = 0; y < height; y++)
                {
                    //Gizmos.color = (map[x, y] == 1) ? Color.black : Color.white;
                    Vector3 pos = new Vector3(x, 0, y);
                    GameObject tile;
                    //Gizmos.DrawCube(pos, Vector3.one);
                    if (map[x, y] == 1)
                    {
                        tile = Instantiate(groundPrefab, pos, transform.rotation);
                    }
                    else
                    {
                        tile = Instantiate(roadPrefab, pos, transform.rotation);
                    }
                    tile.isStatic = true;
                    tile.transform.SetParent(gameObject.transform);
                    surfaces.Add(tile.GetComponent<NavMeshSurface>());
                }
            }
        }
    }
}