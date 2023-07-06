using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelAttackBtn : MonoBehaviour
{
    public Animator[] anim;

    public ModelChanger mC;

    public void OnClickAttack()
    {
       
        Debug.Log("hi");
        StopAllCoroutines();
        StartCoroutine(ModelAttack());
    }

    IEnumerator ModelAttack()
    {
        Debug.Log("bye");

        int rnd = Random.Range(0, 3);
        anim[mC.characterIdx].SetInteger("AttackCoin", rnd);
        anim[mC.characterIdx].SetBool("Attack", true);

        yield return new WaitForSeconds(0.5f);

        anim[mC.characterIdx].SetBool("Attack", false);
    }

}
