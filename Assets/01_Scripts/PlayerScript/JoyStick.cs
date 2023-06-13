using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class JoyStick : MonoBehaviour,IPointerDownHandler,IDragHandler,IPointerUpHandler
{
    Image imageBackGround;
    Image imageController;
    Vector2 touchPosition;

    private void Awake()
    {
        imageBackGround = GetComponent<Image>();
        imageController = transform.GetChild(0).GetComponent<Image>();
    }
    /// <summary>
    /// 눌렀을때 확인되는곳
    /// </summary>
    /// <param name="eventData"></param>
    public void OnPointerDown(PointerEventData eventData)
    {
        Debug.Log("Begin");
    }
  /// <summary>
  /// 메인으로 움직이는 함수
  /// </summary>
  /// <param name="eventData"></param>
    public void OnDrag(PointerEventData eventData)
    {
        touchPosition = Vector2.zero;
        if(RectTransformUtility.ScreenPointToLocalPointInRectangle(
            imageBackGround.rectTransform, eventData.position, eventData.pressEventCamera,out touchPosition))
        {
            touchPosition.x = (touchPosition.x / imageBackGround.rectTransform.sizeDelta.x);
            touchPosition.y = (touchPosition.y / imageBackGround.rectTransform.sizeDelta.y);

            touchPosition = new Vector2(touchPosition.x * 2 - 1, touchPosition.y * 2 - 1);

            touchPosition = (touchPosition.magnitude > 1) ? touchPosition.normalized : touchPosition;

            imageController.rectTransform.anchoredPosition = new Vector2(
                touchPosition.x * imageBackGround.rectTransform.sizeDelta.x/2,
                touchPosition.y * imageBackGround.rectTransform.sizeDelta.y/2);
            
        }

        Debug.Log("Drag");
    }
    /// <summary>
    /// 터치를 떼었을때 포지션을 0으로 바꿔주는함수
    /// </summary>
    /// <param name="eventData"></param>
    public void OnPointerUp(PointerEventData eventData)
    {
        imageController.rectTransform.anchoredPosition = new Vector2(0, 0);
        touchPosition = Vector2.zero;
        Debug.Log("End");
    }

    public float Horizontal()
    {
        return touchPosition.x;
    }
    public float Vertical()
    {
        return touchPosition.y;
    }

}
