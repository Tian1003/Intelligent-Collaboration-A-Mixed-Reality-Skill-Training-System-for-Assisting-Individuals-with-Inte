using UnityEngine;
using TMPro;

public class Timer : MonoBehaviour
{
    private TextMeshPro time, text;
    private float timeElapsed, timeUp, Hour, Minute, Second;
    private bool isTiming;
    private string Mode;

    void Start()
    {
        time = transform.Find("Time").GetComponentInChildren<TextMeshPro>();
        text = transform.Find("Text").GetComponentInChildren<TextMeshPro>();
        isTiming = true;
    }

    void Update()
    {
        if (isTiming)
        {
            // 計時
            if (Mode == "game_mode_version_1")
                timeElapsed += Time.deltaTime;
            else
                timeElapsed -= Time.deltaTime;

            Second = (int)timeElapsed % 60;
            Minute = (int)(timeElapsed / 60) % 60;
            Hour = (int)(timeElapsed / 3600);

            // 輸出
            if ((int)timeElapsed != timeUp)
                time.text = string.Format("{0:d2}:{1:d2}:{2:d2}", (int)Hour, (int)Minute, (int)Second);
            else
            {
                isTiming = false; // 停止計時

                //確認停止時文字正確
                if (Mode == "game_mode_version_1")
                    time.text = "00:20:00";
                else
                    time.text = "00:00:00";
            }
        }
    }

    public void ReceiveTimingStatus(bool status)
    {
        isTiming = status;
        text.text = "已完成: ";
        //gameObject.SetActive(status);
    }

    public void ReceiveMode(string mode)
    {
        Mode = mode;
        if (Mode == "teaching")
            gameObject.SetActive(false);
        else if (Mode == "game_mode_version_1")
        {
            timeElapsed = 0f;
            timeUp = 1200f; //20分鐘
        }
        else if (Mode == "game_mode_version_2")
        {
            timeElapsed = 301f; //5分鐘 -> 301
            timeUp = 1f;
        }
        else if (Mode == "evaluate")
        {
            timeElapsed = 601f; //10分鐘 -> 601
            timeUp = 1f;
        }
    }

    public string GetTime()
    {
        string text = (int)Minute + "分" + (int)Second + "秒";
        return text;
    }
}
