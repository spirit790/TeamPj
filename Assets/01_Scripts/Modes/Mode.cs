using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;

public class Mode : MonoBehaviourPunCallbacks
{
    [SerializeField]
    protected GameObject aiPrefab;

    [SerializeField]
    protected GameObject playerPrefab;

    int playerCount;
    int aiRatio;
    int AICount { get { return playerCount * aiRatio; } }

    [Header("�� ������")]
    public float mapWidth;
    public float mapHeight;

    protected Vector3 AISpawnPos { get { return new Vector3(Random.Range(-mapWidth / 2, mapWidth / 2), 0, Random.Range(-mapHeight / 2, mapHeight / 2)); } }

    protected float timeLimit;
    public bool isGameOver = false;

    #region Initailize
    /// <summary>
    /// Mode �ʱ�ȭ �� ���� �Ҵ� �Լ�
    /// </summary>
    /// <param name="playerCount">�÷��̾� ����</param>
    /// <param name="aiRatio">�÷��̾�� AI ����</param>
    /// <param name="timeLimit">���� �ð�</param>
    public virtual void Set(int playerCount, int aiRatio, float timeLimit)
    {
        this.playerCount = playerCount;
        this.aiRatio = aiRatio;
        this.timeLimit = timeLimit;
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
        PhotonNetwork.Instantiate(playerPrefab.name, AISpawnPos + new Vector3(0, 0.5f, 0), Quaternion.identity);
    }

    /// <summary>
    /// AI ����
    /// </summary>
    protected void CreateAI()
    {
        for (int i = 0; i < AICount; i++)
        {
            PhotonNetwork.InstantiateRoomObject(aiPrefab.name, AISpawnPos, Quaternion.identity);
        }
    }
    #endregion

    #region GameControl
    /// <summary>
    /// ���� ���� �� ȣ��� �Լ�
    /// </summary>
    public virtual void GameStart()
    {
        StartCoroutine(GamePlaying());
    }
    /// <summary>
    /// ���ΰ��� ���۽� ȣ��
    /// </summary>
    /// <returns></returns>
    protected IEnumerator GamePlaying()
    {
        CreatePlayer();
        CreateAI();
        yield return new WaitForSeconds(5f);

        while (!isGameOver)
        {

            GameOverControl();

            yield return null;
        }

        yield return null;

        if (isGameOver)
            GameOver();
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
    #endregion
}
