using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;    // 記得加這行
using TMPro;

public class Random_1 : MonoBehaviour
{
    private TextMeshPro textMesh; //TextMeshProUGUI 組件對象
    void Start()
    {
        string myrandomString = "";


        System.Random myObject = new System.Random();
        int ranNumYear = myObject.Next(2010, 2023);
        int ranNumMonth = myObject.Next(1, 12);
        int ranNumDay = myObject.Next(1, 31);

        myrandomString = ranNumYear + "/" + ranNumMonth + "/" + ranNumDay;

        Debug.Log(myrandomString);

        textMesh = gameObject.GetComponent<TextMeshPro>();
        Debug.Log(textMesh);
        textMesh.text = myrandomString;

    }

}