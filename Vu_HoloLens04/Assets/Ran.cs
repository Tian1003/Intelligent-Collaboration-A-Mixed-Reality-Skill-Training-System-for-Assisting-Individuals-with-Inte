using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ran : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public GameObject tmpObject;
    public float displayTime = 3f;

    private bool isDisplaying = false;

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space) && !isDisplaying)
        {
            StartCoroutine(DisplayObject());
        }
    }

    private IEnumerator DisplayObject()
    {
        isDisplaying = true;
        tmpObject.SetActive(true);  // ��ܪ���
        yield return new WaitForSeconds(displayTime);
        tmpObject.SetActive(false); // ���ê���
        isDisplaying = false;
    }
}







