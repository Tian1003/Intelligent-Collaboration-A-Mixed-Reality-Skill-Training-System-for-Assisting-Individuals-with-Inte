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

    private static bool c; // 是否正確
    private static int r; // 第幾關
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
        // 在這裡使用接收到的參數值
        r = Round;
        c = Bool;
        //Debug.Log("Received parameter: " + r + "\n c:" + c);
    }

    public void ReceiveParameter2(int Round)
    {
        // 在這裡使用接收到的參數值
        r = Round;
        c = true;

    }

    void setText()
    {
        repead_banner.SetActive(true); //顯示回復板

        if (c == true)
        {
            if (r < 7) // 7
            {
                TMP_repead.text = "第" + (r - 2) + "回合 :\n請排序 " + r + "個飲料盒!";
                //Invoke(nameof(disappear_self), 3f);
                buttonClose.SetActive(true);
                Invoke(nameof(disappear_self), 100f);

            }
            else if (r == 7)
            {
                // 結算畫面
                buttonClose.SetActive(true);
                Invoke(nameof(disappear_self), 100f);

            }
        }
        else
        {
            // 錯誤的話
            if (isLimitedTimeRace == false)
            {
                // 生命值-1
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
