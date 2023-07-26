using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class CharacterAnimation : MonoBehaviour
{
    Animator characterAnim;
    NavMeshAgent characterAgent;

    float speed;
    float speedRatio = 0.2f;

    // 애니메이션 시간 정보
    float atk1;
    float atk2;
    float atk3;
    float die1;

    // 애니메이터 파라미터 이름
    const string PARAM_MOVE = "Move";
    const string PARAM_STUN = "Stun";
    const string PARAM_ATTACK = "Attack";
    const string PARAM_ATTACK_COIN = "AttackCoin";
    const string PARAM_DEAD = "Dead";

    private void Start()
    {
        if(gameObject.CompareTag("Player") || gameObject.CompareTag("AI"))
        {
            characterAgent = GetComponent<NavMeshAgent>();
        }
        characterAnim = GetComponentInChildren<Animator>();

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
                    case "ATK2":
                        atk2 = clip.length;
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
        CharacterAnim();
    }

    void CharacterAnim()
    {
        if (gameObject.CompareTag("Player") || gameObject.CompareTag("AI"))
        {
            if (characterAgent.speed >= speed)
            {
                speed += speedRatio;
                characterAnim.SetFloat(PARAM_MOVE, speed);
            }
            else if (speed >= 0 || characterAgent.speed == 0)
            {
                if (speed < 0) return;
                speed -= speedRatio;
                characterAnim.SetFloat(PARAM_MOVE, speed);
            }
        }
    }


    public IEnumerator SetStunAnim(float time)
    {
        while(time >= 0)
        {
            time -= Time.deltaTime;
            characterAnim.SetFloat(PARAM_STUN, time);
            yield return null;
        }
    }

    public float[] SetAttackAnim(bool isAttack)
    {
        int attackCoin = Random.Range(0, 3);
        characterAnim.SetInteger(PARAM_ATTACK_COIN, attackCoin);
        characterAnim.SetBool(PARAM_ATTACK, isAttack);
        float[] times = new float[2];
        if (attackCoin == 0)
        {
            times[0] = 0.208f;
            times[1] = atk1 - times[0];
        }
        else if(attackCoin == 1)
        {
            times[0] = 0.208f;
            times[1] = atk2 - times[0];
        }
        else if(attackCoin == 2)
        {
            times[0] = 0.5f;
            times[1] = atk3 - times[0];
        }
        return times;
    }
    public float SetDeadAnim()
    {
        characterAgent.speed = 0;
        characterAnim.SetTrigger(PARAM_DEAD);
        GetComponentInChildren<BoxCollider>().enabled = false;

        return die1;
    }
}
