using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class UI_Loading : MonoBehaviour
{
    Text txt;

    public string flavorText;

    IEnumerator Start()
    {
        txt = GetComponent<Text>();
        txt.DOText(flavorText, 3f);
        yield return new WaitForSeconds(3f);
        StartCoroutine(txtTween(txt));
    }

    IEnumerator txtTween(Text targetTxt)
    {
        yield return new WaitForSeconds(0.5f);

        targetTxt.text += ".";

        yield return new WaitForSeconds(0.5f);

        targetTxt.text += ".";
        yield return new WaitForSeconds(0.5f);

        targetTxt.text += ".";
        yield return new WaitForSeconds(0.5f);

        targetTxt.text = flavorText;

        StartCoroutine(txtTween(txt));

    }

}
