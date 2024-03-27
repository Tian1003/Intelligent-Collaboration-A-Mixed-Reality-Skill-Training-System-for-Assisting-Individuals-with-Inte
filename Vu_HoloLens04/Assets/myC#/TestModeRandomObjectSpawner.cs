using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.UI;    // 記得加這行
using TMPro;
using System.Threading;
using System.Linq;

public class TestModeRandomObjectSpawner : MonoBehaviour
{
    public GameObject AllImageTarget;
    public TimingBoard timingBoard;
    public TestModeBtnEnd btnEnd;
    public GameObject repead_banner;
    public GameObject activity_reminder;
    public GameObject ButtonTimeStarted;
    private GameObject[] textMeshGameObj;

    private int[] textMeshDate;

    public GameObject ImageTarget1, ImageTarget2, ImageTarget3, ImageTarget4, ImageTarget5, ImageTarget6; //放入所有的ImageTarget上的TextMeshPro
    private TextMeshPro[] textMeshName; //存放原始物件陣列

    private TextMeshPro[] textMeshAns; //存放正確排序陣列
    private TextMeshPro[] textMeshNow; //及時更新當下的排序位置陣列
    private string[,] positions; //及時更新每個原始物件位置陣列


    public TextMeshPro TempTMP; //板子上的文字
    private TextMeshPro tempTextMeshPro, TMP_repead, TMP_time;
    private bool stopTiming = false;

    private int Round = 6; // 瓶子數量
    private List<int> differentIndexes = new List<int>(); // 錯誤瓶

    private int initial_time = 0;
    private string now_time = "";

    private List<String> result_temp = new List<string>(); // 各次檢查間隔時間及錯誤瓶數
    private int wrong_temp = 0; // 錯誤次數

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

        //textMeshGameObj = new GameObject[] { ImageTarget1, ImageTarget2, ImageTarget3 };
        //textMeshName = new TextMeshPro[] { textMesh1, textMesh2, textMesh3 };
        textMeshGameObj = new GameObject[] { ImageTarget1, ImageTarget2, ImageTarget3, ImageTarget4, ImageTarget5, ImageTarget6 };
        textMeshName = new TextMeshPro[] { textMesh1, textMesh2, textMesh3, textMesh4, textMesh5, textMesh6 };

        UpdateBox();
    }

    void Update()
    {

        if (stopTiming)
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

        }

        if (TMP_time.text == "20:00:00")
        {
            TimeOut();
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

        ChangeTextColorToWhite(textMeshNow);

        differentIndexes = CompareArrays(textMeshNow, textMeshAns);

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
        //foreach (int index in differentIndexes)
        //{
        //    differentIndexesText += textMeshNow[index].text + " ";
        //    TextMeshPro radtext = textMeshNow[index];
        //    radtext.text = "<color=red>" + radtext.text + "</color>";
        //}

        tempTextMeshPro.text += differentIndexesText;

        // 呼叫位置輸出並比對陣列
        echoPositions();

    }

    // 把字變白
    private void ChangeTextColorToWhite(TextMeshPro[] textMeshArray)
    {
        foreach (TextMeshPro textMesh in textMeshArray)
        {
            if (textMesh.text.StartsWith("<color=red>"))
            {
                textMesh.text = textMesh.text.Replace("<color=red>", "").Replace("</color>", "");
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

        return differentIndexes;
    }

    // 呼叫位置輸出並比對陣列
    private void echoPositions()
    {
        //if (wrong_temp[C - 1] == -1)
        //{
        //    wrong_temp[C - 1] = 0; // 回正
        //}

        if (textMeshAns.SequenceEqual(textMeshNow))
        {
            string result_text = HowLong();
            result_text += ", 正確!";
            result_temp.Add(result_text);

            // 設定各次檢查訊息
            string each_error_text = "";
            for (int i = 0; i < result_temp.Count; i++)
            {
                each_error_text += "第" + (i + 1) + "次: " + result_temp[i] + ".";
                if (i != (result_temp.Count - 1))
                    each_error_text += " ";
            }

            String successful_text;
            successful_text = "排序成功";

            if (Round == 6)
            {
                // 取得編號
                APIManager aPIManager = new APIManager();
                string ID = aPIManager.MyId();
                // 設定結算板子
                successful_text = 
                    "恭喜!!!(編號: " + ID + ")\n" +
                    "-----------------------\n" +
                    "模式: " + "評量模式" + "\n" +
                    "總使用時間: " + TMP_time.text + "\n" +
                    "錯誤次數: " + wrong_temp + " \n" +
                    "各次檢查結果:" + "\n" +
                    "    " + each_error_text;

                // ***********************************************************開始寫API了喔***********************************************************
                apiManager.SendTest(
                        TMP_time.text.ToString(),
                        wrong_temp,
                        each_error_text
                    );
                // ***************************************************************結束!***************************************************************
            }

            TMP_repead.text = successful_text;

            StopAllActive();
            Round++;

            Level_successfully_disappears_objects otherScript = new Level_successfully_disappears_objects();
            otherScript.ReceiveParameter(Round, true);

            repead_banner.SetActive(true); //顯示回復板，告訴使用者排對了

            // 呼叫把字變白
            ChangeTextColorToWhite(textMeshNow);
        }
        else
        {
            ++wrong_temp;

            // 檢查間隔
            string result_text = HowLong();
            result_text += ", 錯" + differentIndexes.Count + "瓶";
            //string result_text = m + "分" + s + "秒, 錯" + differentIndexes.Count + "瓶";
            result_temp.Add(result_text);

            Level_successfully_disappears_objects otherScript = new Level_successfully_disappears_objects();
            otherScript.ReceiveParameter(Round, false);

            btnEnd.Waiting();
        }
    }

    private string HowLong()
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

    void UpdateBox()
    {
        DateTime today = DateTime.Now;
        List<DateTime> generatedDates = new List<DateTime>();

        textMeshDate = new int[Round]; //存放原始日期陣列
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

        // 按日期排序
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

    private void TimeOut()
    {
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
            "已超時.(編號: " + ID + ")\n" +
            "-----------------------\n" +
            "模式: " + "評量模式" + "\n" +
            "總使用時間: " + TMP_time.text + "\n" +
            "錯誤次數: " + wrong_temp + " \n" +
            "各次檢查結果:" + "\n" +
            "    " + each_error_text;

        // ***********************************************************開始寫API了喔***********************************************************
        apiManager.SendTest(
                TMP_time.text.ToString(),
                wrong_temp,
                each_error_text
            );
        // ***************************************************************結束!***************************************************************

        TMP_repead.text = lost_text;
        StopAllActive();
    }

    void disappear_self()
    {
        gameObject.SetActive(false);
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

    public void Restart()
    {
        //isLimitedTimeRace = false;
    }

    //public void Retime()
    //{
    //    Round = 6; // 初始化瓶子數量
    //    differentIndexes.Clear();
    //    result_temp.Clear(); // 初始化各次檢查間隔時間及錯誤瓶數
    //    initial_time = 0;
    //    now_time = "";
    //    wrong_temp = 0; // 錯誤次數
    //    UpdateBox(); // 初始化日期陣列、答案陣列
    //}
}