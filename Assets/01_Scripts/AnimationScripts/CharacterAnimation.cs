using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class CharacterAnimation : MonoBehaviour
{
    Animator characterAnim;
    NavMeshAgent characterAgent;

    public float speed;
    public float speedRatio = 0.1f;

    float atk1;
    float atk3;
    float die1;

    private void Start()
    {
        characterAnim = GetComponentInChildren<Animator>();
        characterAgent = GetComponent<NavMeshAgent>();

        if (GetComponent<PlayerController>())
        {
            AnimationClip[] clips = characterAnim.runtimeAnimatorController.animationClips;
            foreach (AnimationClip clip in clips)
            {
                switch (clip.name)
                {
                    case "ATK1":
                        atk1 = clip.length;
                        break;
                    case "ATK3":
                        atk3 = clip.length;
                        break;
                    case "Die1":
                        die1 = clip.length;
                        break;
                    default:
                        break;
                }
            }
        }
    }
    private void Update()
    {
        if(characterAgent.speed >= speed)
        {
            speed += speedRatio;
            characterAnim.SetFloat("Move", speed);
        }
        else if(speed >= 0)
        {
            speed -= speedRatio;
            characterAnim.SetFloat("Move", speed);
        }
    }

    public void SetStunAnim(bool isStun)
    {
        characterAnim.SetBool("Stun", isStun);
    }

    public float[] SetAttackAnim(bool isAttack)
    {
        float attackCoin = Random.Range(0, 1f);
        characterAnim.SetFloat("AttackCoin", attackCoin);
        characterAnim.SetBool("Attack", isAttack);
        float[] times = new float[2];
        if (attackCoin > 0.5f)
        {
            times[0] = 0.208f;
            times[1] = atk1 - times[0];
            return times;
        }
        else
        {
            times[0] = 0.5f;
            times[1] = atk3 - times[0];
            return times;
        }
    }
    public float SetDeadAnim()
    {
        characterAgent.speed = 0;
        characterAnim.SetTrigger("Dead");
        GetComponentInChildren<BoxCollider>().enabled = false;

        return die1;
    }
}
