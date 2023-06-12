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

    // ������Ʈ�� Ŭ���ؼ� �巡�� �ϴ� ���߿� ������ �̺�Ʈ
    // ������ Ŭ���� ������ ���·� ���콺�� ���߸� �̺�Ʈ�� ������ ����    
    public void OnDrag(PointerEventData eventData)
    {
        Vector2 touchPosition = Vector2.zero;
        // ���̽�ƽ�� ��ġ�� ��� �ֵ� ������ ���� �����ϱ� ����
        // touchPositon�� ��ġ���� �̹����� ���� ��ġ�� ��������
        //�󸶳� ������ �ִ����� ���� �ٸ��� ���´�.
        if(RectTransformUtility.ScreenPointToLocalPointInRectangle(
            imgeBackGround.rectTransform,eventData.position,eventData.pressEventCamera,out touchPosition))
        {
            //toucPosition ���� ����ȭ[0~1]
            //touchPosition�� �̹��� ũ��� ����
            touchPosition.x = (touchPosition.x / imgeBackGround.rectTransform.sizeDelta.x);
            touchPosition.y = (touchPosition.y / imgeBackGround.rectTransform.sizeDelta.y);

            //touchPosition ���� ����ȭ [-n ~ n]
            //����(-1), �߽�(0), ������(1)�� �����ϱ� ���� touchPosition.x*2-1
            //�Ʒ�(-1), �߽�(0), ��(1)�� �����ϱ� ���� touchPosition.y*2-1
            //�� ������ Pivot�� ���� �޶�����. (���ϴ� Pivot����)
            touchPosition = new Vector2(touchPosition.x * 2 - 1, touchPosition.y * 2 - 1);

            //touchPosition ���� ����ȭ [-1 ~1 ]
            //���� ���̽�ƽ ��� �̹��� ������ ��ġ�� ������ �Ǹ� -1 ~ 1���� ū ���� ���� �� �ִ�
            //�� �� normailzed�� �̿��� -1 ~ 1������ ������ ����ȭ
            touchPosition = (touchPosition.magnitude > 1) ? touchPosition.normalized : touchPosition;

            
            Debug.Log("��ġ���巡�� :" + eventData);
        }

        Debug.Log("Drag");
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        Debug.Log("End");
    }

}
