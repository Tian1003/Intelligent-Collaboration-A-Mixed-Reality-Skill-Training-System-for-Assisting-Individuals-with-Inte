using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ButtonController : MonoBehaviour
{
    public Ask_questions Ask_Questions;
    public CupDetection CoffeeMaker;
    public CupAnimetion coffee_cup_M;
    public CupAnimetion coffee_cup_L;

    private Transform Panel, LiquidType;
    private string coffeeSize, coffeeTemprature, coffeeType, iceAmount;

    private void Start()
    {
        Panel = CoffeeMaker.transform.Find("Panel");
        LiquidType = CoffeeMaker.transform.Find("LiquidType");
    }

    // 加冰
    public void SendIceToAsk_Questions()
    {
        TextMeshPro tmp = gameObject.GetComponentInChildren<TextMeshPro>();
        iceAmount = tmp.text;

        Ask_Questions.ReceiveIceAmount(iceAmount);
    }

    public void AddIce()
    {
        if (Ask_Questions.GetAnswer("模式") == "evaluate")
        {
            if (Ask_Questions.GetAnswer("冰量") != iceAmount)
                Ask_Questions.WrongTimes("冰量");

            CupAction("Ice");
        }
        else // 教學&遊戲 給予提示直到作對為止
        {
            if (Ask_Questions.GetAnswer("冰量") != iceAmount)
                Ask_Questions.WrongTimes("冰量");
            else
                CupAction("Ice");
        }
    }

    // 加咖啡
    public void SendCoffeeToAsk_Questions()
    {
        TextMeshPro tmp = gameObject.GetComponentInChildren<TextMeshPro>();
        string text = tmp.text;

        coffeeSize = text[0] + "杯";
        coffeeTemprature = text[1] + "的";
        coffeeType = text.Substring(2);

        Ask_Questions.ReceiveCoffeeType(coffeeSize, coffeeTemprature, coffeeType);
    }

    public void MoveCoffee()
    {
        string item = Ask_Questions.GetAnswer("品項");

        string Size = item[0] + "杯";
        string Temprature = item[2] + "的";
        string Type = item.Substring(4);

        if (Ask_Questions.GetAnswer("模式") == "evaluate")
        {
            if (Size != coffeeSize || Temprature != coffeeTemprature || Type != coffeeType)
                Ask_Questions.WrongTimes("品項");

            CupAction("Coffee");
        }
        else // 教學&遊戲 給予提示直到作對為止
        {
            if (Size != coffeeSize || Temprature != coffeeTemprature || Type != coffeeType)
                Ask_Questions.WrongTimes("品項");
            else
                CupAction("Coffee");
        }
    }

    private void CupAction(string action)
    {
        if (action == "Ice")
        {
            //執行咖啡杯中，加入冰塊動畫
            coffee_cup_M.ReceiveAddIce(iceAmount);
            coffee_cup_L.ReceiveAddIce(iceAmount);

            //關閉選冰面板，開啟選品項面板
            Panel.GetChild(0).gameObject.SetActive(false);
            Panel.GetChild(1).gameObject.SetActive(true);
        }
        if (action == "Coffee")
        {
            //執行咖啡杯中，咖啡上升動畫
            coffee_cup_M.ReceiveMoveCoffee(coffeeType);
            coffee_cup_L.ReceiveMoveCoffee(coffeeType);

            //執行咖啡機中，倒入咖啡動畫
            Transform Liquid = LiquidType.GetChild(ChangeText(coffeeType));
            anime_pour LiquidScripe = Liquid.GetComponent<anime_pour>();
            LiquidScripe.PourObject();

            //關閉選品項面板
            Panel.GetChild(1).gameObject.SetActive(false);
        }
    }

    private int ChangeText(string type)
    {
        switch (type)
        {
            case "美式":
                return 0;
            case "拿鐵":
                return 1;
            case "卡布奇諾":
                return 2;
            default:
                Debug.LogError("出現錯誤的品項");
                return -1;
        }
    }
}
