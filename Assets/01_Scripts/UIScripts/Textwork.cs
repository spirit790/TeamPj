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
        StartCoroutine(KillCountText(5));
    }

    /// <summary>
    /// 
    /// TMP ���� �� ���� ĵ������ �ڽİ�ü�� ����
    /// </summary>
    /// <param name="fontSize"></param>
    /// <param name="alpha"></param>
    /// <returns></returns>
    public TextMeshProUGUI InitText(Color color, int fontSize = 1200, float alpha = 1f)
    {
        GameObject txtObj = new GameObject();
        txtObj.name = "textworks";
        TextMeshProUGUI txt = txtObj.AddComponent<TextMeshProUGUI>();
        txt.gameObject.transform.SetParent(mainCanvas.transform);
        txt.rectTransform.position = originPos;

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
    /// ī��Ʈ �ٿ� �� ��ŸƮ �ؽ�Ʈ
    /// ��� ���� �޾ƿ� �� ������ �� �ְ�
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
    /// ���� �ο� �� ������
    /// </summary>
    /// <param name="killNum"></param>
    /// <returns></returns>
    public IEnumerator KillCountText(int killNum, int posOffset = 300, float fadeIn = 0.6f, float fadeOut = 0.2f)
    {
        TextMeshProUGUI txt = InitText(Color.white, defaultFontSize, 0.0f);

        txt.text = killNum.ToString();

        txt.DOFade(0.5f, fadeIn);

        int rnd = Random.Range(1, 4);
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




}
