using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class TimingBoard : MonoBehaviour
{
    private TextMeshPro timeText;
    private float elapsedTime;
    private bool isTiming = false;
    private static bool isLimitedTimeRace = false;

    void Start()
    {
        timeText = GetComponentInChildren<TextMeshPro>();
        if (isLimitedTimeRace == false)
        {
            elapsedTime = 0f;
            timeText.text = "00:00:00";
        }
        else
        {
            elapsedTime = 480f;
            timeText.text = "08:00:00";
        }

    }

    void Update()
    {
        if (isTiming)
        {
            if (isLimitedTimeRace == false)
            {
                elapsedTime += Time.deltaTime;
                UpdateTimeText();
            }
            else
            {
                elapsedTime -= Time.deltaTime;
                UpdateTimeText();
            }
        }
    }

    private void UpdateTimeText()
    {
        int minutes = Mathf.FloorToInt(elapsedTime / 60f);
        int seconds = Mathf.FloorToInt(elapsedTime % 60f);
        int milliseconds = Mathf.FloorToInt((elapsedTime - Mathf.FloorToInt(elapsedTime)) * 100f);
        timeText.text = string.Format("{0:00}:{1:00}:{2:00}", minutes, seconds, milliseconds);

        if (elapsedTime < 0f)
        {
            EndTiming();
            timeText.text = "00:00:00";
        }
        if (elapsedTime > 1200f)
        {
            EndTiming();
            timeText.text = "20:00:00";
        }
    }

    public void StartTiming()
    {
        isTiming = true;
    }

    public void EndTiming()
    {
        isTiming = false;
    }

    public bool IsTiming
    {
        get { return isTiming; }
    }

    public void LimitedTimeRace()
    {
        isLimitedTimeRace = true;
    }

    public void Restart()
    {
        isLimitedTimeRace = false;
    }

    //public void Retime()
    //{
    //    isTiming = false;
    //    if (isLimitedTimeRace == false)
    //    {
    //        elapsedTime = 0f;
    //        timeText.text = "00:00:00";
    //    }
    //    else
    //    {
    //        elapsedTime = 480f;
    //        timeText.text = "08:00:00";
    //    }
    //}

}