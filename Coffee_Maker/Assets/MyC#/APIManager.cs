using System.Collections;
using UnityEngine;
using System.Net.Http;
using UnityEngine.Networking;
using System.Collections.Generic;
using TMPro;

public class APIManager : MonoBehaviour
{
    // 外部物件
    public TMP_Text questionText; // 結算面板文字（要加上排名）

    // 定义 API 的 URL
    private readonly string localApiUrl = "http://127.0.0.1:8080/MrStoreAPI/";  // 我的電腦 http://127.0.0.1:8080/MrStoreAPI/
    private readonly string apiUrl1 = "http://163.17.135.190:8080/MrStoreAPI/"; // 研究室   http://163.17.135.190:8080/MrStoreAPI/
    private readonly string apiUrl2 = "http://akai.org.tw/";                    // 阿凱老師 http://akai.org.tw/

    // 製作user、second字串
    private string MyId()
    {
        int currentHour = System.DateTime.Now.Hour;
        int currentMinute = System.DateTime.Now.Minute;
        int randomCode = Random.Range(0, 100);

        // 將小時和分鐘組合成格式為 "HHMM-RR" 的字串
        string timeCode = currentHour.ToString("D2") + currentMinute.ToString("D2") + randomCode.ToString("D2");

        return timeCode;
    }
    private int ConvertTimeStringToSeconds(string timeString)
    {
        int minuteIndex = timeString.IndexOf("分");
        int secondIndex = timeString.IndexOf("秒");

        // 從字串中提取分和秒的部分
        string minutePart = timeString.Substring(0, minuteIndex);
        string secondPart = timeString.Substring(minuteIndex + 1, secondIndex - minuteIndex - 1);

        // 將分和秒轉換為整數
        int minutes = int.Parse(minutePart);
        int seconds = int.Parse(secondPart);

        int totalSeconds = minutes * 60 + seconds;

        return totalSeconds;
    }

    // 資料寫入（POST）
    public void SendGame1(string total_usage_time, string steps_errors_per_cup, string steps_correct_errors)
    {
        string user = MyId();
        int second = ConvertTimeStringToSeconds(total_usage_time);

        StartCoroutine(SendGame1ToAPI(apiUrl1, user, total_usage_time, steps_errors_per_cup, steps_correct_errors, second));
        //StartCoroutine(SendGame1ToAPI(apiUrl2, user, total_usage_time, steps_errors_per_cup, steps_correct_errors, second));
    }
    IEnumerator SendGame1ToAPI(string apiUrl, string user, string total_usage_time, string steps_errors_per_cup, string steps_correct_errors, int second)
    {
        // API
        string filename = "coffee_game_mode_version_1.php";
        string postUrl = apiUrl + filename;

        var client = new HttpClient();
        var request = new HttpRequestMessage(HttpMethod.Post, postUrl);
        var content = new MultipartFormDataContent
        {
            { new StringContent(user), "user" },
            { new StringContent(total_usage_time), "total_usage_time" },
            { new StringContent(steps_errors_per_cup), "steps_errors_per_cup" },
            { new StringContent(steps_correct_errors), "steps_correct_errors" },
            { new StringContent(second.ToString()), "second" }
        };
        //content.Add(new StringContent(user), "user");
        request.Content = content;
        Debug.Log(request.Content);
        var response = client.SendAsync(request);
        Debug.Log(response);
        yield return null;

        // 準備再發一個API出去（查找排名資訊）
        if (apiUrl == apiUrl1)
        {
            string getUrl = apiUrl + "coffee_get_rank.php";
            yield return new WaitForSeconds(1f);
            StartCoroutine(GetRank(getUrl, filename, user));
        }
    }

    public void SendGame2(int point, string time_per_cup, string steps_errors_per_cup, string steps_correct_errors)
    {
        string user = MyId();

        StartCoroutine(SendGame2ToAPI(apiUrl1, user, point, time_per_cup, steps_errors_per_cup, steps_correct_errors));
        //StartCoroutine(SendGame1ToAPI(apiUrl2, user, total_usage_time, steps_errors_per_cup, steps_correct_errors, second));
    }
    IEnumerator SendGame2ToAPI(string apiUrl, string user, int point, string time_per_cup, string steps_errors_per_cup, string steps_correct_errors)
    {
        // API
        string filename = "coffee_game_mode_version_2.php";
        string postUrl = apiUrl + filename;

        var client = new HttpClient();
        var request = new HttpRequestMessage(HttpMethod.Post, postUrl);
        var content = new MultipartFormDataContent
        {
            { new StringContent(user), "user" },
            { new StringContent(point.ToString()), "point" },
            { new StringContent(time_per_cup), "time_per_cup" },
            { new StringContent(steps_errors_per_cup), "steps_errors_per_cup" },
            { new StringContent(steps_correct_errors), "steps_correct_errors" }
        };
        //content.Add(new StringContent(user), "user");
        request.Content = content;
        Debug.Log(request.Content);
        var response = client.SendAsync(request);
        Debug.Log(response);
        yield return null;

        // 準備再發一個API出去（查找排名資訊）
        if (apiUrl == apiUrl1)
        {
            string getUrl = apiUrl + "coffee_get_rank.php";
            yield return new WaitForSeconds(1f);
            StartCoroutine(GetRank(getUrl, filename, user));
        }
    }

