using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using TMPro;
using System.Net.Http;

public class APIManager : MonoBehaviour
{
    public TextMeshProUGUI Text;

    // 定义 API 的 URL
    private string apiUrl1 = "http://163.17.135.190:8080/MrStoreAPI/";
    private string apiUrl2 = "http://akai.org.tw/";

    // 定义使用者
    private static string user = "";

    //public void MyName()
    //{
    //    user = Text.text;
    //}

    public string MyId()
    {
        // 取得目前時間的小時和分鐘
        int currentHour = System.DateTime.Now.Hour;
        int currentMinute = System.DateTime.Now.Minute;

        // 生成兩位隨機碼（00~99）
        int randomCode = Random.Range(0, 100);

        // 將小時和分鐘組合成格式為 "HHMM-RR" 的字串
        string timeCode = currentHour.ToString("D2") + currentMinute.ToString("D2") + randomCode.ToString("D2");

        user = timeCode;

        return timeCode;
    }

    public void SendHP(string total_usage_time, int error_times, int last_checkpoint, int score, string intervals_and_errors)
    {
        total_usage_time = ChangeTime(total_usage_time);

        apiUrl1 += "hp_mode_api.php";
        apiUrl2 += "hp_mode_api.php";
        StartCoroutine(SendHPToAPI(apiUrl1, user, total_usage_time, error_times, last_checkpoint, score, intervals_and_errors));
        StartCoroutine(SendHPToAPI(apiUrl2, user, total_usage_time, error_times, last_checkpoint, score, intervals_and_errors));
    }

    // 練習模式－限時賽
    public void SendLimitedTime(string total_usage_time, string each_usage_time, string each_error_times, string intervals_and_errors)
    {
        total_usage_time = ChangeTime(total_usage_time);

        apiUrl1 += "time_mode_api.php";
        apiUrl2 += "time_mode_api.php";
        StartCoroutine(SendLimitedTimeToAPI(apiUrl1, user, total_usage_time, each_usage_time, each_error_times, intervals_and_errors));
        StartCoroutine(SendLimitedTimeToAPI(apiUrl2, user, total_usage_time, each_usage_time, each_error_times, intervals_and_errors));
    }

    // 評量模式
    public void SendTest(string total_usage_time, int error_times, string intervals_and_errors)
    {
        total_usage_time = ChangeTime(total_usage_time);

        apiUrl1 += "test_mode_api.php";
        apiUrl2 += "test_mode_api.php";
        StartCoroutine(SendTestToAPI(apiUrl1, user, total_usage_time, error_times, intervals_and_errors));
        StartCoroutine(SendTestToAPI(apiUrl2, user, total_usage_time, error_times, intervals_and_errors));
    }

    // 把時間從 XX:XX:XX(分鐘:秒:毫秒) --> X分X秒
    string ChangeTime(string time)
    {
        string[] timeComponents = time.Split(':');
        int minutes = int.Parse(timeComponents[0]);
        int seconds = int.Parse(timeComponents[1]);
        //int millisecond = int.Parse(timeComponents[2]);
        time = minutes.ToString() + "分" + seconds.ToString() + "秒";
        return time;
    }

    // 練習模式－生命賽 API
    IEnumerator SendHPToAPI(string apiUrl, string user, string total_usage_time, int error_times, int last_checkpoint, int score, string intervals_and_errors)
    {
        var client = new HttpClient();
        var request = new HttpRequestMessage(HttpMethod.Post, apiUrl);
        var content = new MultipartFormDataContent();
        content.Add(new StringContent(user), "user");
        content.Add(new StringContent(total_usage_time), "total_usage_time");
        content.Add(new StringContent(error_times.ToString()), "error_times");
        content.Add(new StringContent(last_checkpoint.ToString()), "last_checkpoint");
        content.Add(new StringContent(score.ToString()), "score");
        content.Add(new StringContent(intervals_and_errors), "intervals_and_errors");
        request.Content = content;
        Debug.Log(request.Content);
        var response = client.SendAsync(request);
        Debug.Log(response);
        yield return null;
    }

    // 練習模式－限時賽 API
    IEnumerator SendLimitedTimeToAPI(string apiUrl, string user, string total_usage_time, string each_usage_time, string each_error_times, string intervals_and_errors)
    {
        var client = new HttpClient();
        var request = new HttpRequestMessage(HttpMethod.Post, apiUrl);
        var content = new MultipartFormDataContent();
        content.Add(new StringContent(user), "user");
        content.Add(new StringContent(total_usage_time), "total_usage_time");
        content.Add(new StringContent(each_usage_time), "each_usage_time");
        content.Add(new StringContent(each_error_times), "each_error_times");
        content.Add(new StringContent(intervals_and_errors), "intervals_and_errors");
        request.Content = content;
        Debug.Log(request.Content);
        var response = client.SendAsync(request);
        Debug.Log(response);
        yield return null;
    }

    // 評量模式 API
    IEnumerator SendTestToAPI(string apiUrl, string user, string total_usage_time, int error_times, string intervals_and_errors)
    {
        var client = new HttpClient();
        var request = new HttpRequestMessage(HttpMethod.Post, apiUrl);
        var content = new MultipartFormDataContent();
        content.Add(new StringContent(user), "user");
        content.Add(new StringContent(total_usage_time), "total_usage_time");
        content.Add(new StringContent(error_times.ToString()), "error_times");
        content.Add(new StringContent(intervals_and_errors), "intervals_and_errors");
        request.Content = content;
        Debug.Log(request.Content);
        var response = client.SendAsync(request);
        Debug.Log(response);
        yield return null;
    }

}
