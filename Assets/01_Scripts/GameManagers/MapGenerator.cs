using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapGenerator : MonoBehaviour
{
    public int width = 9;
    public int height = 9;
    GameObject[] concepts; 
    GameObject[] concept1Items;
    int[,] chunk;
    public GameObject groundPrefab;
    public GameObject[] structurePrefabs;
    void Start()
    {
        chunk = new int[width, height];
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                MakeChunk(4, i, j);
            }
        }
    }

    public void MakeChunk(int structures, int chunkX, int chunkY)
    {
        int count = 0;
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < height; j++)
            {
                //Instantiate(groundPrefab, new Vector3(i + chunkX * width, 0, j + chunkY * 9), transform.rotation);
                int rand = Random.Range(0, 81);
                if(count < structures && rand < structures)
                {
                    Instantiate(structurePrefabs[rand], new Vector3(-18 + 0.5f + i, 1, -18 + 0.5f+ j), transform.rotation);
                    count++;
                }
            }
        }
    }
}
