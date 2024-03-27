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
        TextMeshPro.text = "�Ĥ@�^�X : \n\n�бƧ� 3 �Ӷ��Ʋ�!";
    }

    public void TestMode()
    {
        TextMeshPro.text = "�бƧ� 6 �Ӷ��Ʋ� !";
    }
}
