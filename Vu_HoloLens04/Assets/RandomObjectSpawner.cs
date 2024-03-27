using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;    // 記得加這行
using TMPro;
using System.Threading;
using System.Linq;

public class RandomObjectSpawner : MonoBehaviour
{
    public GameObject AllImageTarget;
    public TimingBoard timingBoard;
    public BtnEnd btnEnd;
    public GameObject repead_banner;
    public GameObject activity_reminder;
    public GameObject ButtonTimeStarted;
    private GameObject[] textMeshGameObj;
    private GameObject[] textMeshGameObj_04, textMeshGameObj_05, textMeshGameObj_06;
    private GameObject[] textMeshGameObj_update;
    public GameObject buttonClose;

    private int[] textMeshDate;
    private GameObject[] textMeshGameObj_temp;

    public GameObject ImageTarget1, ImageTarget2, ImageTarget3, ImageTarget4, ImageTarget5, ImageTarget6; //放入所有的ImageTarget上的TextMeshPro
    private TextMeshPro[] textMeshName; //存放原始物件陣列
    private TextMeshPro[] textMeshName_04, textMeshName_05, textMeshName_06; //存放原始物件陣列
    private TextMeshPro[] textMeshName_update; //存放原始物件陣列
    private TextMeshPro[] textMeshName_temp; //存放原始物件陣列

    private TextMeshPro[] textMeshAns; //存放正確排序陣列
    private TextMeshPro[] textMeshNow; //及時更新當下的排序位置陣列
    private string[,] positions; //及時更新每個原始物件位置陣列

    public TextMeshPro TempTMP; //板子上的文字
    private TextMeshPro tempTextMeshPro, TMP_repead, TMP_time;
    private bool stopTiming = false;
    private bool isDescriptivePrompt = false; // 描述型回饋
    private bool isLimitedTimeRace = false; // 限時賽

    private int HP = 5; // 生命值
    private int Round = 3; // 瓶子數量
    private int C = 1; // 關卡數
    private List<int> differentIndexes = new List<int>(); // 錯誤瓶
    private List<String> result_temp = new List<string>(); // 各次檢查間隔時間及錯誤瓶數

    private int initial_time = 0;

    private int old_time = 480;
    private string now_time = "";
    private float total_time = 0f; // 總共用時
    private string total_time_text = ""; // 總共用時(文字輸出)

    private string[] time_temp = new string[4] { "失敗", "失敗", "失敗", "失敗" };
    private int[] wrong_temp = new int[4] { -1, -1, -1, -1 };

    public APIManager apiManager; // API

    void Start()
    {
        //板子的文字
        tempTextMeshPro = TempTMP.GetComponent<TextMeshPro>();
        TMP_repead = repead_banner.GetComponentInChildren<TextMeshPro>();
        TMP_time = timingBoard.GetComponentInChildren<TextMeshPro>();

        //存放TMP
        TextMeshPro textMesh1 = ImageTarget1.GetComponent<TextMeshPro>();
        TextMeshPro textMesh2 = ImageTarget2.GetComponent<TextMeshPro>();
        TextMeshPro textMesh3 = ImageTarget3.GetComponent<TextMeshPro>();
        TextMeshPro textMesh4 = ImageTarget4.GetComponent<TextMeshPro>();
        TextMeshPro textMesh5 = ImageTarget5.GetComponent<TextMeshPro>();
        TextMeshPro textMesh6 = ImageTarget6.GetComponent<TextMeshPro>();

        textMeshGameObj = new GameObject[] { ImageTarget1, ImageTarget2, ImageTarget3 };
        textMeshGameObj_04 = new GameObject[] { ImageTarget1, ImageTarget2, ImageTarget3, ImageTarget4 };
        textMeshGameObj_05 = new GameObject[] { ImageTarget1, ImageTarget2, ImageTarget3, ImageTarget4, ImageTarget5 };
        textMeshGameObj_06 = new GameObject[] { ImageTarget1, ImageTarget2, ImageTarget3, ImageTarget4, ImageTarget5, ImageTarget6 };

        textMeshName = new TextMeshPro[] { textMesh1, textMesh2, textMesh3 };
        textMeshName_04 = new TextMeshPro[] { textMesh1, textMesh2, textMesh3, textMesh4 };
        textMeshName_05 = new TextMeshPro[] { textMesh1, textMesh2, textMesh3, textMesh4, textMesh5 };
        textMeshName_06 = new TextMeshPro[] { textMesh1, textMesh2, textMesh3, textMesh4, textMesh5, textMesh6 };

        UpdateBox();
    }

