using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AiAotoMove : MonoBehaviour
{

    public enum AISTATE{ IDLE,MOVE,RUN,DIE, }
    
    AISTATE aiState;
    public Animator aiAnim;
    public float aiSpeed;
    
    public float CurTime;
    public float CooTime;
    float minmumMoveLength;
    float maximumMoveLength;

    void Start()
    {
        aiAnim = GetComponentInChildren<Animator>();
        aiState = AISTATE.IDLE;
    }



    void Update()
    {
        
    }

    /// <summary>
    /// Ai움직임 관련 함수입니다.
    /// </summary>
    public void AiMove()
    {
        switch (aiState)
        {
            case AISTATE.IDLE:
                //aiAnim.SetInteger("AISTATE", (int)aiState);
                CurTime += Time.deltaTime;
                if(CurTime>CooTime)
                {
                    CurTime = 0;
                    int randomNum = Random.Range(1, 101);
                    if (randomNum <= 30)
                    {
                        aiState = AISTATE.IDLE;
                    }
                        

                    else if (randomNum >= 31 && randomNum <= 60)
                    {
                        aiState = AISTATE.MOVE;
                    }
                        

                    else if (randomNum >= 61)
                    {
                        aiState = AISTATE.RUN;
                    }
                        
                }


                break;
            case AISTATE.MOVE:
                //aiAnim.SetInteger("AISTATE", (int)aiState);


                break;
            case AISTATE.RUN:
                //aiAnim.SetInteger("AISTATE", (int)aiState);

                break;
            case AISTATE.DIE:
                //aiAnim.SetInteger("AISTATE", (int)aiState);

                break;
            default:
                break;
        }
    }

}
