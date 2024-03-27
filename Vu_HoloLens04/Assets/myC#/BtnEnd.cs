using UnityEngine;
using TMPro;
using System.Collections.Generic;

public class BtnEnd : MonoBehaviour
{
    public TimingBoard timingBoard;
    public RandomObjectSpawner RandomObjectSpawner;
    public GameObject repead_banner;//�O�l�W����r
    private TextMeshPro TMP_repead;

    private TextMeshPro textMesh;
    private float elapsedTime;
    private bool isChecking = false;
    private static string errorIndexes_text;
    private static int HP_left = 5;
    private static bool isLimitedTimeRace = false;

    private void Start()
    {
        //�O�l����r
        TMP_repead = repead_banner.GetComponentInChildren<TextMeshPro>();

        textMesh = GetComponentInChildren<TextMeshPro>();
        textMesh.text = "�ˬd";
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
        TMP_repead.text = ""; // �M��

        TMP_repead.text += "���פ����T!\n";

        if (errorIndexes_text != null)
        {
            TMP_repead.text += errorIndexes_text + "\n";
        }

        if (isLimitedTimeRace == false)
        {
            TMP_repead.text += "�Ѿl�ͩR: " + HP_left + ", ";
        }

        TMP_repead.text += "�Цb " + (3 - seconds) + " ��᭫��";

        if (seconds == 3) //����3��
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

        repead_banner.SetActive(true); //��ܦ^�_�O�A�i�D�ϥΪ̱ƿ��F
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