    void UpdateBox()
    {
        DateTime today = DateTime.Now;
        List<DateTime> generatedDates = new List<DateTime>();

        textMeshGameObj_temp = new GameObject[Round];
        textMeshName_temp = new TextMeshPro[Round];

        for (int i = 0; i < Round; i++)
        {
            if (Round == 3)
            {
                textMeshGameObj_temp[i] = textMeshGameObj[i];
                textMeshName_temp[i] = textMeshName[i];
            }
            else if (Round == 4)
            {
                textMeshGameObj_temp[i] = textMeshGameObj_04[i];
                textMeshName_temp[i] = textMeshName_04[i];
            }
            else if (Round == 5)
            {
                textMeshGameObj_temp[i] = textMeshGameObj_05[i];
                textMeshName_temp[i] = textMeshName_05[i];
            }
            else if (Round == 6)
            {
                textMeshGameObj_temp[i] = textMeshGameObj_06[i];
                textMeshName_temp[i] = textMeshName_06[i];
            }
        }

        textMeshGameObj = textMeshGameObj_temp;
        textMeshName = textMeshName_temp;
        textMeshDate = new int[Round];
        for (int i = 0; i < Round; i++)
        {
            DateTime randomDate;
            do
            {
                randomDate = today.AddDays(UnityEngine.Random.Range(0, 31)); // 隨機生成今天到未來30天之間的日期
            }
            while (generatedDates.Contains(randomDate)); // 確保日期不會重複

            generatedDates.Add(randomDate); // 把新日期加到已生成的日期列表中

            TimeSpan timeDiff = today - randomDate;
            int daysDiff = (int)timeDiff.TotalDays;
            if (daysDiff < 0) daysDiff *= -1; // 取正數

            textMeshName[i].text = randomDate.ToString("yyyy/MM/dd");
            textMeshDate[i] = daysDiff;
        }

        int[] sortedDate = new int[textMeshDate.Length];
        textMeshDate.CopyTo(sortedDate, 0);
        textMeshAns = new TextMeshPro[textMeshName.Length];
        textMeshName.CopyTo(textMeshAns, 0);

        for (int i = 0; i < sortedDate.Length - 1; i++)
        {
            for (int j = 0; j < sortedDate.Length - i - 1; j++)
            {
                if (sortedDate[j] > sortedDate[j + 1])
                {
                    // 交換相鄰的兩個元素
                    int tempDate = sortedDate[j];
                    sortedDate[j] = sortedDate[j + 1];
                    sortedDate[j + 1] = tempDate;

                    TextMeshPro temp = textMeshAns[j];
                    textMeshAns[j] = textMeshAns[j + 1];
                    textMeshAns[j + 1] = temp;
                }
            }
        }


    }

