using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
public class Level_successfully_disappears_objects : MonoBehaviour

{
    public GameObject repead_banner;
    public GameObject buttonClose;

    private TextMeshPro tempTextMeshPro, TMP_repead, TMP_time;
    private static bool isLimitedTimeRace = false;

    private static bool c; // �O�_���T
    private static int r; // �ĴX��
    private static int HP_left = 5;

    private void Start()
    {
        TMP_repead = repead_banner.GetComponentInChildren<TextMeshPro>();
    }

    private void OnEnable()
    {
        Invoke(nameof(setText), 3f);
    }

    public void ReceiveParameter(int Round, bool Bool)
    {
        // �b�o�̨ϥα����쪺�Ѽƭ�
        r = Round;
        c = Bool;
        //Debug.Log("Received parameter: " + r + "\n c:" + c);
    }

    public void ReceiveParameter2(int Round)
    {
        // �b�o�̨ϥα����쪺�Ѽƭ�
        r = Round;
        c = true;

    }

    void setText()
    {
        repead_banner.SetActive(true); //��ܦ^�_�O

        if (c == true)
        {
            if (r < 7) // 7
            {
                TMP_repead.text = "��" + (r - 2) + "�^�X :\n�бƧ� " + r + "�Ӷ��Ʋ�!";
                //Invoke(nameof(disappear_self), 3f);
                buttonClose.SetActive(true);
                Invoke(nameof(disappear_self), 100f);

            }
            else if (r == 7)
            {
                // ����e��
                buttonClose.SetActive(true);
                Invoke(nameof(disappear_self), 100f);

            }
        }
        else
        {
            // ���~����
            if (isLimitedTimeRace == false)
            {
                // �ͩR��-1
                --HP_left;
            }
            buttonClose.SetActive(true);
            Invoke(nameof(disappear_self), 100f);
            //disappear_self();
        }

    }

    void disappear_self()
    {
        gameObject.SetActive(false);
    }

    public void LimitedTimeRace()
    {
        isLimitedTimeRace = true;
    }

    public void Restart()
    {
        HP_left = 5;
        isLimitedTimeRace = false;
    }
    //public void Retime()
    //{
    //    HP_left = 5;
    //}
}