    public void SendEvaluate(int point, int total_cups, string time_per_cup, string steps_errors_per_cup, string steps_correct_errors)
    {
        string user = MyId();

        StartCoroutine(SendEvaluateToAPI(apiUrl1, user, point, total_cups, time_per_cup, steps_errors_per_cup, steps_correct_errors));
        //StartCoroutine(SendGame1ToAPI(apiUrl2, user, total_usage_time, steps_errors_per_cup, steps_correct_errors, second));
    }
    IEnumerator SendEvaluateToAPI(string apiUrl, string user, int point, int total_cups, string time_per_cup, string steps_errors_per_cup, string steps_correct_errors)
    {
        // API
        string filename = "coffee_evaluate.php";
        string postUrl = apiUrl + filename;

        var client = new HttpClient();
        var request = new HttpRequestMessage(HttpMethod.Post, postUrl);
        var content = new MultipartFormDataContent
        {
            { new StringContent(user), "user" },
            { new StringContent(point.ToString()), "point" },
            { new StringContent(total_cups.ToString()), "total_cups" },
            { new StringContent(time_per_cup), "time_per_cup" },
            { new StringContent(steps_errors_per_cup), "steps_errors_per_cup" },
            { new StringContent(steps_correct_errors), "steps_correct_errors" }
        };
        //content.Add(new StringContent(user), "user");
        request.Content = content;
        Debug.Log(request.Content);
        var response = client.SendAsync(request);
        Debug.Log(response);
        yield return null;

        // 準備再發一個API出去（查找排名資訊）
        if (apiUrl == apiUrl1)
        {
            string getUrl = apiUrl + "coffee_get_rank.php";
            yield return new WaitForSeconds(1f);
            StartCoroutine(GetRank(getUrl, filename, user));
        }
    }

    // 排行榜（GET）
    [System.Serializable]
    public class RankData
    {
        public string 名次;
        public string 編號;
        public string 使用時間;
        public string 得分;
    }
    [System.Serializable]
    public class RankDataWrapper
    {
        public List<RankData> rank;
    }
    IEnumerator GetRank(string apiUrl, string filename, string user)
    {
        // API
        string tableName = filename.Replace(".php", "");
        string newUrl = $"{apiUrl}?tableName={tableName}&user={user}";

        Debug.LogError("newUrl: " + newUrl);
        UnityWebRequest www = UnityWebRequest.Get(newUrl);
        yield return www.SendWebRequest(); //等待API執行結束

        // API成功與否?
        if (www.result != UnityWebRequest.Result.Success)
        {
            Debug.LogError("Error while fetching data: " + www.error);
        }
        else
        {
            // 取得回傳的資料
            string responseData = www.downloadHandler.text;
            Debug.LogError("Received data: " + responseData);

            // 解析 JSON 数据
            List<RankData> rankDataList = JsonUtility.FromJson<RankDataWrapper>("{\"rank\":" + responseData + "}").rank;

            // 製作結果字串
            string resultText;
            if (tableName == "coffee_game_mode_version_1")
                resultText = "名次\t\t編號\t\t使用時間\n";
            else
                resultText = "名次\t\t編號\t\t得分\n";

            foreach (RankData rankData in rankDataList)
            {
                if (rankData.編號 == user)
                {
                    // 當該筆資料為自己時變成綠字提示
                    if (tableName == "coffee_game_mode_version_1")
                        resultText += $"<color=green>{rankData.名次}\t\t{rankData.編號}\t{rankData.使用時間}\n</color>";
                    else
                        resultText += $"<color=green>{rankData.名次}\t\t{rankData.編號}\t{rankData.得分}\n</color>";
                }
                else
                {
                    if (tableName == "coffee_game_mode_version_1")
                        resultText += $"{rankData.名次}\t\t{rankData.編號}\t{rankData.使用時間}\n";
                    else
                        resultText += $"{rankData.名次}\t\t{rankData.編號}\t{rankData.得分}\n";
                }
            }
            double newFontSize = questionText.fontSize * 0.8; // 字體大小

            // 輸出
            questionText.text += $"<size={newFontSize}>{resultText}</size>";
        }
    }
}