    void Update()
    {

        if (stopTiming && HP != 0)
        {
            // 創建一個 string 數組，用於存儲所有 TextMeshPro 物件的位置

            positions = new string[Round, 3];

            string S = "";

            for (int i = 0; i < Round; i++)
            {
                string xPositionString = System.Math.Round(textMeshName[i].transform.position.x, 4).ToString();
                string yPositionString = System.Math.Round(textMeshName[i].transform.position.y, 4).ToString();
                string zPositionString = System.Math.Round(textMeshName[i].transform.position.z, 4).ToString();

                positions[i, 0] = xPositionString;
                positions[i, 1] = yPositionString;
                positions[i, 2] = zPositionString;

                S += "Object " + (i + 1) + ": (" + positions[i, 0] + ", "
                    + positions[i, 1] + ", "
                    + positions[i, 2] + ") \n";
            }

            //修改板子的文字
            tempTextMeshPro.text = S;

            // 限時賽-總時
            total_time += Time.deltaTime;

            int minutes = Mathf.FloorToInt(total_time / 60f);
            int seconds = Mathf.FloorToInt(total_time % 60f);
            int milliseconds = Mathf.FloorToInt((total_time - Mathf.FloorToInt(total_time)) * 100f);
            total_time_text = string.Format("{0:00}:{1:00}:{2:00}", minutes, seconds, milliseconds);

            // 檢查時間到了嗎?
            if (isLimitedTimeRace == true)
            {
                if (TMP_time.text == "00:00:00")
                {
                    TimeOut();
                }
            }

        }

    }
    // [ContextMenu(nameof(FindPositions))]
    private void FindPositions()
    {
        string[] sortedPosition = new string[positions.GetLength(0)];
        string S = "";

        for (int i = 0; i < positions.GetLength(0); i++)
        {
            sortedPosition[i] = positions[i, 2];

            S += "Object " + (i + 1) + ": ("
                + positions[i, 0] + ", "
                + positions[i, 1] + ", "
                + positions[i, 2] + ") \n";
        }
        //修改板子的文字
        tempTextMeshPro.text = S;

        textMeshNow = new TextMeshPro[textMeshName.Length];
        textMeshName.CopyTo(textMeshNow, 0);

        for (int i = 0; i < sortedPosition.Length - 1; i++)
        {
            for (int j = 0; j < sortedPosition.Length - i - 1; j++)
            {
                if (float.Parse(sortedPosition[j]) > float.Parse(sortedPosition[j + 1]))
                {
                    string temp = sortedPosition[j];
                    sortedPosition[j] = sortedPosition[j + 1];
                    sortedPosition[j + 1] = temp;

                    TextMeshPro tempNow = textMeshNow[j];
                    textMeshNow[j] = textMeshNow[j + 1];
                    textMeshNow[j + 1] = tempNow;
                }
            }
        }

        differentIndexes = CompareArrays(textMeshNow, textMeshAns);

        if (isDescriptivePrompt)
        {
            ChangeTextColorToWhite(textMeshNow);

            String errorIndexes = "第 ";
            for (int i = 0; i < differentIndexes.Count; i++)
            {
                errorIndexes += (differentIndexes[i] + 1);
                if (i < (differentIndexes.Count - 1))
                {
                    errorIndexes += " 與 ";
                }
            }
            errorIndexes += " 排序錯誤";
            BtnEnd otherScript = new BtnEnd();
            otherScript.ReceiveParameter(errorIndexes);

            String differentIndexesText = "\n\n排錯: ";

            // 把字變紅
            foreach (int index in differentIndexes)
            {
                differentIndexesText += textMeshNow[index].text + " ";
                TextMeshPro radtext = textMeshNow[index];
                radtext.text = "<color=green>" + radtext.text + "</color>";
            }

            tempTextMeshPro.text += differentIndexesText;

        }

        // 呼叫位置輸出並比對陣列
        if (isLimitedTimeRace == false)
            echoPositions_HP_Mode();
        else
            echoPositions_Time_Mode();

    }

    // 把字變白
    private void ChangeTextColorToWhite(TextMeshPro[] textMeshArray)
    {
        foreach (TextMeshPro textMesh in textMeshArray)
        {
            if (textMesh.text.StartsWith("<color=green>"))
            {
                textMesh.text = textMesh.text.Replace("<color=green>", "").Replace("</color>", "");
            }
        }
    }

    // 挑出不同值
    private List<int> CompareArrays(TextMeshPro[] arr1, TextMeshPro[] arr2)
    {
        List<int> differentIndexes = new List<int>();

        if (arr1.Length == arr2.Length)
        {
            for (int i = 0; i < arr1.Length; i++)
            {
                if (arr1[i].text != arr2[i].text)
                {
                    differentIndexes.Add(i);
                }
            }
        }
        else
        {
            //Debug.LogError("数组长度不同，无法比较。");
        }

        return differentIndexes;
    }

