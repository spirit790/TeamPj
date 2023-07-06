using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class BannerAds : MonoBehaviour
{
    [SerializeField]
    private BannerPosition _bannerPosition = BannerPosition.BOTTOM_CENTER;
    private const string surfacingId = "Banner_Android";

    private Coroutine _coroutine;

    void Start()
    {
        Advertisement.Initialize("5337411", false);
    }

    private void OnDestroy()
    {
        if (_coroutine != null)
        {
            StopCoroutine(_coroutine);
        }

        Hide();
    }

    public void Show()
    {
        if (_coroutine != null)
        {
            StopCoroutine(_coroutine);
        }
        _coroutine = StartCoroutine(ShowBannerWhenInitialized());
    }
    public void Hide()
    {
        if (Advertisement.Banner.isLoaded)
        {
            Advertisement.Banner.Hide();
        }
    }
    IEnumerator ShowBannerWhenInitialized()
    {
        WaitForSeconds wait = new WaitForSeconds(0.5f);
        while (!Advertisement.isInitialized)
        {
            yield return wait;
        }
        Advertisement.Banner.SetPosition(_bannerPosition);
        Advertisement.Banner.Show(surfacingId);
    }
}
