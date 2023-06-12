using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class JoyStick : MonoBehaviour,IBeginDragHandler,IDragHandler,IEndDragHandler
{
    Image imgeBackGround;

    private void Awake()
    {
        imgeBackGround = GetComponent<Image>();
    }

    public void OnBeginDrag(PointerEventData eventData)
    {
        Debug.Log("Begin");
    }

    // 오브젝트를 클릭해서 드래그 하는 도중에 들어오는 이벤트
    // 하지만 클릭을 유지한 상태로 마우스를 멈추면 이벤트가 들어오지 않음    
    public void OnDrag(PointerEventData eventData)
    {
        Vector2 touchPosition = Vector2.zero;
        // 조이스틱의 위치가 어디에 있든 동일한 값을 연산하기 위해
        // touchPositon의 위치값은 이미지의 현재 위치를 기준으로
        //얼마나 떨어져 있는지에 따라 다르게 나온다.
        if(RectTransformUtility.ScreenPointToLocalPointInRectangle(
            imgeBackGround.rectTransform,eventData.position,eventData.pressEventCamera,out touchPosition))
        {
            //toucPosition 값의 정규화[0~1]
            //touchPosition을 이미지 크기로 나눔
            touchPosition.x = (touchPosition.x / imgeBackGround.rectTransform.sizeDelta.x);
            touchPosition.y = (touchPosition.y / imgeBackGround.rectTransform.sizeDelta.y);

            //touchPosition 값의 정규화 [-n ~ n]
            //왼쪽(-1), 중심(0), 오른쪽(1)로 변경하기 위해 touchPosition.x*2-1
            //아래(-1), 중심(0), 위(1)로 변경하기 위해 touchPosition.y*2-1
            //이 수식은 Pivot에 따라 달라진다. (좌하단 Pivot기준)
            touchPosition = new Vector2(touchPosition.x * 2 - 1, touchPosition.y * 2 - 1);

            //touchPosition 값의 정규화 [-1 ~1 ]
            //가상 조이스틱 배경 이미지 밖으로 터치가 나가게 되면 -1 ~ 1보다 큰 값이 나올 수 있다
            //이 때 normailzed를 이용해 -1 ~ 1사이의 값으로 정규화
            touchPosition = (touchPosition.magnitude > 1) ? touchPosition.normalized : touchPosition;

            
            Debug.Log("터치엔드래그 :" + eventData);
        }

        Debug.Log("Drag");
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        Debug.Log("End");
    }

}