    // 呼叫位置輸出並比對陣列
    private void echoPositions_HP_Mode()
    {
        if (textMeshAns.SequenceEqual(textMeshNow))
        {
            string result_text = HowLong_HP_Mode();
            result_text += ", 正確!";
            result_temp.Add(result_text);

            String successful_text;

            if (Round < 6)
            {
                successful_text =
                    "回合通過!!!\n" +
                    "-----------------------\n" +
                    "模式: " + "練習模式-生命賽" + "\n" +
                    "時間: " + TMP_time.text + "\n" +
                    "錯誤次數: " + (5 - HP) + "\n" +
                    "關卡: " + C;
            }
            else
            {
                // 取得編號
                APIManager aPIManager = new APIManager();
                string ID = aPIManager.MyId();
                // 設定結算板子
                successful_text =
                    "恭喜!!!(編號: " + ID + ")\n" +
                    "-----------------------\n" +
                    "模式: " + "練習模式-生命賽" + "\n" +
                    "時間: " + TMP_time.text + "\n" +
                    "錯誤次數: " + (5 - HP) + "\n" +
                    "關卡: " + C;

                StopAllActive();
                // 設定得分
                int score = 15 + ((Round - 2) * 21) - ((5 - HP) * 3);
                if (score == 99)
                    score++;
                successful_text += "\n得分: " + score;

                // 設定各次錯誤訊息
                string each_error_text = "";
                for (int i = 0; i < result_temp.Count; i++)
                {
                    each_error_text += "第" + (i + 1) + "次: " + result_temp[i] + ".";
                    if (i != (result_temp.Count - 1))
                        each_error_text += " ";
                }

                // ***********************************************************開始寫API了喔***********************************************************
                apiManager.SendHP(
                        TMP_time.text.ToString(),
                        (5 - HP),
                        C,
                        score,
                        each_error_text
                    );
                // ***************************************************************結束!***************************************************************
            }

            TMP_repead.text = successful_text;

            C++;
            Round++;

            Level_successfully_disappears_objects otherScript = new Level_successfully_disappears_objects();
            otherScript.ReceiveParameter(Round, true);

            repead_banner.SetActive(true); //顯示回復板，告訴使用者排對了

            if (Round < 7)
            {
                UpdateBox();
                timingBoard.StartTiming();
                StartTiming();
            }

            // 呼叫把字變白
            ChangeTextColorToWhite(textMeshNow);
        }
        else
        {
            string result_text = HowLong_HP_Mode();
            result_text += ", 錯" + differentIndexes.Count + "瓶";
            //string result_text = m + "分" + s + "秒, 錯" + differentIndexes.Count + "瓶";
            result_temp.Add(result_text);

            Level_successfully_disappears_objects otherScript = new Level_successfully_disappears_objects();
            otherScript.ReceiveParameter(Round, false);

            HP--;
            isAlive();
        }
    }

    private string HowLong_HP_Mode()
    {
        now_time = TMP_time.text;

        string timeString = now_time;
        string[] timeParts = timeString.Split(':');
        int minutes = int.Parse(timeParts[0]);
        int seconds = int.Parse(timeParts[1]);

        int totalSeconds = minutes * 60 + seconds;
        totalSeconds -= initial_time;

        initial_time += totalSeconds;

        int m = totalSeconds / 60;
        int s = totalSeconds % 60;
        string result_text = m + "分" + s + "秒";

        return result_text;
    }

    private void isAlive()
    {
        if (HP == 0)
        {
            //tempTextMeshPro.text = "You lost.";

            Level_successfully_disappears_objects otherScript = new Level_successfully_disappears_objects();
            otherScript.ReceiveParameter2(7);

            repead_banner.SetActive(true); //顯示回復板，告訴使用者排錯了
            int score = 15 + ((Round - 2) * 21) - ((5 - HP) * 3);

            // 取得編號
            APIManager aPIManager = new APIManager();
            string ID = aPIManager.MyId();
            // 設定結算板子
            String lost_text =
                "你輸了(編號: " + ID + ")\n" +
                "-----------------------\n" +
                "模式: " + "練習模式-生命賽" + "\n" +
                "時間: " + TMP_time.text + "\n" +
                "錯誤次數: " + (5 - HP) + "\n" +
                "停止關卡: " + C + "\n" +
                "得分: " + score;

            // 設定各次錯誤訊息
            string each_error_text = "";
            for (int i = 0; i < result_temp.Count; i++)
            {
                each_error_text += "第" + (i + 1) + "次: " + result_temp[i] + ".";
                if (i != (result_temp.Count - 1))
                    each_error_text += " ";
            }

            // ***********************************************************開始寫API了喔***********************************************************
            apiManager.SendHP(
                    TMP_time.text.ToString(),
                    (5 - HP),
                    C,
                    score,
                    each_error_text
                );
            // ***************************************************************結束!***************************************************************

            buttonClose.SetActive(true);
            TMP_repead.text = lost_text;
            StopAllActive();
        }
        else
        {
            //錯誤，等待3秒後繼續計時
            btnEnd.Waiting();
        }
    }

