using UnityEngine;
using TMPro;
using System.Collections.Generic;

public class TestModeBtnEnd : MonoBehaviour
{
    public TimingBoard timingBoard;
    public TestModeRandomObjectSpawner TestModeRandomObjectSpawner;
    public GameObject repead_banner;//板子上的文字
    private TextMeshPro TMP_repead;

    private TextMeshPro textMesh;
    private float elapsedTime;
    private bool isChecking = false;
    private static string errorIndexes_text;

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

        if (errorIndexes_text != null)
        {
            TMP_repead.text += errorIndexes_text + "\n";
        }
        else
        {
            TMP_repead.text += "答案不正確!\n";
        }

        TMP_repead.text += "請在 " + (3 - seconds) + " 秒後重試";

        if (seconds == 3) //等待3秒
        {
            timingBoard.StartTiming();
            TestModeRandomObjectSpawner.StartTiming();
            //repead_banner.SetActive(false);
            isChecking = false;
        }
    }

    public void Waiting()
    {
        isChecking = true;
        elapsedTime = 0;

        repead_banner.SetActive(true);
    }

    public void ReceiveParameter(string str)
    {
        errorIndexes_text = str;
    }

    public void OnClick()
    {
        if (timingBoard.IsTiming)
        {
            timingBoard.EndTiming();
            TestModeRandomObjectSpawner.EndTiming();
        }
    }

    public void Restart()
    {
        errorIndexes_text = "";
        Debug.Log("限時賽被我關了");
    }
}