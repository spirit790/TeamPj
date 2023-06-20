using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using DG.Tweening;

public class Textwork : MonoBehaviour
{
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

    public TMP_FontAsset[] fonts;
    public Canvas mainCanvas;
    [Range(1, 2000)]
    public int defaultFontSize = 1200;
    private Vector3 originPos;
    public int testKillCnt = 7;
    
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
        originPos = new Vector3(Camera.main.pixelWidth / 2, Camera.main.pixelHeight / 2);

        DOTween.Init();
    }

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

    /// <summary>
    /// 
    /// TMP 생성 후 메인 캔버스에 자식객체로 지정
    /// </summary>
    /// <param name="fontSize"></param>
    /// <param name="alpha"></param>
    public TextMeshProUGUI InitText(Color color, int fontSize = 1200, float alpha = 1f, float posDivideX = 1, float posDivideY = 1)
    {
        GameObject txtObj = new GameObject();
        txtObj.name = "textworks";
        TextMeshProUGUI txt = txtObj.AddComponent<TextMeshProUGUI>();
        txt.gameObject.transform.SetParent(mainCanvas.transform);

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
    /// 게임 시작시 신 콜
    /// 예시 텍스트는 추후 데이터화
    /// </summary>
    public IEnumerator SceneCall(int mode, int posOffset = 300, float fadeIn = 1f, float fadeOut = 0.2f)
    {
        if (mode < 1 || mode > 3) yield break;

        TextMeshProUGUI[] txts = new TextMeshProUGUI[3];

        switch (mode)
        {
            case 1:
                txts[0] = InitText(Color.white, defaultFontSize/4, 0.0f, 1.5f, 0.65f);
                txts[0].text = "'Til";
                txts[0].DOFade(0.5f, fadeIn);
                txts[0].transform.DOMoveX(txts[0].rectTransform.position.x - posOffset / 1.5f, fadeIn);

                yield return new WaitForSeconds(fadeIn/2);

                txts[1] = InitText(Color.white, defaultFontSize / 4, 0.0f, 0.75f, 1);
                txts[1].text = "THE LAST";
                txts[1].DOFade(0.5f, fadeIn);
                txts[1].transform.DOMoveX(txts[1].rectTransform.position.x + posOffset/3f, fadeIn);

                yield return new WaitForSeconds(fadeIn/2);

                txts[2] = InitText(Color.white, defaultFontSize / 4, 0.0f, 1.3f, 2f);
                txts[2].text = "STANDING";
                txts[2].DOFade(0.5f, fadeIn);
                txts[2].transform.DOMoveX(txts[2].rectTransform.position.x - posOffset / 2f, fadeIn);

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

        txts[0].transform.DOMoveY(2f * (txts[0].rectTransform.position.x + posOffset), fadeOut);
        txts[1].transform.DOMoveX(2f * (txts[1].rectTransform.position.x + posOffset), fadeOut);
        txts[2].transform.DOMoveY(-2f*(txts[2].rectTransform.position.x - posOffset), fadeOut);
        txts[0].DOFade(0f, fadeOut);
        txts[1].DOFade(0f, fadeOut);
        txts[2].DOFade(0f, fadeOut);

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
    public IEnumerator StartCountDown(int count = 3, int delay = 1, int posOffset = 300, string textString = "START!", float fadeIn = 0.6f, float fadeOut = 0.2f)
    {
        TextMeshProUGUI txt = InitText(Color.white, defaultFontSize, 0.5f);

        txt.text = count.ToString();

        yield return new WaitForSeconds(delay);

        for (int i = 0; i <= count + 1; i++)
        {
            txt.text = (--count).ToString();
            
            yield return new WaitForSeconds(delay);
        }

        txt.text = textString;
        //txt.font = fonts[0];
        txt.fontSize = (int)txt.fontSize / 3;

        txt.rectTransform.position = new Vector3(this.originPos.x - posOffset, this.originPos.y, 0);

        txt.rectTransform.DOMoveX(this.originPos.x + posOffset / 3, fadeIn);

        yield return new WaitForSeconds(fadeIn);

        txt.rectTransform.DOMoveX(txt.rectTransform.position.x + 3f * posOffset, fadeOut);
        txt.DOFade(0, fadeOut);
        yield return new WaitForSeconds(fadeOut);

        Destroy(txt.gameObject);
    }

    /// <summary>
    /// 
    /// 남은 인원 몇 명인지
    /// </summary>
    /// <param name="remainsNum"></param>
    /// <returns></returns>
    public IEnumerator RemainsCountText(int remainsNum, int posOffset = 300, float fadeIn = 0.6f, float fadeOut = 0.2f)
    {
        if (remainsNum <= 0) yield break;

        TextMeshProUGUI txt = InitText(Color.white, defaultFontSize, 0.0f);

        txt.text = remainsNum.ToString();

        txt.DOFade(0.5f, fadeIn);

        int rnd = Random.Range(1, 5);
        switch (rnd)
        {
            case 1:
                txt.rectTransform.position = new Vector3(this.originPos.x - 2 * posOffset, this.originPos.y, 0);

                txt.rectTransform.DOMoveX(this.originPos.x + posOffset / 3, fadeIn);

                yield return new WaitForSeconds(fadeIn);

                txt.rectTransform.DOMoveX(txt.rectTransform.position.x + 3f * posOffset, fadeOut);
                break;
            case 2:
                txt.rectTransform.position = new Vector3(this.originPos.x + 2 * posOffset, this.originPos.y, 0);

                txt.rectTransform.DOMoveX(this.originPos.x - posOffset / 3, fadeIn);

                yield return new WaitForSeconds(fadeIn);

                txt.rectTransform.DOMoveX(txt.rectTransform.position.x - 3f * posOffset, fadeOut);
                break;
            case 3:
                txt.rectTransform.position = new Vector3(this.originPos.x, this.originPos.y - 2 * posOffset, 0);

                txt.rectTransform.DOMoveY(this.originPos.y, fadeIn);

                yield return new WaitForSeconds(fadeIn);

                txt.rectTransform.DOMoveY(txt.rectTransform.position.y + 3f * posOffset, fadeOut);
                break;
            case 4:
                txt.rectTransform.position = new Vector3(this.originPos.x, this.originPos.y + 2 * posOffset, 0);

                txt.rectTransform.DOMoveY(this.originPos.y, fadeIn);

                yield return new WaitForSeconds(fadeIn);

                txt.rectTransform.DOMoveY(txt.rectTransform.position.y - 3f * posOffset, fadeOut);
                break;
            default:
                break;
        }

        txt.DOFade(0, fadeOut);
        yield return new WaitForSeconds(fadeOut);

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
