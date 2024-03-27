using System.Collections;
using UnityEngine;

public class CupDetection : MonoBehaviour
{
    public Ask_questions Ask_questions;
    public Transform CupM, CupL; // ImageTarget的兩個Cup物件

    private Transform Panel, CupWrongBoard, cup_legal_area; // CoffeeMaker底下的物件
    private Transform coffee_cup_M, coffee_cup_L; // CoffeeMaker > Maker底下的兩杯
    private Transform Ice, CoffeeType;

    private float detectionDistance = 0.05f; // 杯子接近咖啡机的最小距离
    private string tempCup = "", theCurrentCup = "";

    private string Mode = "not-evaluate";

    // 選擇模式
    public void EvaluateMode()
    {
        Mode = "evaluate";
    }

    //抓取物件
    private void Start()
    {
        Panel = transform.Find("Panel");
        CupWrongBoard = transform.Find("CupWrongBoard");
        cup_legal_area = transform.Find("Cube_cup_legal");
        coffee_cup_M = transform.Find("Maker/coffee_cup_M");
        coffee_cup_L = transform.Find("Maker/coffee_cup_L");
    }

    private void Update()
    {
        float MCupdistance, LCupdistance; // 距離

        // 中杯
        if (CupM.gameObject.activeSelf && coffee_cup_M.gameObject.activeSelf == false)
        {
            MCupdistance = Vector3.Distance(cup_legal_area.position, CupM.position);
            if (MCupdistance <= detectionDistance)
            {
                // 放入杯子
                coffee_cup_M.gameObject.SetActive(true); // 開啟中杯
                if (coffee_cup_L.gameObject.activeSelf) // 關閉大杯
                    coffee_cup_L.gameObject.SetActive(false);

                // 檢查對錯
                theCurrentCup = coffee_cup_M.name;
                if ((tempCup != theCurrentCup) && (theCurrentCup != Ask_questions.GetAnswer("大小")))
                    Ask_questions.WrongTimes("大小");
                tempCup = theCurrentCup; // 避免重複扣分
            }
        }

        //大杯
        if (CupL.gameObject.activeSelf && coffee_cup_L.gameObject.activeSelf == false)
        {
            LCupdistance = Vector3.Distance(cup_legal_area.position, CupL.position);
            if (LCupdistance <= detectionDistance)
            {
                // 放入杯子
                coffee_cup_L.gameObject.SetActive(true); //開啟大杯
                if (coffee_cup_M.gameObject.activeSelf) //關閉中杯
                    coffee_cup_M.gameObject.SetActive(false);

                // 檢查對錯
                theCurrentCup = coffee_cup_L.name;
                if ((tempCup != theCurrentCup) && (theCurrentCup != Ask_questions.GetAnswer("大小")))
                    Ask_questions.WrongTimes("大小");
                tempCup = theCurrentCup; // 避免重複扣分
            }
        }

        // 面板
        if (coffee_cup_M.gameObject.activeSelf || coffee_cup_L.gameObject.activeSelf)
        {
            if (Mode != "evaluate") // 教學&遊戲
            {
                bool isCorrectSize = theCurrentCup == Ask_questions.GetAnswer("大小");
                Panel.gameObject.SetActive(isCorrectSize);
                CupWrongBoard.gameObject.SetActive(!isCorrectSize);
            }
            else // 評量
                Panel.gameObject.SetActive(!string.IsNullOrEmpty(theCurrentCup));
        }
    }

    // 動畫重製
    public void ResetCupIngredient(Transform Cup) // 冰塊、咖啡液
    {
        // 冰塊
        Ice = Cup.transform.Find("Ice");
        for (int i = 0; i < Ice.childCount; i++)
        {
            Transform IceChildren = Ice.GetChild(i);
            anime_move IceChildrenScripe = IceChildren.GetComponent<anime_move>();
            IceChildrenScripe.ReturnOriginal();
        }

        // 咖啡液體
        CoffeeType = Cup.transform.Find("CoffeeType");
        for (int i = 0; i < CoffeeType.childCount; i++)
        {
            Transform CoffeeTypeChildren = CoffeeType.GetChild(i);
            anime_move CoffeeTypeChildrenScripe = CoffeeTypeChildren.GetComponent<anime_move>();
            CoffeeTypeChildrenScripe.ReturnOriginal();
        }
    }
    private IEnumerator ResetCoffeeMaker(float delayTime) // 咖啡機（杯子）
    {
        yield return new WaitForSeconds(delayTime);

        if (coffee_cup_M.gameObject.activeSelf || coffee_cup_L.gameObject.activeSelf)
        {
            CupM.parent.position = Vector3.right;
            CupL.parent.position = Vector3.right;

            coffee_cup_M.gameObject.SetActive(false);
            coffee_cup_L.gameObject.SetActive(false);
        }
    }

    //重製
    public void Remove()
    {
        if (gameObject.activeSelf)
        {
            //重製杯子狀態
            ResetCupIngredient(coffee_cup_M);
            ResetCupIngredient(coffee_cup_L);

            //重製面板
            Panel.GetChild(0).gameObject.SetActive(true);
            Panel.GetChild(1).gameObject.SetActive(false);
            Panel.gameObject.SetActive(false);

            //關閉咖啡機下的杯子
            coffee_cup_M.gameObject.SetActive(false);
            coffee_cup_L.gameObject.SetActive(false);

            theCurrentCup = "";
            tempCup = "";

            StartCoroutine(ResetCoffeeMaker(1f));
        }
    }
}
