using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CupAnimetion : MonoBehaviour
{
    public GameObject cup_lid; // ImageTarget杯蓋
    private Transform MoveCoffeeOrIceObject;
    private Transform lid_legal; // Cup的杯蓋
    private float detectionDistance; // 杯蓋接近杯子的最小距离

    private void Start()
    {
        lid_legal = transform.Find("lid_legal");

        detectionDistance = 0.05f;
    }

    private void Update()
    {
        if (cup_lid.activeSelf)
        {
            float distance = Vector3.Distance(lid_legal.transform.position, cup_lid.transform.position); // 计算杯子与杯蓋之间的距离

            if (distance <= detectionDistance)
            {
                Transform Lid = transform.Find("CoffeeCup/Lid");
                Lid.gameObject.SetActive(true);
                cup_lid.SetActive(false);
            }
        }
    }

    public void ReceiveAddIce(string amount)
    {
        if (gameObject.activeSelf && amount != "不加冰")
        {
            SendAnimeMove("Ice", amount);
        }
    }

    public void ReceiveMoveCoffee(string type)
    {
        if (gameObject.activeSelf)
        {
            SendAnimeMove("CoffeeType", type);
        }
    }

    private void SendAnimeMove(string childName, string grandsonName)
    {
        string findName = ChangeText(grandsonName);
        MoveCoffeeOrIceObject = transform.Find(childName + "/" + findName);
        anime_move MoveCoffeeOrIceScripe = MoveCoffeeOrIceObject.GetComponent<anime_move>();
        MoveCoffeeOrIceScripe.MoveObject();
    }

    public string ChangeText(string type)
    {
        switch (type)
        {
            case "美式":
                return "Coffee";
            case "拿鐵":
                return "Latte";
            case "卡布奇諾":
                return "Cappuccino";
            case "中冰":
                return "MidiumIce";
            case "大冰":
                return "LargeIce";
            default:
                Debug.LogError("出現錯誤的品項");
                return "ERROR";
        }
    }
}
