using UnityEngine;
using TMPro;
using Vuforia;
using System.Collections;
using System.Collections.Generic;
using SpeechLib;
using System.Text;

public class Ask_questions : MonoBehaviour
{
    //******************************************************
    //                      設定參數
    //******************************************************
    public GameObject CoffeeMaker;
    public GameObject cup_lid; // 杯蓋
    public TMP_Text questionText;
    public Timer Timing;
    public APIManager APIManager;
    //public TMP_Text checkText;

    private Transform coffee_cup_M, coffee_cup_L; // CoffeeMaker > Maker底下的兩杯
    private Transform lid_M, lid_L;
    private CupDetection cupDetection;

    private string question = "";
    private string randomOrder = "";
    private string s1 = "", s2 = "", s3 = "", s4 = "";

    private int C1, C2, C3, C4; //杯子大小、品項、溫度、蓋子

    private static string system_mode = "";     //使用者選擇的系統模式
    private static int game_mode_version = 0;   //使用者選擇的遊戲模式版本

    private string randomRequestPhrase, randomSize, randomTemperature, randomItem; //題目
    private string randomIce;

    private static string coffeeSize, coffeeTemprature, coffeeType; //目前的品項
    private static string iceAmount;

    private int Step = 0;    //計算步驟數
    private int Cup_Num = 0; //計算杯數

    private int step_1_error = 0, step_2_error = 0, step_3_error = 0, step_4_error = 0; //錯誤次數
    private int tf1 = 0, tf2 = 0, tf3 = 0; //是否錯過
    private int TimeTemp = 0;
    private static List<string> Mode_Array = new List<string>();        // 使用者選擇的系統模式, 用陣列位址當編號
    private static List<string> Operate_Array = new List<string>();     // 使用者操作描述, 用陣列位址當編號
    private static List<string> CupTime_Array = new List<string>();     // 整輪每杯子操作時間, 用陣列位址當編號
    private static List<string> CupTimeTemp_Array = new List<string>(); // 每杯子操作時間, 用陣列位址當編號
    private static List<string> CupError_Array = new List<string>();        // 整輪操作錯誤訊息, 用陣列位址當編號
    private static List<int> CupErrorTemp_Array = new List<int>();         // 每杯子錯誤訊息, 用陣列位址當編號

    private bool isComplete = false;
    private bool cupMaking = false;
    private bool isGameModeVersion1End = false;

    // 選擇模式
    public void Receive_system_mode_teaching()
    {
        system_mode = "teaching";
        Mode_Array.Add("教學模式");

        //更改計時模式
        Timing.ReceiveMode(system_mode);
    }
    public void Receive_system_mode_game(int version)
    {
        system_mode = "game";
        Mode_Array.Add("遊戲模式");

        //更改計時模式
        game_mode_version = version;
        if (game_mode_version == 1)
            Timing.ReceiveMode("game_mode_version_1");
        if (game_mode_version == 2)
            Timing.ReceiveMode("game_mode_version_2");
    }
    public void Receive_system_mode_evaluate()
    {
        system_mode = "evaluate";
        Mode_Array.Add("評量模式");

        //更改計時模式
        Timing.ReceiveMode(system_mode);
    }

