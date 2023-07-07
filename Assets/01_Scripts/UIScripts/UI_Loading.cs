using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class UI_Loading : MonoBehaviour
{
    Text txt;

    public string flavorText;
    [Range(1f, 5f)]
    public float waitTime = 3f;

    IEnumerator Start()
    {
        txt = GetComponent<Text>();
        txt.DOText(flavorText, waitTime);
        yield return new WaitForSeconds(waitTime);
        StartCoroutine(txtTween(txt));
    }

    IEnumerator txtTween(Text targetTxt)
    {
        yield return new WaitForSeconds(0.33f);

        targetTxt.text += ".";

        yield return new WaitForSeconds(0.33f);

        targetTxt.text += ".";
        yield return new WaitForSeconds(0.33f);

        targetTxt.text += ".";
        yield return new WaitForSeconds(0.33f);

        targetTxt.text = flavorText;

        StartCoroutine(txtTween(txt));

    }

}
