using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Unity.Netcode;

public class NetworkManagerUI : MonoBehaviour
{
    public Button btnServer;
    public Button btnHost;
    public Button btnClient;

    private void Awake()
    {
        btnServer.onClick.AddListener(() => NetworkManager.Singleton.StartServer());
        btnHost.onClick.AddListener(() => StartHost());
        btnClient.onClick.AddListener(() => NetworkManager.Singleton.StartClient());
    }

    void StartHost()
    {
        NetworkManager.Singleton.StartHost();
    }
}