    // 抓物件
    void Start()
    {
        coffee_cup_M = CoffeeMaker.transform.Find("Maker/coffee_cup_M");
        coffee_cup_L = CoffeeMaker.transform.Find("Maker/coffee_cup_L");
        lid_M = coffee_cup_M.transform.Find("CoffeeCup/Lid");
        lid_L = coffee_cup_L.transform.Find("CoffeeCup/Lid");

        cupDetection = CoffeeMaker.GetComponent<CupDetection>();

        if (system_mode == "evaluate") //更改判斷模式
            cupDetection.EvaluateMode();

        NewOrder();
    }
    // 出題
    private void NewOrder()
    {
        Remove();

        //******************************************************
        //                    隨機產生題目
        //******************************************************
        string[] requestPhrases = new string[] { "我想要", "請給我", "我要點", "" };
        string[] sizes = new string[] { "大杯", "中杯" };
        string[] temperatures = new string[] { "冰的", "熱的" };
        string[] items = new string[] { "美式", "拿鐵", "卡布奇諾" };

        randomRequestPhrase = requestPhrases[Random.Range(0, requestPhrases.Length)];
        randomSize = sizes[Random.Range(0, sizes.Length)];
        randomTemperature = temperatures[Random.Range(0, temperatures.Length)];
        randomItem = items[Random.Range(0, items.Length)];
        if (randomTemperature == "冰的")
            randomIce = (randomSize == "中杯") ? "中冰" : "大冰";
        else
            randomIce = "不加冰";

        //******************************************************
        //                    更新面板資訊
        //******************************************************
        //voice = new SpVoice();
        //voice.Voice = voice.GetVoices(string.Empty, string.Empty).Item(0);
        //voice.Rate = 0;
        //voice.Volume = 100;
        randomOrder = "[題目] : " + randomRequestPhrase + randomSize + randomTemperature + randomItem + "\n";
        // voice.Speak(randomOrder, SpeechVoiceSpeakFlags.SVSFlagsAsync);
        s1 = "步驟(1): 拿起" + randomSize + "的杯子";
        s2 = "步驟(2): 點擊" + randomIce + "的按鈕";
        s3 = "步驟(3): 點擊" + randomItem + "的按鈕";
        s4 = "步驟(4): 蓋上杯蓋";

        if (questionText != null)
        {
            question = randomOrder + s1 + "\n" + s2 + "\n" + s3 + "\n" + s4;
        }
    }

