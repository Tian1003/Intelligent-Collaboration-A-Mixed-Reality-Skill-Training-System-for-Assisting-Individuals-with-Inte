using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class Timer : MonoBehaviour
{
    private float m_Timer;
    private int m_Hour;
    private int m_Minute;
    private int m_Second;

    private TextMeshPro textMesh;
    void Start()
    {

    }

    void Update()
    {
        textMesh = GetComponent<TextMeshPro>();
        //textMesh.text = myrandomString;

        m_Timer += Time.deltaTime;
        m_Second = (int)m_Timer;
        if (m_Second > 59.0f)
        {
            m_Second = (int)(m_Timer - (m_Minute * 60));
        }
        m_Minute = (int)(m_Timer / 60);
        if (m_Minute > 59.0f)
        {
            m_Minute = (int)(m_Minute - (m_Hour * 60));
        }
        m_Hour = m_Minute / 60;
        if (m_Hour >= 24.0f)
        {
            m_Timer = 0;
        }

        //m_ClockText.text = string.Format("{0:d2}:{1:d2}:{2:d2}", m_Hour, m_Minute, m_Second);
        textMesh.text = string.Format("{0:d2}:{1:d2}:{2:d2}", m_Hour, m_Minute, m_Second);
        Debug.Log(textMesh.text);
    }

}
