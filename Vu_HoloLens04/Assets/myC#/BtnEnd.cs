using UnityEngine;
using TMPro;
using System.Collections.Generic;

public class BtnEnd : MonoBehaviour
{
    public TimingBoard timingBoard;
    public RandomObjectSpawner RandomObjectSpawner;
    public GameObject repead_banner;//板子上的文字
    private TextMeshPro TMP_repead;

    private TextMeshPro textMesh;
    private float elapsedTime;
    private bool isChecking = false;
    private static string errorIndexes_text;
    private static int HP_left = 5;
    private static bool isLimitedTimeRace = false;

    private void Start()
    {
        //板子的文字
        TMP_repead = repead_banner.GetComponentInChildren<TextMeshPro>();

        textMesh = GetComponentInChildren<TextMeshPro>();
        textMesh.text = "檢查";
    }

    void Update()
    {
        if (isChecking)
        {
            elapsedTime += Time.deltaTime;
            CheckTimeText();
        }
    }

    private void CheckTimeText()
    {
        int seconds = Mathf.FloorToInt(elapsedTime % 60f);
        TMP_repead.text = ""; // 清空

        TMP_repead.text += "答案不正確!\n";

        if (errorIndexes_text != null)
        {
            TMP_repead.text += errorIndexes_text + "\n";
        }

        if (isLimitedTimeRace == false)
        {
            TMP_repead.text += "剩餘生命: " + HP_left + ", ";
        }

        TMP_repead.text += "請在 " + (3 - seconds) + " 秒後重試";

        if (seconds == 3) //等待3秒
        {
            timingBoard.StartTiming();
            RandomObjectSpawner.StartTiming();
            //repead_banner.SetActive(false);
            isChecking = false;
        }
    }

    public void Waiting()
    {
        isChecking = true;
        elapsedTime = 0;

        if (isLimitedTimeRace == false)
        {
            --HP_left;
        }

        repead_banner.SetActive(true); //顯示回復板，告訴使用者排錯了
    }

    public void ReceiveParameter(string str)
    {
        errorIndexes_text = str;
    }

    public void OnClick()
    {
        if (timingBoard.IsTiming)
        {
            //textMesh.text = "Continue";
            timingBoard.EndTiming();
            RandomObjectSpawner.EndTiming();
        }
    }

    public void LimitedTimeRace()
    {
        isLimitedTimeRace = true;
    }

    public void Restart()
    {
        errorIndexes_text = "";
        HP_left = 5;
        isLimitedTimeRace = false;
    }
    //public void Retime()
    //{
    //    isChecking = false;
    //    elapsedTime = 0;

    //    errorIndexes_text = "";
    //    HP_left = 5;
    //}
}