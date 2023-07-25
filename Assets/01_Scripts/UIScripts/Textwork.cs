using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;
using DG.Tweening;

public class Textwork : MonoBehaviour
{
    /*
    private static Textwork instance = null;

    void Awake()
    {
        if (null == instance)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }
    */

    public TMP_FontAsset font;
    public Canvas mainCanvas;
    [Range(1, 2000)]
    public int defaultFontSize = 1200;
    private Vector3 originPos;
    [Range(0.3f, 1f)]
    public float linearFadeInTime = 0.4f;
    [Range(0.1f, 0.3f)]
    public float linearFadeOutTime = 0.3f;

    public Shader fontShader;

    [Header("Test")]
    public int testKillCnt = 7;
    public Button sqBtn;
    
    private int TestKillCnt
    {
        get
        {
            return testKillCnt;
        }
        set
        {
            if (testKillCnt > 1) testKillCnt = value;
            else testKillCnt = 7;
        }
    }

    void Start()
    {

        DOTween.Init();

        //mainCanvas = GameObject.Find("Canvas").GetComponent<Canvas>();
        //sqBtn.onClick.AddListener(OnClickCountDown);
        //sqBtn.onClick.AddListener(OnClickSceneCall);
    }

    //Test Buttons
    public void OnClickCountDown()
    {
        StartCoroutine(StartCountDown(5, 1));
    }
    public void OnClickKillCount()
    {
        StartCoroutine(RemainsCountText(TestKillCnt--));
    }
    public void OnClickGameWin()
    {
        int mode = Random.Range(1, 4);
        StartCoroutine(GameWinText(mode));
    }
    public void OnClickSceneCall()
    {
        int mode = 1;
        StartCoroutine(SceneCall(mode));
    }
    public void OnClickDiedCall()
    {
        TextMeshProUGUI txt = InitText(Color.white, 1200, 0.4f);

        StartCoroutine(LinearTextwork(txt, "COPYCAT", 0.8f, 1, 3, 0, 0.8f, 0.4f));
    }

    /// <summary>
    /// 
    /// TMP 생성 후 메인 캔버스에 자식객체로 지정
    /// </summary>
    /// <param name="fontSize"></param>
    /// <param name="alpha"></param>
    public TextMeshProUGUI InitText(Color color, int fontSize = 1200, float alpha = 1f, float posDivideX = 1, float posDivideY = 1)
    {
        originPos = new Vector3(Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2);

        GameObject txtObj = new GameObject();
        txtObj.name = "textworks";
        TextMeshProUGUI txt = txtObj.AddComponent<TextMeshProUGUI>();
        txt.gameObject.transform.SetParent(mainCanvas.transform);
        //txt.material.shader = fontShader;

        if (posDivideX <= 0 || posDivideY <= 0) posDivideX = posDivideY = 1;
        txt.rectTransform.position = new Vector3(originPos.x / posDivideX, originPos.y / posDivideY);

        if (fontSize < 0) fontSize = 0; txt.fontSize = (int)fontSize;
        if (Mathf.Abs(alpha) > 1) alpha = Mathf.Round(alpha);

        txt.color = color;
        txt.alpha = alpha;
        txt.alignment = TextAlignmentOptions.Center;
        txt.alignment = TextAlignmentOptions.Midline;
        txt.enableWordWrapping = false;

        return txt;
    }

    /// <summary>
    /// 4방향 텍스트 무브
    /// </summary>
    /// <param name="txt">움직일 텍스트(TMP)</param>
    /// <param name="textString"></param>
    /// <param name="dir">1 = rightward, 2 = leftward, 3 = upward, 4 = downward</param>
    /// <param name="fontSizeRatio">폰트 사이즈와 반비례</param>
    /// <param name="posOffset">움직임 시작위치 조정</param>
    /// <param name="fadeIn"></param>
    /// <param name="fadeOut"></param>
    /// <returns></returns>
    public IEnumerator LinearTextwork(TextMeshProUGUI txt, string textString, float startAlpha = 1, int dir = 1, int fontSizeRatio = 3, float posOffset = 0f, float fadeIn = 0.4f, float fadeOut = 0.3f)
    {
        if (dir < 1 || dir > 4) yield break;
       
        txt.text = textString;
        //txt.font = fonts[0];
        if(fontSizeRatio > 0) txt.fontSize = (int)txt.fontSize / fontSizeRatio;

        switch (dir)
        {
            case 1:
                txt.rectTransform.position = new Vector3(this.originPos.x * 2 / 3 + posOffset, this.originPos.y, 0);

                txt.rectTransform.DOMoveX(this.originPos.x, fadeIn);
                txt.DOFade(startAlpha, fadeIn);
                yield return new WaitForSeconds(fadeIn);

                txt.rectTransform.DOMoveX(this.originPos.x * 4 / 3 + posOffset, fadeOut);

                break;
            case 2:
                txt.rectTransform.position = new Vector3(this.originPos.x * 4 / 3 + posOffset, this.originPos.y, 0);

                txt.rectTransform.DOMoveX(this.originPos.x, fadeIn);
                txt.DOFade(startAlpha, fadeIn);
                yield return new WaitForSeconds(fadeIn);

                txt.rectTransform.DOMoveX(this.originPos.x * 2 / 3 + posOffset, fadeOut);

                break;
            case 3:
                txt.rectTransform.position = new Vector3(this.originPos.x, this.originPos.y * 2 / 3 + posOffset, 0);

                txt.rectTransform.DOMoveY(this.originPos.y, fadeIn);
                txt.DOFade(startAlpha, fadeIn);
                yield return new WaitForSeconds(fadeIn);

                txt.rectTransform.DOMoveY(this.originPos.y * 4 / 3 + posOffset, fadeOut);

                break;
            case 4:
                txt.rectTransform.position = new Vector3(this.originPos.x, this.originPos.y * 4 / 3 + posOffset, 0);

                txt.rectTransform.DOMoveY(this.originPos.y, fadeIn);
                txt.DOFade(startAlpha, fadeIn);
                yield return new WaitForSeconds(fadeIn);

                txt.rectTransform.DOMoveY(this.originPos.y * 2 / 3 + posOffset, fadeOut);

                break;
            default:
                break;
        }


        txt.DOFade(0, fadeOut);
        yield return new WaitForSeconds(fadeOut);

    }

