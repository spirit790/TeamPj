using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Netcode;
using UnityEngine.UI;

public class Mode : MonoBehaviour
{
    [SerializeField]
    protected AIPool aiPool;

    [SerializeField]
    GameObject playerPrefab;
    
    [SerializeField]
    protected List<GameObject> playerList = new List<GameObject>();

    int playerCount;
    int aiRatio;
    int AICount { get { return playerCount * aiRatio; } }

    [Header("�� ������")]
    public float mapWidth;
    public float mapHeight;

    protected Vector3 AISpawnPos { get { return new Vector3(Random.Range(-mapWidth / 2, mapWidth / 2), 0, Random.Range(-mapHeight / 2, mapHeight / 2)); } }

    protected float timeLimit;
    public bool isGameOver = false;

    [Header("�׽�Ʈ��")]
    public Text txt;

    /// <summary>
    /// Mode �ʱ�ȭ �� ���� �Ҵ� �Լ�
    /// </summary>
    /// <param name="playerCount">�÷��̾� ����</param>
    /// <param name="aiRatio">�÷��̾�� AI ����</param>
    /// <param name="timeLimit">���� �ð�</param>
    public virtual void Set(int playerCount,int aiRatio, float timeLimit)
    {
        this.playerCount = playerCount;
        this.aiRatio = aiRatio;
        this.timeLimit = timeLimit;
    }

    public virtual void GameStart()
    {
        CreateAI();
        StartCoroutine(GamePlaying());
    }

    /// <summary>
    /// ���ΰ��� ���۽� ȣ��
    /// </summary>
    /// <returns></returns>
    protected IEnumerator GamePlaying()
    {
        while (!isGameOver)
        {
            txt.text = string.Format("{0:0}", timeLimit);

            GameOverControl();

            yield return null;
        }

        yield return null;

        if (isGameOver)
            GameOver();
    }

    /// <summary>
    /// �� ����
    /// </summary>
    protected void CreateMap()
    {

    }

    /// <summary>
    /// �÷��̾� ����
    /// </summary>
    protected void CreatePlayer()
    {
        
    }

    /// <summary>
    /// AI ����
    /// </summary>
    protected void CreateAI()
    {
        for (int i = 0; i < AICount; i++)
        {
           aiPool.Spawn(AISpawnPos);
        }
    }

    /// <summary>
    /// ���ӿ��� ���� ó��
    /// </summary>
    protected virtual void GameOverControl()
    {
        timeLimit -= Time.deltaTime;

        if (timeLimit <= 0)
            isGameOver = true;
    }

    /// <summary>
    /// ���ӿ����� ȣ�� �� ó��
    /// </summary>
    protected virtual void GameOver()
    {
        foreach (var item in GameObject.FindGameObjectsWithTag("AI"))
        {
            item.GetComponent<AIPattern>().enabled = false;
        }
        Debug.Log("��������");
    }

}