    // 作答（Update）
    private void Update()
    {
        //******************************************************
        //       checkText畫面顯示目前分數&各種類錯誤次數
        //******************************************************
        //if (checkText != null)
        //{
        //    int point = (Step >= 20) ? 20 : Step;
        //    checkText.text =
        //        "目前得分: " + point + "\n" +
        //        "----本杯錯誤次數----" + "\n" +
        //        "大小: " + step_1_error + ", 冰量: " + step_2_error + ", 品項: " + step_3_error;
        //}

        //******************************************************
        //                   判斷使用者操作是否正確
        //******************************************************
        if (!IsInvoking() && !isComplete)
        {
            //杯子是否拿對
            if ((randomSize == "中杯" && coffee_cup_M.gameObject.activeSelf == true) ||
                (randomSize == "大杯" && coffee_cup_L.gameObject.activeSelf == true))
            {
                if (system_mode != "evaluate")
                {
                    //開始製作
                    if (system_mode == "game" && game_mode_version == 1)
                        cupMaking = true;

                    s1 = "步驟(1): <color=green>拿起" + randomSize + "的杯子</color>";
                    questionText.text = randomOrder + s1 + "\n" + s2;
                }

                // 檢查是不是第一次對
                if (C1 == -1)
                    tf1 = 1;
                if (tf1 == 0)
                {
                    Step++;
                    tf1 = 1;
                }
                C1 = 1;
            }
            else if ((randomSize == "中杯" && coffee_cup_L.gameObject.activeSelf == true) ||
                     (randomSize == "大杯" && coffee_cup_M.gameObject.activeSelf == true))
            {
                if (system_mode != "evaluate")
                {
                    s1 = "步驟(1): <color=red>拿起" + randomSize + "的杯子</color>";
                    questionText.text = randomOrder + s1;
                }
                C1 = -1;
            }
            else
            {
                if (system_mode != "evaluate")
                {
                    s1 = "步驟(1): 拿起" + randomSize + "的杯子";
                    questionText.text = randomOrder + s1;
                }
                C1 = 0;
            }
            //冰量是否選對
            if (randomIce == iceAmount)
            {
                if (system_mode != "evaluate")
                {
                    s2 = "步驟(2): <color=green>點擊" + randomIce + "的按鈕</color>";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3;
                }
                if (C2 == -1)
                    tf2 = 1;
                if (tf2 == 0)
                {
                    Step++;
                    tf2 = 1;
                }
                C2 = 1;
            }
            else if (iceAmount != "")
            {
                if (system_mode != "evaluate")
                {
                    s2 = "步驟(2): <color=red>點擊" + randomIce + "的按鈕</color>";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3;
                }
                C2 = -1;
            }
            else
            {
                if (system_mode != "evaluate")
                {
                    s2 = "步驟(2): 點擊" + randomIce + "的按鈕";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3;
                }
                C2 = 0;
            }
            //飲品是否選對
            if ((randomSize == coffeeSize) && (randomTemperature == coffeeTemprature) && (randomItem == coffeeType))
            {

                if (system_mode != "evaluate")
                {
                    s3 = "步驟(3): <color=green>點擊" + randomItem + "的按鈕</color>";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3 + "\n" + s4;
                }
                if (C3 == -1)
                    tf3 = 1;
                if (tf3 == 0)
                {
                    Step++;
                    tf3 = 1;
                }
                C3 = 1;
            }
            else if (((coffeeSize != "") && (coffeeTemprature != "") && (coffeeType != "")) &&
                     ((randomSize != coffeeSize) || (randomTemperature != coffeeTemprature) || (randomItem != coffeeType)))
            {
                if (system_mode != "evaluate")
                {
                    s3 = "步驟(3): <color=red>點擊" + randomItem + "的按鈕</color>";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3 + "\n" + s4;
                }
                C3 = -1;
            }
            else
            {
                if (system_mode != "evaluate")
                {
                    s3 = "步驟(3): 點擊" + randomItem + "的按鈕";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3 + "\n" + s4;
                }
                C3 = 0;
            }
            //有沒有蓋上杯蓋
            if (lid_M.gameObject.activeSelf || lid_L.gameObject.activeSelf)
            {
                if (system_mode != "evaluate")
                {
                    // 結束製作
                    if (system_mode == "game" && game_mode_version == 1)
                        cupMaking = false;

                    s4 = "步驟(4): <color=green>蓋上杯蓋</color>";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3 + "\n" + s4;
                }
                C4 = 1;
                Step++;
                Debug.LogError("C1: " + C1 + ", C2: " + C2 + ", C3: " + C3 + ", C4: " + C4);
            }
            else
            {
                if (system_mode != "evaluate")
                {
                    s4 = "步驟(4): 蓋上杯蓋";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3 + "\n" + s4;
                }
                C4 = 0;
            }

            //判斷是否完成
            if (C1 != 0 && C2 != 0 && C3 != 0 && C4 != 0)
            {
                Cup_Num++;
                questionText.text = "完成!!!";
                CupErrorTemp_Array.Add(step_1_error);
                CupErrorTemp_Array.Add(step_2_error);
                CupErrorTemp_Array.Add(step_3_error);
                CupErrorTemp_Array.Add(step_4_error);

                //if (C1 == -1)
                //    questionText.text += "\n但是杯子尺寸錯了.";
                //if (C2 == -1)
                //    questionText.text += "\n但是冰量錯了.";
                //if (C3 == -1)
                //    questionText.text += "\n但是品項錯了.";

                Debug.LogError($"Cup_Num: {Cup_Num}, Step: {Step}, system_mode: {system_mode}, game_mode_version: {game_mode_version}");


                if (system_mode == "game" && game_mode_version == 2 && TimeTemp == 0)
                {
                    TimeTemp = 1;
                    CupTimeTemp_Array.Add("5分00秒"); //每杯時間
                }
                if (system_mode == "evaluate" && TimeTemp == 0)
                {
                    TimeTemp = 1;
                    CupTimeTemp_Array.Add("10分00秒"); //每杯時間
                }

                CupTimeTemp_Array.Add(Timing.GetTime()); //每杯時間
                Debug.Log("Timing.GetTime()" + Timing.GetTime());

                Invoke(nameof(NewOrder), 3f);
            }
            else if (C1 == 0 && C2 == 0 && C3 == 0 && C4 == 0)
                questionText.text = question;

            //********************************************************************
            //                      判斷遊戲模式-初級版
            //********************************************************************
            if (Step >= 20 && system_mode == "game" && game_mode_version == 1)
            {
                if (Step == 20 && isGameModeVersion1End == false)
                {
                    isGameModeVersion1End = true;

                    //停止計時
                    Timing.ReceiveTimingStatus(false);

                    //紀錄時間
                    Operate_Array.Add("在初級版中, 使用者正確完成20個步驟花了" + Timing.GetTime() + "。");

                    CupTime_Array.Add("不用計時");
                }

                //完成了但要把最後一杯做完
                if (cupMaking == false)
                {
                    //停止遊戲
                    isComplete = true;

                    //結算面板(名次\t編號\t使用時間)
                    questionText.text = Operate_Array[0] + "\n\n";

                    //發送API!!!!!!!!!!!!!!!!!!!
                    string total_usage_time = Timing.GetTime(); // 使用時間
                    string steps_errors_per_cup = StepsErrorsPerCup(); // 每一杯各步驟錯誤次數
                    string steps_correct_errors = StepsCorrectErrors(); // 各步驟總正確/錯誤次數

                    APIManager.SendGame1(total_usage_time, steps_errors_per_cup, steps_correct_errors);

                    //清空
                    CupTimeTemp_Array.Clear();
                    CupErrorTemp_Array.Clear();
                }
            }

            //********************************************************************
            //                      判斷遊戲模式-進階版 
            //********************************************************************
            if (system_mode == "game" && game_mode_version == 2 && Timing.GetTime() == "0分1秒") //還要判斷是否5min內 
            {
                //停止遊戲、計時
                isComplete = true;
                Timing.ReceiveTimingStatus(false);

                Operate_Array.Add("在進階版中, 使用者在5分鐘內, 完成了" + Cup_Num + "杯咖啡!");
                questionText.text = ("在進階版中, 使用者在5分鐘內, 完成了" + Cup_Num + "杯咖啡!\n");

                // 補上沒做完的這一杯
                if (C1 != 0)
                    CupErrorTemp_Array.Add(step_1_error);
                if (C2 != 0)
                    CupErrorTemp_Array.Add(step_2_error);
                if (C3 != 0)
                    CupErrorTemp_Array.Add(step_3_error);
                if (C4 != 0)
                    CupErrorTemp_Array.Add(step_4_error);

                //發送API!!!!!!!!!!!!!!!!!!!                                                                        // 進階模式：
                int point = Cup_Num;                                                                                // 得分：完成一杯得一分
                string time_per_cup = TimesPerCup();                                                                // 每一杯製作時間
                string steps_errors_per_cup = StepsErrorsPerCup();                                                  // 每一杯各步驟錯誤次數
                string steps_correct_errors = StepsCorrectErrors();                                                 // 各步驟總正確/錯誤次數

                Debug.Log(TimesPerCup());
                APIManager.SendGame2(point, time_per_cup, steps_errors_per_cup, steps_correct_errors);

                //清空
                CupTimeTemp_Array.Clear();
                CupErrorTemp_Array.Clear();
            }

            //********************************************************************
            //                       判斷評量模式
            //********************************************************************
            if (system_mode == "evaluate" && Timing.GetTime() == "0分1秒") //還要判斷是否10min內 
            {
                isComplete = true; //遊戲停止

                Operate_Array.Add("使用者在10分鐘內, 完成了" + Cup_Num + "杯咖啡!");
                questionText.text = ("使用者在10分鐘內, 完成了" + Cup_Num + "杯咖啡!\n");

                // 補上沒做完的這一杯
                if (C1 != 0)
                    CupErrorTemp_Array.Add(step_1_error);
                if (C2 != 0)
                    CupErrorTemp_Array.Add(step_2_error);
                if (C3 != 0)
                    CupErrorTemp_Array.Add(step_3_error);
                if (C4 != 0)
                    CupErrorTemp_Array.Add(step_4_error);

                //發送API!!!!!!!!!!!!!!!!!!!                                                                        // 評量模式：缺「得分」、「每一杯製作時間」
                int point = Step;                                                                                   // 得分：步驟「首次」就正確得一分
                int total_cups = Cup_Num;                                                                           // 製作總杯數
                string time_per_cup = TimesPerCup();                                                                // 每一杯製作時間 
                string steps_errors_per_cup = StepsErrorsPerCup();                                                  // 每一杯各步驟錯誤次數
                string steps_correct_errors = StepsCorrectErrors();                                                 // 各步驟總正確/錯誤次數

                APIManager.SendEvaluate(point, total_cups, time_per_cup, steps_errors_per_cup, steps_correct_errors);

                //清空
                CupTimeTemp_Array.Clear();
                CupErrorTemp_Array.Clear();

                Timing.ReceiveTimingStatus(false); //停止計時
            }
        }
    }
    // 輸出結果
    private string StepsErrorsPerCup()
    {
        string result = "";
        int count = 0;

        for (int i = 0; i < CupErrorTemp_Array.Count; i++)
        {
            int cupIndex = i / 4;
            int cupStep = CupErrorTemp_Array[i];

            if (system_mode == "game" && game_mode_version == 1)
            {
                if (cupStep == 0)
                    count++;
                if (count > 20)
                    break;
            }

            if (result != "" && i % 4 == 0)
                result += ", \n";
            if (i % 4 == 0)
                result += $"第{cupIndex + 1}杯:";
            result += $" {cupStep}";
        }

        return result;
    }


