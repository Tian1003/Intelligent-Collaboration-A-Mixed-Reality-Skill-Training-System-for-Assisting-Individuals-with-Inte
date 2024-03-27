using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System;

public class Teach : MonoBehaviour
{
    public GameObject TeachBanner;
    public GameObject Error_message_board;
    public RestartManager RestartManager;
    public Material red, blue, green, gray;
    public TextMeshPro Error_message_board_Text;
    
    private TextMeshPro Description;
    private Transform Year1, Year2, Month1, Month2, Day1, Day2;
    private TextMeshPro Year1T, Year2T, Month1T, Month2T, Day1T, Day2T;
    private Renderer Year1R, Year2R, Month1R, Month2R, Day1R, Day2R;

    public static int YearClick = 0, MonthClick = 0, DayClick = 0;  //按鈕是否被按下
    public static int ModeYear_c = 0, ModeMonth_c = 0, ModeDay_c = 0; // 紀每關分數
    public static int YearMode_f = 0, MonthMode_f = 0, DayMode_f = 0;  //是否進過算分函數
    public static int y0 = 0, y1 = 0, y2 = 0, y3 = 0, m0 = 0, m1 = 0, m2 = 0, m3 = 0, d0 = 0, d1 = 0, d2 = 0, d3 = 0; //判斷進過函數了嗎
    public static int y_0 = 0, y_1 = 0, y_2 = 0, y_3 = 0, m_0 = 0, m_1 = 0, m_2 = 0, m_3 = 0, d_0 = 0, d_1 = 0, d_2 = 0, d_3 = 0; //判斷進過生成函數了嗎
    public static int Y1 = 0, Y2 = 0, M1, M2, D1, D2; //年份月日暫存

    void Start()
    {
        //抓物件
        Year1 = transform.Find("ButtonCollection/Year1");
        Year2 = transform.Find("ButtonCollection/Year2");
        Month1 = transform.Find("ButtonCollection/Month1");
        Month2 = transform.Find("ButtonCollection/Month2");
        Day1 = transform.Find("ButtonCollection/Day1");
        Day2 = transform.Find("ButtonCollection/Day2");

        //抓文字
        Description = transform.Find("Description").GetComponentInChildren<TextMeshPro>();
        Year1T = Year1.GetComponentInChildren<TextMeshPro>();
        Year2T = Year2.GetComponentInChildren<TextMeshPro>();
        Month1T = Month1.GetComponentInChildren<TextMeshPro>();
        Month2T = Month2.GetComponentInChildren<TextMeshPro>();
        Day1T = Day1.GetComponentInChildren<TextMeshPro>();
        Day2T = Day2.GetComponentInChildren<TextMeshPro>();

        //抓渲染器
        Year1R = Year1.transform.Find("BackPlate/Quad").GetComponent<Renderer>();
        Year2R = Year2.transform.Find("BackPlate/Quad").GetComponent<Renderer>();
        Month1R = Month1.transform.Find("BackPlate/Quad").GetComponent<Renderer>();
        Month2R = Month2.transform.Find("BackPlate/Quad").GetComponent<Renderer>();
        Day1R = Day1.transform.Find("BackPlate/Quad").GetComponent<Renderer>();
        Day2R = Day2.transform.Find("BackPlate/Quad").GetComponent<Renderer>();

        //變顏色參考這邊
        //ChengeMaterial(Month1R, gray);
        //ChengeMaterial(Month2R, gray);
        //ChengeMaterial(Day1R, gray);
        //ChengeMaterial(Day2R, gray);

        //  ReduceTransparency("ButtonCollection/Month1T/FrontPlate");
        //  ReduceTransparency("ButtonCollection/Month2T/FrontPlate");
        //  ReduceTransparency("ButtonCollection/Day2T/FrontPlate");
        //  ReduceTransparency("ButtonCollection/Day2T/FrontPlate");
    }

