using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class anime_pour : MonoBehaviour
{
    public float Speed; // 速度
    public float maxHeight; // 最大高度
    //public float minHeight; // 最小高度

    private float growthSpeed;
    private float shrinkSpeed;

    private bool isGrowing = false;
    private bool isShrinking = false;
    private Vector3 originalPosition, originalScale;

    void Start()
    {
        growthSpeed = Speed / 15;
        shrinkSpeed = Speed / 150;
        originalPosition = transform.position; // 在開始時保存初始位置
        originalScale = transform.localScale; // 保存初始縮放
    }

    public void PourObject()
    {
        gameObject.SetActive(true);
        isGrowing = true;
    }

    void Update()
    {
        if (isGrowing)
        {
            if (transform.localScale.y < maxHeight)
            {
                float newHeight = Mathf.Min(transform.localScale.y + Time.deltaTime * growthSpeed, maxHeight);
                transform.localScale = new Vector3(transform.localScale.x, newHeight, transform.localScale.z);
                transform.position += new Vector3(0, Time.deltaTime * -growthSpeed, 0); // 同時向下移動，以保持上方平面固定
            }
            else
            {
                isGrowing = false;
                isShrinking = true;
            }
        }
        else if (isShrinking)
        {
            if (transform.localScale.x > 0)
            {
                //float newHeight = Mathf.Max(transform.localScale.y - Time.deltaTime * shrinkSpeed, minHeight);
                float newWidthX = Mathf.Max(transform.localScale.x - Time.deltaTime * shrinkSpeed, 0);
                float newWidthZ = Mathf.Max(transform.localScale.z - Time.deltaTime * shrinkSpeed, 0);
                transform.localScale = new Vector3(newWidthX, transform.localScale.y, newWidthZ);
                //transform.localScale = new Vector3(newWidthX, newHeight, newWidthZ);
                //transform.position += new Vector3(0, Time.deltaTime * -shrinkSpeed, 0); // 同時向上移動，以保持下方平面固定
            }
            else
            {
                isShrinking = false;
                Invoke(nameof(BackOriginalPosition), 1f);
            }
        }
    }

    void BackOriginalPosition()
    {
        transform.position = originalPosition;
        transform.localScale = originalScale;
        gameObject.SetActive(false);
    }
}
