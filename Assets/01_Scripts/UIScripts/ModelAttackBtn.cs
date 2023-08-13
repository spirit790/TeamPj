using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ModelAttackBtn : MonoBehaviour
{
    public Animator[] anim;

    public ModelChanger mC;

    public void OnClickAttack()
    {
        StopAllCoroutines();
        StartCoroutine(ModelAttack());
    }

    IEnumerator ModelAttack()
    {
        int rnd = Random.Range(0, 3);
        anim[mC.CharacterIdx].SetInteger("AttackCoin", rnd);
        anim[mC.CharacterIdx].SetBool("Attack", true);

        yield return new WaitForSeconds(0.5f);

        anim[mC.CharacterIdx].SetBool("Attack", false);
    }

}
