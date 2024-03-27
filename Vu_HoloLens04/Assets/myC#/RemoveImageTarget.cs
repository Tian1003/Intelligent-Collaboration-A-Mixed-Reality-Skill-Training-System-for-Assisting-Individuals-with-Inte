using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

public class RemoveImageTarget : MonoBehaviour
{
    public GameObject ImageTargets, ImageTargetsTestMode;

    // Update is called once per frame
    public void Click()
    {
        if (ImageTargets.activeSelf)
        {
            ImageTargets.SetActive(false);
            Invoke(nameof(ReScanImageTargets), 1f);
        }
        if (ImageTargetsTestMode.activeSelf)
        {
            ImageTargetsTestMode.SetActive(false);
            Invoke(nameof(ReScanImageTargetsTestMode), 1f);
        }
        //StartCoroutine(SendHPToAPIAsync());
    }

    //IEnumerator SendHPToAPIAsync()
    //{
    //    var client = new HttpClient();
    //    var request = new HttpRequestMessage(HttpMethod.Post, "http://akai.org.tw/hp_mode_api.php");
    //    var content = new MultipartFormDataContent();
    //    content.Add(new StringContent("213380"), "user");
    //    content.Add(new StringContent("0分14秒"), "total_usage_time");
    //    content.Add(new StringContent("5"), "error_times");
    //    content.Add(new StringContent("1"), "last_checkpoint");
    //    content.Add(new StringContent("21"), "score");
    //    content.Add(new StringContent("第1次: 0分3秒, 錯2瓶. 第2次: 0分4秒, 錯2瓶. 第3次: 0分2秒, 錯2瓶. 第4次: 0分3秒, 錯2瓶. 第5次: 0分2秒, 錯2瓶."), "intervals_and_errors");
    //    request.Content = content;
    //    Debug.Log(request.Content);
    //    var response = client.SendAsync(request);
    //    Debug.Log(response);
    //    yield return null;
    //}

    private void ReScanImageTargets()
    {
        ImageTargets.SetActive(true);
    }

    private void ReScanImageTargetsTestMode()
    {
        ImageTargetsTestMode.SetActive(true);
    }
}