    // 呼叫位置輸出並比對陣列
    private void echoPositions_Time_Mode()
    {
        if (wrong_temp[C - 1] == -1)
        {
            wrong_temp[C - 1] = 0; // 回正
        }

        if (textMeshAns.SequenceEqual(textMeshNow))
        {
            string result_text = HowLong_Time_Mode();
            result_text += ", 正確!";
            result_temp.Add(result_text);

            String successful_text;
            successful_text = "排序成功";
            now_time = TMP_time.text;

            string timeString = now_time;
            string[] timeParts = timeString.Split(':');
            int minutes = int.Parse(timeParts[0]);
            int seconds = int.Parse(timeParts[1]);

            int totalSeconds = minutes * 60 + seconds;
            totalSeconds = old_time - totalSeconds;

            old_time -= totalSeconds;

            int m = totalSeconds / 60;
            int s = totalSeconds % 60;

            time_temp[C - 1] = m + "分" + s + "秒";

            if (Round == 6)
            {
                StopAllActive();

                // 設定各次錯誤訊息
                string each_error_text = "";
                for (int i = 0; i < result_temp.Count; i++)
                {
                    each_error_text += "第" + (i + 1) + "次: " + result_temp[i] + ".";
                    if (i != (result_temp.Count - 1))
                        each_error_text += " ";
                }
                // 取得編號
                APIManager aPIManager = new APIManager();
                string ID = aPIManager.MyId();
                // 設定結算板子
                successful_text =
                    "恭喜!!!(編號: " + ID + ")\n" +
                    "-----------------------\n" +
                    "模式: " + "練習模式-限時賽" + "\n" +
                    "總使用時間: " + total_time_text + "\n" +
                    "各關卡使用時間: 1 -> " + time_temp[0] + ", 2 -> " + time_temp[1] + ",\n" +
                    "    3 -> " + time_temp[2] + ", 4 -> " + time_temp[3] + " \n" +
                    "各關卡錯誤次數: 1 -> " + wrong_temp[0] + ", 2 -> " + wrong_temp[1] + ",\n" +
                    "    3 -> " + wrong_temp[2] + ", 4 -> " + wrong_temp[3];

                // ***********************************************************開始寫API了喔***********************************************************
                apiManager.SendLimitedTime(
                        total_time_text,
                        ("第1關: " + time_temp[0] + ", 第2關: " + time_temp[1] + ", 第3關: " + time_temp[2] + ", 第4關: " + time_temp[3]),
                        ("第1關: " + wrong_temp[0] + ", 第2關: " + wrong_temp[1] + ", 第3關: " + wrong_temp[2] + ", 第4關: " + wrong_temp[3]),
                        each_error_text
                    );
                // ***************************************************************結束!***************************************************************
            }

            TMP_repead.text = successful_text;

            C++;
            Round++;

            Level_successfully_disappears_objects otherScript = new Level_successfully_disappears_objects();
            otherScript.ReceiveParameter(Round, true);

            repead_banner.SetActive(true); //顯示回復板，告訴使用者排對了

            if (Round < 7)
            {
                UpdateBox();
                timingBoard.StartTiming();
                StartTiming();
            }

            // 呼叫把字變白
            ChangeTextColorToWhite(textMeshNow);
        }
        else
        {
            wrong_temp[C - 1]++;

            // 檢查間隔
            string result_text = HowLong_Time_Mode();
            result_text += ", 錯" + differentIndexes.Count + "瓶";
            //string result_text = m + "分" + s + "秒, 錯" + differentIndexes.Count + "瓶";
            result_temp.Add(result_text);

            Level_successfully_disappears_objects otherScript = new Level_successfully_disappears_objects();
            otherScript.ReceiveParameter(Round, false);

            btnEnd.Waiting();
        }
    }