    private string TimesPerCup()
    {
        StringBuilder resultBuilder = new StringBuilder();

        for (int i = 0; i < CupTimeTemp_Array.Count - 1; i++)
        {
            string[] currentTimeParts = CupTimeTemp_Array[i].Split('分');
            string[] nextTimeParts = CupTimeTemp_Array[i + 1].Split('分');

            int currentMinutes = int.Parse(currentTimeParts[0]);
            int currentSeconds = int.Parse(currentTimeParts[1].TrimEnd('秒'));
            int nextMinutes = int.Parse(nextTimeParts[0]);
            int nextSeconds = int.Parse(nextTimeParts[1].TrimEnd('秒'));

            int minutesDifference = currentMinutes - nextMinutes;
            int secondsDifference = currentSeconds - nextSeconds;

            // 如果秒數差為負值，需要補正
            if (secondsDifference < 0)
            {
                minutesDifference--;
                secondsDifference += 60;
            }

            resultBuilder.AppendLine($"第{i + 1}杯 : {minutesDifference}分{secondsDifference}秒");
        }

        return resultBuilder.ToString();
    }


    private string StepsCorrectErrors()
    {
        int[] correct = new int[4];
        int[] errors = new int[4];
        int count = 0;

        for (int i = 0; i < CupErrorTemp_Array.Count; i++)
        {
            int cupStep = CupErrorTemp_Array[i];

            if (system_mode == "game" && game_mode_version == 1)
            {
                if (cupStep == 0)
                    count++;
                if (count > 20)
                    break;
            }

            if (cupStep == 0)
                correct[i % 4]++;
            else
                errors[i % 4] += cupStep;
        }

        string result = $"大小: {correct[0]}/{errors[0]}, \n冰塊: {correct[1]}/{errors[1]}, \n品項: {correct[2]}/{errors[2]}, \n杯蓋: {correct[3]}/{errors[3]}";

        return result;
    }

