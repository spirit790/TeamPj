using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class ModelSimpleMove : MonoBehaviour
{
    public Transform[] rotators;

    public Transform[] jumpers;
    private int[] rnds = new int[10];

    public float jumpFreq = 0.3f;
    public float jumpOffset = 0.5f;
    public float rot = 3f;
    public float rotFreq = 0.3f;


    void Start()
    {
        DOTween.Init();

        for (int i = 0; i < jumpers.Length; i++)
        {
            rnds[i] = Random.Range(1, 10);

            SimpleJumpAciton(jumpers[i], rnds[i]);
        }


        for (int i = 0; i < rotators.Length; i++)
        {
            rnds[i] = Random.Range(1, 5);

            SimpleRotateAction(rotators[i], rnds[i]);
        }
    }

    private void Update()
    {
        
    }

    public void SimpleJumpAciton(Transform actor, int freq)
    {
        Sequence seq = DOTween.Sequence();
        seq.Append(actor.DOMoveY(actor.transform.position.y + jumpOffset, this.jumpFreq))
            .Append(actor.DOMoveY(actor.transform.position.y, this.jumpFreq).OnComplete<Tween>(() => Debug.Log(actor.name + " JUMPs!")))
            .SetDelay(freq).SetLoops(-1);
    }

    public void SimpleRotateAction(Transform actor, int freq)
    {
        Sequence seq = DOTween.Sequence();
        seq.Append(actor.DORotate(actor.transform.rotation.eulerAngles + new Vector3(0, rot, 0), this.rotFreq))
            .Append(actor.DORotate(actor.transform.rotation.eulerAngles, this.rotFreq).OnComplete<Tween>(() => Debug.Log(actor.name + " Rotates")))
            .SetDelay(freq).SetLoops(-1);
    }

}
