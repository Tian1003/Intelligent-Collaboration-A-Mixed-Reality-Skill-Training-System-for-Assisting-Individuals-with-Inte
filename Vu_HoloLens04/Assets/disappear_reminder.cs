using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class disappear_reminder : MonoBehaviour
{
    public TextMeshPro TextMeshPro;
    public GameObject buttonClose;

    private void OnEnable()
    {
        //Invoke(nameof(disappear_self), 3f);
        buttonClose.SetActive(true);
        Invoke(nameof(disappear_self), 100f);
    }

    void disappear_self()
    {
        gameObject.SetActive(false);

    }

    public void PractiseMode()
    {
        TextMeshPro.text = "第一回合 : \n\n請排序 3 個飲料盒!";
    }

    public void TestMode()
    {
        TextMeshPro.text = "請排序 6 個飲料盒 !";
    }
}
