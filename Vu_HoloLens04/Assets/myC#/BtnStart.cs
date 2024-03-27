using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class BtnStart : MonoBehaviour
{
    public TimingBoard timingBoard;
    public RandomObjectSpawner RandomObjectSpawner;
    public TestModeRandomObjectSpawner TestModeRandomObjectSpawner;
    public GameObject BtnEnd, TestModeBtnEnd;
    public GameObject Targets1, Targets2;

    private static string WhatMode = "";

    private void Start()
    {
        
    }

    public void OnClick()
    {
        timingBoard.StartTiming();
        if (WhatMode == "Practise")
        {
            RandomObjectSpawner.StartTiming();
            BtnEnd.SetActive(true);
            Targets1.SetActive(true);
        }
        else
        {
            TestModeRandomObjectSpawner.StartTiming();
            TestModeBtnEnd.SetActive(true);
            Targets2.SetActive(true);
        }
    }

    public void PractiseMode()
    {
        WhatMode = "Practise";
    }

    public void TestMode()
    {
        WhatMode = "Test";
    }
}