    void Update()
    {
        //判斷年
        if (ModeYear_c == 0)
        {
            ChengeMaterial(Year1R, green);
            ChengeMaterial(Year2R, green);
            ChengeMaterial(Month1R, gray);
            ChengeMaterial(Month2R, gray);
            ChengeMaterial(Day1R, gray);
            ChengeMaterial(Day2R, gray);
            Description.text = "[年份目前0分] \n 藍色方塊代表「年」，紅色方塊是「月」，綠色方塊是「日」。\n比較日期的方式，要先比較「年」。\n : 請看看哪一個「年」比較前面，請按下去 ";
            if (y_0 == 0)
            {
                YearMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                y_0 = 1;
            }
            if (y0 == 0)
            {
                if (YearClick != 0)
                {
                    YearMode();
                    if (ModeYear_c == 0)
                    {
                  
                        if (int.TryParse(Year1T.text, out int year1Value) && int.TryParse(Year2T.text, out int year2Value))
                        {
                            // 比較數字，將較小的字的顏色設置為綠色
                            if (year1Value < year2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + year1Value + "]比[" + year2Value + "]小，所以選擇[" + year1Value + "]。");
                                Year1T.color = Color.green;
                                Year2T.color = Color.white; // 可選：將Year2T的顏色設置為其他顏色
                            }
                            else if (year1Value > year2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + year2Value + "]比[" + year1Value + "]小，所以選擇[" + year2Value + "]。");
                                Year1T.color = Color.white; // 可選：將Year1T的顏色設置為其他顏色
                                Year2T.color = Color.green;
                            }
                        }
                        Invoke(nameof(Wait_3), 3f);
             
                        ModeYear_c = 0;
                    }
                    YearClick = 0;
                    YearMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                }
            }
        }
        if (ModeYear_c == 1)
        {
            ChengeMaterial(Year1R, green);
            ChengeMaterial(Year2R, green);
            ChengeMaterial(Month1R, gray);
            ChengeMaterial(Month2R, gray);
            ChengeMaterial(Day1R, gray);
            ChengeMaterial(Day2R, gray);

            Description.text = "[年份答對1分]\n比較日期的方式，要先比較「年」。\n : 請看看哪一個「年」比較前面，請按下去";
            if (y_1 == 0)
            {
                YearMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                y_1 = 1;
            }
            if (y1 == 0)
            {
                if (YearClick != 0)
                {
                 
                    YearMode();
                    if (ModeYear_c == 1)
                    {
                  
                        if (int.TryParse(Year1T.text, out int year1Value) && int.TryParse(Year2T.text, out int year2Value))
                        {
                            // 比較數字，將較小的字的顏色設置為綠色
                            if (year1Value < year2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + year1Value + "]比[" + year2Value + "]小，所以選擇[" + year1Value + "]。");
                                Year1T.color = Color.green;
                                Year2T.color = Color.white; // 可選：將Year2T的顏色設置為其他顏色
                            }
                            else if (year1Value > year2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + year2Value + "]比[" + year1Value + "]小，所以選擇[" + year2Value + "]。");
                                Year1T.color = Color.white; // 可選：將Year1T的顏色設置為其他顏色
                                Year2T.color = Color.green;
                            }
                        }
                        Invoke(nameof(Wait_3), 3f);
                        ModeYear_c = 0;
                      
                    }
                    YearClick = 0;
                    YearMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                }
            }
        }
        if (ModeYear_c == 2)
        {
            ChengeMaterial(Year1R, green);
            ChengeMaterial(Year2R, green);
            ChengeMaterial(Month1R, gray);
            ChengeMaterial(Month2R, gray);
            ChengeMaterial(Day1R, gray);
            ChengeMaterial(Day2R, gray);
            Description.text = "[年份答對2分]\n比較日期的方式，要先比較「年」。\n : 請看看哪一個「年」比較前面，請按下去";
            if (y_2 == 0)
            {
                YearMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                y_2 = 1;
            }
            if (y2 == 0)
            {
                if (YearClick != 0)
                {
                    YearMode();
                    if (ModeYear_c == 2)
                    {
                  
                        if (int.TryParse(Year1T.text, out int year1Value) && int.TryParse(Year2T.text, out int year2Value))
                        {
                            // 比較數字，將較小的字的顏色設置為綠色
                            if (year1Value < year2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + year1Value + "]比[" + year2Value + "]小，所以選擇[" + year1Value + "]。");
                                Year1T.color = Color.green;
                                Year2T.color = Color.white; // 可選：將Year2T的顏色設置為其他顏色
                            }
                            else if (year1Value > year2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + year2Value + "]比[" + year1Value + "]小，所以選擇[" + year2Value + "]。");
                                Year1T.color = Color.white; // 可選：將Year1T的顏色設置為其他顏色
                                Year2T.color = Color.green;
                            }
                        }

                        Invoke(nameof(Wait_3), 3f);
                        ModeYear_c = 0;

                    }
                    YearClick = 0;
                    YearMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                }
            }
        }
        if (ModeYear_c == 3)
        {

            Description.text = "年份判斷完成";
        }

        //判斷月
        if (ModeMonth_c == 0 && ModeYear_c == 3)
        {
            ChengeMaterial(Year1R, gray);
            ChengeMaterial(Year2R, gray);
            ChengeMaterial(Month1R, green);
            ChengeMaterial(Month2R, green);
            ChengeMaterial(Day1R, gray);
            ChengeMaterial(Day2R, gray);
            Description.text = "[年份判斷完成 月份目前0分]\n當年份可以比較前後時，就不用再比較「月」跟「日」了！\n但是當年份一樣時，我們就要來比較「月」的前後！\n : 請看看哪一個「月」比較前面？請按下去";
            if (m_0 == 0)
            {
                MonthMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                m_0 = 1;
            }
            if (m0 == 0)
            {
                if (MonthClick != 0)
                {
                    MonthMode();
             
                    if (ModeMonth_c == 0)
                    {
                        if (int.TryParse(Month1T.text, out int Month1Value) && int.TryParse(Month2T.text, out int Month2Value))
                        {
                            // 比較數字，將較小的字的顏色設置為綠色
                            if (Month1Value < Month2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + Month1Value + "]比[" + Month2Value + "]小，所以選擇[" + Month1Value + "]。");
                                Month1T.color = Color.green;
                                Month2T.color = Color.white;
                            }
                            else if (Month1Value > Month2Value)
                            {

                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + Month2Value + "]比[" + Month1Value + "]小，所以選擇[" + Month2Value + "]。");
                                Month1T.color = Color.white;
                                Month2T.color = Color.green;
                            }
                        }
                        Invoke(nameof(Wait_3),3f);
                        ModeMonth_c = 0;
                       
                    }
                    MonthClick = 0;
                    MonthMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
               
                }
            }
        }
        if (ModeMonth_c == 1 && ModeYear_c == 3)
        {
            ChengeMaterial(Year1R, gray);
            ChengeMaterial(Year2R, gray);
            ChengeMaterial(Month1R, green);
            ChengeMaterial(Month2R, green);
            ChengeMaterial(Day1R, gray);
            ChengeMaterial(Day2R, gray);
            Description.text = "[月份答對1分]\n : 請看看哪一個「月」比較前面？請按下去";
            if (m_1 == 0)
            {
                MonthMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                m_1 = 1;
            }
            if (m1 == 0)
            {
                if (MonthClick != 0)
                {
                    MonthMode();
                    if (ModeMonth_c == 1)
                    {
                        if (int.TryParse(Month1T.text, out int Month1Value) && int.TryParse(Month2T.text, out int Month2Value))
                        {
                            // 比較數字，將較小的字的顏色設置為綠色
                            if (Month1Value < Month2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + Month1Value + "]比[" + Month2Value + "]小，所以選擇[" + Month1Value + "]。");
                                Month1T.color = Color.green;
                                Month2T.color = Color.white;
                            }
                            else if (Month1Value > Month2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + Month2Value + "]比[" + Month1Value + "]小，所以選擇[" + Month2Value + "]。");
                                Month1T.color = Color.white;
                                Month2T.color = Color.green;
                            }
                        }
                        Invoke(nameof(Wait_3), 3f);
                        ModeMonth_c = 0;

                    }
                    MonthClick = 0;
                    MonthMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                }
            }
        }
        if (ModeMonth_c == 2 && ModeYear_c == 3)
        {
            ChengeMaterial(Year1R, gray);
            ChengeMaterial(Year2R, gray);
            ChengeMaterial(Month1R, green);
            ChengeMaterial(Month2R, green);
            ChengeMaterial(Day1R, gray);
            ChengeMaterial(Day2R, gray);
            Description.text = "[月份答對2分]\n : 請看看哪一個「月」比較前面？請按下去";
            if (m_2 == 0)
            {
                MonthMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                m_2 = 1;
            }
            if (m2 == 0)
            {
                if (MonthClick != 0)
                {
                 
                    MonthMode();
                    if (ModeMonth_c == 2)
                    {
                        if (int.TryParse(Month1T.text, out int Month1Value) && int.TryParse(Month2T.text, out int Month2Value))
                        {
                            // 比較數字，將較小的字的顏色設置為綠色
                            if (Month1Value < Month2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + Month1Value + "]比[" + Month2Value + "]小，所以選擇[" + Month1Value + "]。");
                                Month1T.color = Color.green;
                                Month2T.color = Color.white;
                            }
                            else if (Month1Value > Month2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + Month2Value + "]比[" + Month1Value + "]小，所以選擇[" + Month2Value + "]。");
                                Month1T.color = Color.white;
                                Month2T.color = Color.green;
                            }
                        }
                        Invoke(nameof(Wait_3), 3f);
                        ModeMonth_c = 0;
                      
                    }
                    MonthClick = 0;
                    MonthMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                }
            }
        }
        if (ModeMonth_c == 3 && ModeYear_c == 3)
        {
            Description.text = "月份判斷完成";
        }

        //判斷日
        if (ModeDay_c == 0 && ModeYear_c == 3 && ModeMonth_c == 3)
        {
            ChengeMaterial(Year1R, gray);
            ChengeMaterial(Year2R, gray);
            ChengeMaterial(Month1R, gray);
            ChengeMaterial(Month2R, gray);
            ChengeMaterial(Day1R, green);
            ChengeMaterial(Day2R, green);
            Description.text = "[月份判斷完成 日期目前0分]\n當月份可以比較前後時，就不用再比較「日」了！\n但是當年份跟月份一樣時，我們就要來比較「日」的前後！\n : 請看看哪一個「日」比較前面？請按下去";
            if (d_0 == 0)
            {
                DayMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                d_0 = 1;
            }
            if (d0 == 0)
            {
                if (DayClick != 0)
                {
                    DayMode();
              
                    if (ModeDay_c == 0)
                    {
                     
                        if (int.TryParse(Day1T.text, out int Day1Value) && int.TryParse(Day2T.text, out int Day2Value))
                        {
                            // 比較數字，將較小的字的顏色設置為綠色
                            if (Day1Value < Day2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + Day1Value + "]比[" + Day2Value + "]小，所以選擇[" + Day1Value + "]。");
                                Day1T.color = Color.green;
                                Day2T.color = Color.white;
                            }
                            else if (Day1Value > Day2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + Day2Value + "]比[" + Day1Value + "]小，所以選擇[" + Day2Value + "]。");
                                Day1T.color = Color.white;
                                Day2T.color = Color.green;
                            }
                        }
                        Invoke(nameof(Wait_3), 3f);
                        ModeDay_c = 0;
                    

                    }
                    DayClick = 0;
                    DayMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                }
            }
        }
        if (ModeDay_c == 1 && ModeYear_c == 3 && ModeMonth_c == 3)
        {
            ChengeMaterial(Year1R, gray);
            ChengeMaterial(Year2R, gray);
            ChengeMaterial(Month1R, gray);
            ChengeMaterial(Month2R, gray);
            ChengeMaterial(Day1R, green);
            ChengeMaterial(Day2R, green);
            Description.text = "[日期答對1分]\n : 請看看哪一個「日」比較前面？請按下去";
            if (d_1 == 0)
            {
                DayMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                d_1 = 1;
            }
            if (d1 == 0)
            {
                if (DayClick != 0)
                {
                    DayMode();
                    if (ModeDay_c == 0)
                    {
                        if (int.TryParse(Day1T.text, out int Day1Value) && int.TryParse(Day2T.text, out int Day2Value))
                        {
                            // 比較數字，將較小的字的顏色設置為綠色
                            if (Day1Value < Day2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + Day1Value + "]比[" + Day2Value + "]小，所以選擇[" + Day1Value + "]。");
                                Day1T.color = Color.green;
                                Day2T.color = Color.white;
                            }
                            else if (Day1Value > Day2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + Day2Value + "]比[" + Day1Value + "]小，所以選擇[" + Day2Value + "]。");
                                Day1T.color = Color.white;
                                Day2T.color = Color.green;
                            }
                        }
                        Invoke(nameof(Wait_3), 3f);
                        ModeDay_c = 0;
                    

                    }
                    DayClick = 0;
                    DayMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                }
            }
        }
        if (ModeDay_c == 2 && ModeYear_c == 3 && ModeMonth_c == 3)
        {
            ChengeMaterial(Year1R, gray);
            ChengeMaterial(Year2R, gray);
            ChengeMaterial(Month1R, gray);
            ChengeMaterial(Month2R, gray);
            ChengeMaterial(Day1R, green);
            ChengeMaterial(Day2R, green);

            Description.text = "[日期答對2分]\n : 請看看哪一個「日」比較前面？請按下去";
            if (d_2 == 0)
            {
                DayMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                d_2 = 1;
            }
            if (d2 == 0)
            {
                if (DayClick != 0)
                {
                    DayMode();
                    if (ModeDay_c == 2)
                    {
               
                        if (int.TryParse(Day1T.text, out int Day1Value) && int.TryParse(Day2T.text, out int Day2Value))
                        {
                            // 比較數字，將較小的字的顏色設置為綠色
                            if (Day1Value < Day2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + Day1Value + "]比[" + Day2Value + "]小，所以選擇[" + Day1Value + "]。");
                                Day1T.color = Color.green;
                                Day2T.color = Color.white;
                            }
                            else if (Day1Value > Day2Value)
                            {
                                Error_message_board.SetActive(true);
                                Error_message_board_Text.text = ("因為[" + Day2Value + "]比[" + Day1Value + "]小，所以選擇[" + Day2Value + "]。");
                                Day1T.color = Color.white;
                                Day2T.color = Color.green;
                            }
                        }
                        Invoke(nameof(Wait_3), 2f);
                        ModeDay_c = 0;
                

                    }

                    DayClick = 0;
                    DayMode_R(ref Y1, ref Y2, ref M1, ref M2, ref D1, ref D2);
                }
            }
        }
        if (ModeDay_c == 3 && ModeYear_c == 3 && ModeMonth_c == 3)
        {
            Description.text = "[全部判斷完成!!!]";
            Invoke(nameof(EndTeach), 3f);
        }
    }

    int YearMode_R(ref int Y1, ref int Y2, ref int M1, ref int M2, ref int D1, ref int D2)
    {
        // 年份陣列
        int[] years = { 2022, 2023, 2024 };
        int randomIndex1 = UnityEngine.Random.Range(0, years.Length);
        Y1 = years[randomIndex1];
        // 生成第二個隨機索引，確保不和第一個索引相同
        int randomIndex2;
        do
        {
            randomIndex2 = UnityEngine.Random.Range(0, years.Length);
        } while (randomIndex2 == randomIndex1);
        Y2 = years[randomIndex2];

        M1 = UnityEngine.Random.Range(1, 13);
        // 生成第二個隨機索引，確保不和第一個索引相同，並在M1的基礎上再加減2
        M2 = UnityEngine.Random.Range(1, 13);
        while (M2 == M1)
        {
            M2 = UnityEngine.Random.Range(1, 13);
        }

        D1 = UnityEngine.Random.Range(1, 29);
        D2 = UnityEngine.Random.Range(1, 29);
        while (D2 == D1)
        {
            D2 = UnityEngine.Random.Range(1, 29);
        }
        Year1T.text = $"{Y1}";
        Year2T.text = $"{Y2}";
        Month1T.text = $"{M1}";
        Month2T.text = $"{M2}";
        Day1T.text = $"{D1}";
        Day2T.text = $"{D2}";
        Debug.Log("YearMode_R" + Y1 + Y2 + "\n");
        // 如果需要返回一個整數，可以修改這裡的返回值
        return Y1 + Y2 + M1 + M2 + D1 + D2;
    }
    int MonthMode_R(ref int Y1, ref int Y2, ref int M1, ref int M2, ref int D1, ref int D2)
    {
        // 年份陣列
        int[] years = { 2022, 2023, 2024 };
        // (年)生成第一個隨機索引
        int randomIndex1 = UnityEngine.Random.Range(0, years.Length);
        Y1 = years[randomIndex1];
        Y2 = Y1;
        // (月) 生成第一個隨機索引，並在1-12之間再加減
        M1 = UnityEngine.Random.Range(1, 13);
        // 生成第二個隨機索引，確保不和第一個索引相同，並在M1的基礎上再加減2
        M2 = UnityEngine.Random.Range(1, 13);
        while (M2 == M1)
        {
            M2 = UnityEngine.Random.Range(1, 13);
        }
        D1 = UnityEngine.Random.Range(1, 29);
        D2 = UnityEngine.Random.Range(1, 29);
        while (D2 == D1)
        {
            D2 = UnityEngine.Random.Range(1, 29);
        }
        Year1T.text = $"{Y1}";
        Year2T.text = $"{Y2}";
        Month1T.text = $"{M1}";
        Month2T.text = $"{M2}";
        Day1T.text = $"{D1}";
        Day2T.text = $"{D2}";
        Debug.Log("MonthMode_R" + Y1 + Y2 + "\n");
        // 如果需要返回一個整數，可以修改這裡的返回值
        return Y1 + Y2 + M1 + M2 + D1 + D2;
    }
    int DayMode_R(ref int Y1, ref int Y2, ref int M1, ref int M2, ref int D1, ref int D2)
    {
        // 年份陣列
        int[] years = { 2022, 2023, 2024 };
        // (年)生成第一個隨機索引
        int randomIndex1 = UnityEngine.Random.Range(0, years.Length);
        Y1 = years[randomIndex1];
        Y2 = Y1;
        M1 = UnityEngine.Random.Range(1, 13);
        M2 = M1;
        D1 = UnityEngine.Random.Range(1, 29);
        D2 = UnityEngine.Random.Range(1, 29);
        while (D2 == D1)
        {
            D2 = UnityEngine.Random.Range(1, 29);
        }
        Year1T.text = $"{Y1}";
        Year2T.text = $"{Y2}";
        Month1T.text = $"{M1}";
        Month2T.text = $"{M2}";
        Day1T.text = $"{D1}";
        Day2T.text = $"{D2}";
        Debug.Log("DayMode_R" + Y1 + Y2 + "\n");
        // 如果需要返回一個整數，可以修改這裡的返回值
        return Y1 + Y2 + M1 + M2 + D1 + D2;
    }

    void YearMode()
    {
        if (Y1 < Y2)
        {
            if (YearClick == 1)
            {
                ModeYear_c++;
            }
        }
        else
        {
            if (YearClick == 2)
            {
                ModeYear_c++;
            }
        }
        Debug.Log("ModeYear_c" + ModeYear_c + "\n");
        YearClick = 0;
    }
    void MonthMode()
    {
        if (M1 < M2)
        {
            if (MonthClick == 1)
            {
                ModeMonth_c++;
            }
        }
        else
        {
            if (MonthClick == 2)
            {
                ModeMonth_c++;
            }
        }
        Debug.Log("ModeMonth_c" + ModeMonth_c + "\n");
        MonthClick = 0;
    }
    void DayMode()
    {
        Debug.Log("DayMode" + "\n");
        if (D1 < D2)
        {
            if (DayClick == 1)
            {
                ModeDay_c++;
            }
        }
        else
        {
            if (DayClick == 2)
            {
                ModeDay_c++;
            }
        }
        Debug.Log("ModeDay_c" + ModeDay_c + "\n");
        DayClick = 0;
    }

   

    public void IsYear1Pressed() // Year1T按鈕被按下
    {
        YearClick = 1;
        Debug.Log("YearClick" + YearClick + "\n");
    }
    public void IsYear2Pressed() // Year2T按鈕被按下
    {
        YearClick = 2;
        Debug.Log("YearClick" + YearClick + "\n");
    }
    public void IsMonth1Pressed() // Month1T按鈕被按下
    {
        if (ModeYear_c == 3)
        {
            MonthClick = 1;
        }
    }
    public void IsMonth2Pressed() // Month2T按鈕被按下
    {
        if (ModeYear_c == 3)
        {
            MonthClick = 2;
        }
    }
    public void IsDay1Pressed() // Day1T按鈕被按下
    {
        if (ModeYear_c == 3 && ModeMonth_c == 3)
        {
            DayClick = 1;
            Debug.Log("DayClick" + DayClick + "\n");
        }
    }
    public void IsDay2Pressed()  // Day2T按鈕被按下
    {
        if (ModeYear_c == 3 && ModeMonth_c == 3)
        {
            DayClick = 2;
            Debug.Log("DayClick" + DayClick + "\n");
        }
    }

    private void Wait_3()
    {
        Year1T.color = Color.white;
        Year2T.color = Color.white;
        Month1T.color = Color.white;
        Month2T.color = Color.white;
        Day1T.color = Color.white;
        Day2T.color = Color.white;
        Error_message_board.SetActive(false);


    }

    private void ChengeMaterial(Renderer obj, Material color)
    {
        // 获取对象上的原始材质
        Material originalMaterial = obj.material;

        // 替换对象的材质为新的材质
        obj.material = color;

        // 如果需要，销毁原始材质，避免内存泄漏
        Destroy(originalMaterial);
    }

    private void EndTeach()
    {
        RestartManager.RestartGame();
    }

    public void Restart()
    {
        YearClick = 0; MonthClick = 0; DayClick = 0;  //按鈕是否被按下
        ModeYear_c = 0; ModeMonth_c = 0; ModeDay_c = 0;
        YearMode_f = 0; MonthMode_f = 0; DayMode_f = 0;  //是否進過算分函數
        y0 = 0; y1 = 0; y2 = 0; y3 = 0; m0 = 0; m1 = 0; m2 = 0; m3 = 0; d0 = 0; d1 = 0; d2 = 0; d3 = 0; //判斷進過函數了嗎
        y_0 = 0; y_1 = 0; y_2 = 0; y_3 = 0; m_0 = 0; m_1 = 0; m_2 = 0; m_3 = 0; d_0 = 0; d_1 = 0; d_2 = 0; d_3 = 0; //判斷進過生成函數了嗎
        Y1 = 0; Y2 = 0; M1 = 0; M2 = 0; D1 = 0; D2 = 0; //年份月日暫存
    }
}