    /// <summary>
    /// 게임 시작시 신 콜
    /// 예시 텍스트는 추후 데이터화
    /// </summary>
    public IEnumerator SceneCall(int mode, int posOffset = 300, float fadeIn = 0.9f, float fadeOut = 0.1f)
    {
        if (mode < 1 || mode > 3) yield break;

        TextMeshProUGUI[] txts = new TextMeshProUGUI[3];

        switch (mode)
        {
            case 1:


                break;

            case 2:
                txts[0].text = "";

                break;

            case 3:
                txts[0].text = "";

                break;

            default:
                break;
        }

        yield return new WaitForSeconds(fadeIn);


        yield return new WaitForSeconds(fadeOut);

        for (int i = 0; i < txts.Length; i++)
        {
            Destroy(txts[i].gameObject);
        }
    }

    /// <summary>
    /// 카운트 다운 후 스타트 텍스트
    /// 모드 정보 받아온 후 수정할 수 있게
    /// </summary>
    /// <param name="count"></param>
    /// <param name="delay"></param>
    /// <returns></returns>
    public IEnumerator StartCountDown(int count = 3, int delay = 1, int posOffset = 300, float fadeIn = 0.6f, float fadeOut = 0.2f)
    {
        TextMeshProUGUI txt = InitText(Color.white, defaultFontSize, 0.5f);

        txt.text = count.ToString();

        yield return new WaitForSeconds(delay);

        for (int i = 0; i <= count + 1; i++)
        {
            txt.text = (--count).ToString();

            yield return new WaitForSeconds(delay);
        }

        //txt.DOCounter(count, 1, delay * count);

        yield return StartCoroutine(LinearTextwork(txt, "START!", 0.5f, 1, 1));

        Destroy(txt.gameObject);
    }

    /// <summary>
    /// 
    /// 남은 인원 몇 명인지
    /// </summary>
    /// <param name="remainsNum"></param>
    /// <returns></returns>
    public IEnumerator RemainsCountText(int remainsNum, float alpha = 0.8f, float fadeIn = 0.8f, float fadeOut = 0.3f)
    {
        if (remainsNum <= 0) yield break;

        TextMeshProUGUI txt = InitText(Color.white, defaultFontSize, 0.0f);

        txt.text = remainsNum.ToString();

        txt.DOFade(alpha, fadeIn);

        int rnd = Random.Range(1, 5);

        yield return StartCoroutine(LinearTextwork(txt, remainsNum.ToString(), 0.8f, rnd, 1));

        Destroy(txt.gameObject);
    }

    /// <summary>
    /// 
    /// 모드에 따라 게임오버 텍스트 변경
    /// </summary>
    /// <param name="mode"></param>
    /// <returns></returns>
    public IEnumerator GameWinText(int mode, int posOffset = 300, float fadeIn = 3f, float fadeOut = 1f)
    {
        if (mode < 0 || mode >= 4) yield break;

        TextMeshProUGUI txt = InitText(Color.white, defaultFontSize, 0.5f);
        txt.fontSize /= 4;

        switch (mode)
        {
            case 1:
                txt.text = "THE LAST\nONE\nSTANDING(example)";
                break;

            case 2:
                txt.text = "CONQUER\n(exmple)";

                break;

            case 3:
                txt.text = "KILLINGSPREE\n(exmple)";

                break;

            default:
                break;
        }
        txt.DOFade(0.5f, fadeIn / 3);

        yield return new WaitForSeconds(fadeIn);

        txt.DOFade(0, fadeOut);
        yield return new WaitForSeconds(fadeOut);

        Destroy(txt.gameObject);
    }

}
