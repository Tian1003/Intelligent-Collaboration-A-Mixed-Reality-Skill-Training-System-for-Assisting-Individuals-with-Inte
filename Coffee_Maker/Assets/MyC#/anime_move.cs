using System.Collections;
using UnityEngine;

public class anime_move : MonoBehaviour
{
    public Vector3 newLocalPosition; // �n���ʪ��ت��a
    public Vector3 newScale; // �n�ܤj���ܤp

    private Vector3 startLocalPosition;
    private Vector3 startLocalScale;

    public float delayedTime = 0f; // ����ɶ�
    public float spendTime = 3f; // ���ʮɶ��h�[

    private bool isMoving = false;

    private void Start()
    {
        startLocalPosition = transform.localPosition;
        startLocalScale = transform.localScale;
    }

    public void MoveObject()
    {
        if (!isMoving)
        {
            isMoving = true;
            gameObject.SetActive(true); // �ҥΪ���
            StartCoroutine(StartMoveObject());
        }
    }

    public void ReturnOriginal()
    {
        if (gameObject.activeSelf)
        {
            transform.position = startLocalPosition;
            transform.localScale = startLocalScale;
            gameObject.SetActive(false); // �ҥΪ���
        }
    }

    IEnumerator StartMoveObject()
    {
        float timeElapsed = 0f;
        yield return new WaitForSeconds(delayedTime);

        while (timeElapsed < spendTime)
        {
            timeElapsed += Time.deltaTime;
            float perc = timeElapsed / spendTime;

            Vector3 targetPosition = Vector3.Lerp(startLocalPosition, newLocalPosition, perc);
            Vector3 targetScale = Vector3.Lerp(startLocalScale, newScale, perc);

            transform.localPosition = targetPosition;
            transform.localScale = targetScale;
            yield return null;
        }

        isMoving = false;
    }
}
