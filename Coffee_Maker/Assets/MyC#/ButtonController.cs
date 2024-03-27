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

    // �[�B
    public void SendIceToAsk_Questions()
    {
        TextMeshPro tmp = gameObject.GetComponentInChildren<TextMeshPro>();
        iceAmount = tmp.text;

        Ask_Questions.ReceiveIceAmount(iceAmount);
    }

    public void AddIce()
    {
        if (Ask_Questions.GetAnswer("�Ҧ�") == "evaluate")
        {
            if (Ask_Questions.GetAnswer("�B�q") != iceAmount)
                Ask_Questions.WrongTimes("�B�q");

            CupAction("Ice");
        }
        else // �о�&�C�� �������ܪ���@�אּ��
        {
            if (Ask_Questions.GetAnswer("�B�q") != iceAmount)
                Ask_Questions.WrongTimes("�B�q");
            else
                CupAction("Ice");
        }
    }

    // �[�@��
    public void SendCoffeeToAsk_Questions()
    {
        TextMeshPro tmp = gameObject.GetComponentInChildren<TextMeshPro>();
        string text = tmp.text;

        coffeeSize = text[0] + "�M";
        coffeeTemprature = text[1] + "��";
        coffeeType = text.Substring(2);

        Ask_Questions.ReceiveCoffeeType(coffeeSize, coffeeTemprature, coffeeType);
    }

    public void MoveCoffee()
    {
        string item = Ask_Questions.GetAnswer("�~��");

        string Size = item[0] + "�M";
        string Temprature = item[2] + "��";
        string Type = item.Substring(4);

        if (Ask_Questions.GetAnswer("�Ҧ�") == "evaluate")
        {
            if (Size != coffeeSize || Temprature != coffeeTemprature || Type != coffeeType)
                Ask_Questions.WrongTimes("�~��");

            CupAction("Coffee");
        }
        else // �о�&�C�� �������ܪ���@�אּ��
        {
            if (Size != coffeeSize || Temprature != coffeeTemprature || Type != coffeeType)
                Ask_Questions.WrongTimes("�~��");
            else
                CupAction("Coffee");
        }
    }

    private void CupAction(string action)
    {
        if (action == "Ice")
        {
            //����@�تM���A�[�J�B���ʵe
            coffee_cup_M.ReceiveAddIce(iceAmount);
            coffee_cup_L.ReceiveAddIce(iceAmount);

            //������B���O�A�}�ҿ�~�����O
            Panel.GetChild(0).gameObject.SetActive(false);
            Panel.GetChild(1).gameObject.SetActive(true);
        }
        if (action == "Coffee")
        {
            //����@�تM���A�@�ؤW�ɰʵe
            coffee_cup_M.ReceiveMoveCoffee(coffeeType);
            coffee_cup_L.ReceiveMoveCoffee(coffeeType);

            //����@�ؾ����A�ˤJ�@�ذʵe
            Transform Liquid = LiquidType.GetChild(ChangeText(coffeeType));
            anime_pour LiquidScripe = Liquid.GetComponent<anime_pour>();
            LiquidScripe.PourObject();

            //������~�����O
            Panel.GetChild(1).gameObject.SetActive(false);
        }
    }

    private int ChangeText(string type)
    {
        switch (type)
        {
            case "����":
                return 0;
            case "���K":
                return 1;
            case "�d���_��":
                return 2;
            default:
                Debug.LogError("�X�{���~���~��");
                return -1;
        }
    }
}