    private string HowLong_Time_Mode()
    {
        now_time = TMP_time.text;

        string timeString = now_time;
        string[] timeParts = timeString.Split(':');
        int minutes = int.Parse(timeParts[0]);
        int seconds = int.Parse(timeParts[1]);

        int totalSeconds = 480 - (minutes * 60 + seconds);
        totalSeconds -= initial_time;

        initial_time += totalSeconds;

        int m = totalSeconds / 60;
        int s = totalSeconds % 60;
        string result_text = m + "分" + s + "秒";

        return result_text;
    }

    private void TimeOut()
    {
        total_time_text = "08:00:00";
        //tempTextMeshPro.text = "You lost.";

        Level_successfully_disappears_objects otherScript = new Level_successfully_disappears_objects();
        otherScript.ReceiveParameter2(7);

        repead_banner.SetActive(true); //顯示回復板，告訴使用者排錯了

        // 設定各次錯誤訊息
        string each_error_text = "";
        for (int i = 0; i < result_temp.Count; i++)
        {
            each_error_text += "第" + (i + 1) + "次: " + result_temp[i] + ".";
            if (i != (result_temp.Count - 1))
                each_error_text += " ";
        }

        // 取得編號
        APIManager aPIManager = new APIManager();
        string ID = aPIManager.MyId();
        // 設定結算板子
        String lost_text =
            "時間到了(編號: " + ID + ")\n" +
            "-----------------------\n" +
            "模式: " + "練習模式-限時賽" + "\n" +
            "總使用時間: " + total_time_text + "\n" +
            "各關卡使用時間: 1 -> " + time_temp[0] + ", 2 -> " + time_temp[1] + ",\n" +
            "    3 -> " + time_temp[2] + ", 4 -> " + time_temp[3] + " \n" +
            "各關卡錯誤次數: 1 -> " + wrong_temp[0] + ", 2 -> " + wrong_temp[1] + ",\n" +
            "    3 -> " + wrong_temp[2] + ", 4 -> " + wrong_temp[3];

        // ***********************************************************開始寫API了喔***********************************************************
        apiManager.SendLimitedTime(
                total_time_text,
                ("第1關: " + time_temp[0] + ", 第2關: " + time_temp[1] + ", 第3關: " + time_temp[2] + ", 第4關: " + time_temp[3]),
                ("第1關: " + wrong_temp[0] + ", 第2關: " + wrong_temp[1] + ", 第3關: " + wrong_temp[2] + ", 第4關: " + wrong_temp[3]),
                each_error_text
            );
        // ***************************************************************結束!***************************************************************

        buttonClose.SetActive(true);
        TMP_repead.text = lost_text;
        StopAllActive();
    }

    private void StopAllActive()
    {
        AllImageTarget.SetActive(false);
    }

    public void StartTiming()
    {
        stopTiming = true;
    }

    public void EndTiming()
    {
        stopTiming = false;
        FindPositions();
    }

    public void TurnOnDescriptivePrompt()
    {
        isDescriptivePrompt = true;
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
    //    HP = 5; // 初始化生命值
    //    Round = 3; // 初始化瓶子數量
    //    C = 1; // 初始化關卡數
    //    for (int i = 0; i < textMeshName_06.Count(); i++) textMeshName_06[i].text = "尚未啟用"; // 初始化瓶子上的文字
    //    differentIndexes.Clear();
    //    result_temp.Clear();
    //    old_time = 480;
    //    now_time = "";
    //    total_time = 0f; // 初始化總共用時
    //    total_time_text = ""; // 初始化總共用時(文字輸出)
    //    time_temp = new string[4] { "失敗", "失敗", "失敗", "失敗" };
    //    wrong_temp = new int[4] { -1, -1, -1, -1 };
    //    UpdateBox(); // 初始化日期陣列、答案陣列
    //}
}