    // 外部呼叫
    public string GetAnswer(string q)
    {
        if (q == "大小")
            return randomSize == "中杯" ? "coffee_cup_M" : "coffee_cup_L";
        if (q == "冰量")
            return randomIce;
        if (q == "品項")
            return randomSize + randomTemperature + randomItem;
        if (q == "模式")
            return system_mode;

        Debug.LogError("錯誤引用");
        return "ERROR";
    }
    public void ReceiveIceAmount(string amount)
    {
        iceAmount = amount;
    }
    public void ReceiveCoffeeType(string size, string temprature, string type)
    {
        coffeeSize = size; coffeeTemprature = temprature; coffeeType = type;
    }
    public void WrongTimes(string step)
    {
        //如果遊戲基礎已完成則不再計算錯誤次數
        if (!(Step >= 20 && (system_mode == "game" && game_mode_version == 1)))
        {
            if (step == "大小")
                step_1_error++;
            if (step == "冰量")
                step_2_error++;
            if (step == "品項")
                step_3_error++;
        }
        Debug.LogError("大小: 錯" + step_1_error + ", 冰量: 錯" + step_2_error + ", 品項: 錯" + step_3_error);
    }

    // 重新掃描、重新開始
    public void Remove()
    {
        //******************************************************
        //                    進度歸零
        //******************************************************
        C1 = 0; C2 = 0; C3 = 0; C4 = 0;
        coffeeSize = ""; coffeeTemprature = ""; coffeeType = ""; iceAmount = "";

        step_1_error = 0; step_2_error = 0; step_3_error = 0; step_4_error = 0;
        tf1 = 0; tf2 = 0; tf3 = 0;
        //重製咖啡杯底下的咖啡狀態
        cupDetection.Remove();

        //重製杯蓋狀態
        lid_M.gameObject.SetActive(false);
        lid_L.gameObject.SetActive(false);
    }
    public void Restart()
    {
        system_mode = ""; game_mode_version = 0;
        coffeeSize = ""; coffeeTemprature = ""; coffeeType = ""; iceAmount = "";
        Step = 0; Cup_Num = 0;
    }
}