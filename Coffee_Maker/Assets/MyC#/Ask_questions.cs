using UnityEngine;
using TMPro;
using Vuforia;
using System.Collections;
using System.Collections.Generic;
using SpeechLib;
using System.Text;

public class Ask_questions : MonoBehaviour
{
    //******************************************************
    //                      �]�w�Ѽ�
    //******************************************************
    public GameObject CoffeeMaker;
    public GameObject cup_lid; // �M�\
    public TMP_Text questionText;
    public Timer Timing;
    public APIManager APIManager;
    //public TMP_Text checkText;

    private Transform coffee_cup_M, coffee_cup_L; // CoffeeMaker > Maker���U����M
    private Transform lid_M, lid_L;
    private CupDetection cupDetection;

    private string question = "";
    private string randomOrder = "";
    private string s1 = "", s2 = "", s3 = "", s4 = "";

    private int C1, C2, C3, C4; //�M�l�j�p�B�~���B�ūסB�\�l

    private static string system_mode = "";     //�ϥΪ̿�ܪ��t�μҦ�
    private static int game_mode_version = 0;   //�ϥΪ̿�ܪ��C���Ҧ�����

    private string randomRequestPhrase, randomSize, randomTemperature, randomItem; //�D��
    private string randomIce;

    private static string coffeeSize, coffeeTemprature, coffeeType; //�ثe���~��
    private static string iceAmount;

    private int Step = 0;    //�p��B�J��
    private int Cup_Num = 0; //�p��M��

    private int step_1_error = 0, step_2_error = 0, step_3_error = 0, step_4_error = 0; //���~����
    private int tf1 = 0, tf2 = 0, tf3 = 0; //�O�_���L
    private int TimeTemp = 0;
    private static List<string> Mode_Array = new List<string>();        // �ϥΪ̿�ܪ��t�μҦ�, �ΰ}�C��}��s��
    private static List<string> Operate_Array = new List<string>();     // �ϥΪ̾ާ@�y�z, �ΰ}�C��}��s��
    private static List<string> CupTime_Array = new List<string>();     // ����C�M�l�ާ@�ɶ�, �ΰ}�C��}��s��
    private static List<string> CupTimeTemp_Array = new List<string>(); // �C�M�l�ާ@�ɶ�, �ΰ}�C��}��s��
    private static List<string> CupError_Array = new List<string>();        // ����ާ@���~�T��, �ΰ}�C��}��s��
    private static List<int> CupErrorTemp_Array = new List<int>();         // �C�M�l���~�T��, �ΰ}�C��}��s��

    private bool isComplete = false;
    private bool cupMaking = false;
    private bool isGameModeVersion1End = false;

    // ��ܼҦ�
    public void Receive_system_mode_teaching()
    {
        system_mode = "teaching";
        Mode_Array.Add("�оǼҦ�");

        //���p�ɼҦ�
        Timing.ReceiveMode(system_mode);
    }
    public void Receive_system_mode_game(int version)
    {
        system_mode = "game";
        Mode_Array.Add("�C���Ҧ�");

        //���p�ɼҦ�
        game_mode_version = version;
        if (game_mode_version == 1)
            Timing.ReceiveMode("game_mode_version_1");
        if (game_mode_version == 2)
            Timing.ReceiveMode("game_mode_version_2");
    }
    public void Receive_system_mode_evaluate()
    {
        system_mode = "evaluate";
        Mode_Array.Add("���q�Ҧ�");

        //���p�ɼҦ�
        Timing.ReceiveMode(system_mode);
    }

    // �쪫��
    void Start()
    {
        coffee_cup_M = CoffeeMaker.transform.Find("Maker/coffee_cup_M");
        coffee_cup_L = CoffeeMaker.transform.Find("Maker/coffee_cup_L");
        lid_M = coffee_cup_M.transform.Find("CoffeeCup/Lid");
        lid_L = coffee_cup_L.transform.Find("CoffeeCup/Lid");

        cupDetection = CoffeeMaker.GetComponent<CupDetection>();

        if (system_mode == "evaluate") //���P�_�Ҧ�
            cupDetection.EvaluateMode();

        NewOrder();
    }
    // �X�D
    private void NewOrder()
    {
        Remove();

        //******************************************************
        //                    �H�������D��
        //******************************************************
        string[] requestPhrases = new string[] { "�ڷQ�n", "�е���", "�ڭn�I", "" };
        string[] sizes = new string[] { "�j�M", "���M" };
        string[] temperatures = new string[] { "�B��", "����" };
        string[] items = new string[] { "����", "���K", "�d���_��" };

        randomRequestPhrase = requestPhrases[Random.Range(0, requestPhrases.Length)];
        randomSize = sizes[Random.Range(0, sizes.Length)];
        randomTemperature = temperatures[Random.Range(0, temperatures.Length)];
        randomItem = items[Random.Range(0, items.Length)];
        if (randomTemperature == "�B��")
            randomIce = (randomSize == "���M") ? "���B" : "�j�B";
        else
            randomIce = "���[�B";

        //******************************************************
        //                    ��s���O��T
        //******************************************************
        //voice = new SpVoice();
        //voice.Voice = voice.GetVoices(string.Empty, string.Empty).Item(0);
        //voice.Rate = 0;
        //voice.Volume = 100;
        randomOrder = "[�D��] : " + randomRequestPhrase + randomSize + randomTemperature + randomItem + "\n";
        // voice.Speak(randomOrder, SpeechVoiceSpeakFlags.SVSFlagsAsync);
        s1 = "�B�J(1): ���_" + randomSize + "���M�l";
        s2 = "�B�J(2): �I��" + randomIce + "�����s";
        s3 = "�B�J(3): �I��" + randomItem + "�����s";
        s4 = "�B�J(4): �\�W�M�\";

        if (questionText != null)
        {
            question = randomOrder + s1 + "\n" + s2 + "\n" + s3 + "\n" + s4;
        }
    }

    // �@���]Update�^
    private void Update()
    {
        //******************************************************
        //       checkText�e����ܥثe����&�U�������~����
        //******************************************************
        //if (checkText != null)
        //{
        //    int point = (Step >= 20) ? 20 : Step;
        //    checkText.text =
        //        "�ثe�o��: " + point + "\n" +
        //        "----���M���~����----" + "\n" +
        //        "�j�p: " + step_1_error + ", �B�q: " + step_2_error + ", �~��: " + step_3_error;
        //}

        //******************************************************
        //                   �P�_�ϥΪ̾ާ@�O�_���T
        //******************************************************
        if (!IsInvoking() && !isComplete)
        {
            //�M�l�O�_����
            if ((randomSize == "���M" && coffee_cup_M.gameObject.activeSelf == true) ||
                (randomSize == "�j�M" && coffee_cup_L.gameObject.activeSelf == true))
            {
                if (system_mode != "evaluate")
                {
                    //�}�l�s�@
                    if (system_mode == "game" && game_mode_version == 1)
                        cupMaking = true;

                    s1 = "�B�J(1): <color=green>���_" + randomSize + "���M�l</color>";
                    questionText.text = randomOrder + s1 + "\n" + s2;
                }

                // �ˬd�O���O�Ĥ@����
                if (C1 == -1)
                    tf1 = 1;
                if (tf1 == 0)
                {
                    Step++;
                    tf1 = 1;
                }
                C1 = 1;
            }
            else if ((randomSize == "���M" && coffee_cup_L.gameObject.activeSelf == true) ||
                     (randomSize == "�j�M" && coffee_cup_M.gameObject.activeSelf == true))
            {
                if (system_mode != "evaluate")
                {
                    s1 = "�B�J(1): <color=red>���_" + randomSize + "���M�l</color>";
                    questionText.text = randomOrder + s1;
                }
                C1 = -1;
            }
            else
            {
                if (system_mode != "evaluate")
                {
                    s1 = "�B�J(1): ���_" + randomSize + "���M�l";
                    questionText.text = randomOrder + s1;
                }
                C1 = 0;
            }
            //�B�q�O�_���
            if (randomIce == iceAmount)
            {
                if (system_mode != "evaluate")
                {
                    s2 = "�B�J(2): <color=green>�I��" + randomIce + "�����s</color>";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3;
                }
                if (C2 == -1)
                    tf2 = 1;
                if (tf2 == 0)
                {
                    Step++;
                    tf2 = 1;
                }
                C2 = 1;
            }
            else if (iceAmount != "")
            {
                if (system_mode != "evaluate")
                {
                    s2 = "�B�J(2): <color=red>�I��" + randomIce + "�����s</color>";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3;
                }
                C2 = -1;
            }
            else
            {
                if (system_mode != "evaluate")
                {
                    s2 = "�B�J(2): �I��" + randomIce + "�����s";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3;
                }
                C2 = 0;
            }
            //���~�O�_���
            if ((randomSize == coffeeSize) && (randomTemperature == coffeeTemprature) && (randomItem == coffeeType))
            {

                if (system_mode != "evaluate")
                {
                    s3 = "�B�J(3): <color=green>�I��" + randomItem + "�����s</color>";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3 + "\n" + s4;
                }
                if (C3 == -1)
                    tf3 = 1;
                if (tf3 == 0)
                {
                    Step++;
                    tf3 = 1;
                }
                C3 = 1;
            }
            else if (((coffeeSize != "") && (coffeeTemprature != "") && (coffeeType != "")) &&
                     ((randomSize != coffeeSize) || (randomTemperature != coffeeTemprature) || (randomItem != coffeeType)))
            {
                if (system_mode != "evaluate")
                {
                    s3 = "�B�J(3): <color=red>�I��" + randomItem + "�����s</color>";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3 + "\n" + s4;
                }
                C3 = -1;
            }
            else
            {
                if (system_mode != "evaluate")
                {
                    s3 = "�B�J(3): �I��" + randomItem + "�����s";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3 + "\n" + s4;
                }
                C3 = 0;
            }
            //���S���\�W�M�\
            if (lid_M.gameObject.activeSelf || lid_L.gameObject.activeSelf)
            {
                if (system_mode != "evaluate")
                {
                    // �����s�@
                    if (system_mode == "game" && game_mode_version == 1)
                        cupMaking = false;

                    s4 = "�B�J(4): <color=green>�\�W�M�\</color>";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3 + "\n" + s4;
                }
                C4 = 1;
                Step++;
                Debug.LogError("C1: " + C1 + ", C2: " + C2 + ", C3: " + C3 + ", C4: " + C4);
            }
            else
            {
                if (system_mode != "evaluate")
                {
                    s4 = "�B�J(4): �\�W�M�\";
                    questionText.text = randomOrder + s1 + "\n" + s2 + "\n" + s3 + "\n" + s4;
                }
                C4 = 0;
            }

            //�P�_�O�_����
            if (C1 != 0 && C2 != 0 && C3 != 0 && C4 != 0)
            {
                Cup_Num++;
                questionText.text = "����!!!";
                CupErrorTemp_Array.Add(step_1_error);
                CupErrorTemp_Array.Add(step_2_error);
                CupErrorTemp_Array.Add(step_3_error);
                CupErrorTemp_Array.Add(step_4_error);

                //if (C1 == -1)
                //    questionText.text += "\n���O�M�l�ؤo���F.";
                //if (C2 == -1)
                //    questionText.text += "\n���O�B�q���F.";
                //if (C3 == -1)
                //    questionText.text += "\n���O�~�����F.";

                Debug.LogError($"Cup_Num: {Cup_Num}, Step: {Step}, system_mode: {system_mode}, game_mode_version: {game_mode_version}");


                if (system_mode == "game" && game_mode_version == 2 && TimeTemp == 0)
                {
                    TimeTemp = 1;
                    CupTimeTemp_Array.Add("5��00��"); //�C�M�ɶ�
                }
                if (system_mode == "evaluate" && TimeTemp == 0)
                {
                    TimeTemp = 1;
                    CupTimeTemp_Array.Add("10��00��"); //�C�M�ɶ�
                }

                CupTimeTemp_Array.Add(Timing.GetTime()); //�C�M�ɶ�
                Debug.Log("Timing.GetTime()" + Timing.GetTime());

                Invoke(nameof(NewOrder), 3f);
            }
            else if (C1 == 0 && C2 == 0 && C3 == 0 && C4 == 0)
                questionText.text = question;

            //********************************************************************
            //                      �P�_�C���Ҧ�-��Ū�
            //********************************************************************
            if (Step >= 20 && system_mode == "game" && game_mode_version == 1)
            {
                if (Step == 20 && isGameModeVersion1End == false)
                {
                    isGameModeVersion1End = true;

                    //����p��
                    Timing.ReceiveTimingStatus(false);

                    //�����ɶ�
                    Operate_Array.Add("�b��Ū���, �ϥΪ̥��T����20�ӨB�J��F" + Timing.GetTime() + "�C");

                    CupTime_Array.Add("���έp��");
                }

                //�����F���n��̫�@�M����
                if (cupMaking == false)
                {
                    //����C��
                    isComplete = true;

                    //���⭱�O(�W��\t�s��\t�ϥήɶ�)
                    questionText.text = Operate_Array[0] + "\n\n";

                    //�o�eAPI!!!!!!!!!!!!!!!!!!!
                    string total_usage_time = Timing.GetTime(); // �ϥήɶ�
                    string steps_errors_per_cup = StepsErrorsPerCup(); // �C�@�M�U�B�J���~����
                    string steps_correct_errors = StepsCorrectErrors(); // �U�B�J�`���T/���~����

                    APIManager.SendGame1(total_usage_time, steps_errors_per_cup, steps_correct_errors);

                    //�M��
                    CupTimeTemp_Array.Clear();
                    CupErrorTemp_Array.Clear();
                }
            }

            //********************************************************************
            //                      �P�_�C���Ҧ�-�i���� 
            //********************************************************************
            if (system_mode == "game" && game_mode_version == 2 && Timing.GetTime() == "0��1��") //�٭n�P�_�O�_5min�� 
            {
                //����C���B�p��
                isComplete = true;
                Timing.ReceiveTimingStatus(false);

                Operate_Array.Add("�b�i������, �ϥΪ̦b5������, �����F" + Cup_Num + "�M�@��!");
                questionText.text = ("�b�i������, �ϥΪ̦b5������, �����F" + Cup_Num + "�M�@��!\n");

                // �ɤW�S�������o�@�M
                if (C1 != 0)
                    CupErrorTemp_Array.Add(step_1_error);
                if (C2 != 0)
                    CupErrorTemp_Array.Add(step_2_error);
                if (C3 != 0)
                    CupErrorTemp_Array.Add(step_3_error);
                if (C4 != 0)
                    CupErrorTemp_Array.Add(step_4_error);

                //�o�eAPI!!!!!!!!!!!!!!!!!!!                                                                        // �i���Ҧ��G
                int point = Cup_Num;                                                                                // �o���G�����@�M�o�@��
                string time_per_cup = TimesPerCup();                                                                // �C�@�M�s�@�ɶ�
                string steps_errors_per_cup = StepsErrorsPerCup();                                                  // �C�@�M�U�B�J���~����
                string steps_correct_errors = StepsCorrectErrors();                                                 // �U�B�J�`���T/���~����

                Debug.Log(TimesPerCup());
                APIManager.SendGame2(point, time_per_cup, steps_errors_per_cup, steps_correct_errors);

                //�M��
                CupTimeTemp_Array.Clear();
                CupErrorTemp_Array.Clear();
            }

            //********************************************************************
            //                       �P�_���q�Ҧ�
            //********************************************************************
            if (system_mode == "evaluate" && Timing.GetTime() == "0��1��") //�٭n�P�_�O�_10min�� 
            {
                isComplete = true; //�C������

                Operate_Array.Add("�ϥΪ̦b10������, �����F" + Cup_Num + "�M�@��!");
                questionText.text = ("�ϥΪ̦b10������, �����F" + Cup_Num + "�M�@��!\n");

                // �ɤW�S�������o�@�M
                if (C1 != 0)
                    CupErrorTemp_Array.Add(step_1_error);
                if (C2 != 0)
                    CupErrorTemp_Array.Add(step_2_error);
                if (C3 != 0)
                    CupErrorTemp_Array.Add(step_3_error);
                if (C4 != 0)
                    CupErrorTemp_Array.Add(step_4_error);

                //�o�eAPI!!!!!!!!!!!!!!!!!!!                                                                        // ���q�Ҧ��G�ʡu�o���v�B�u�C�@�M�s�@�ɶ��v
                int point = Step;                                                                                   // �o���G�B�J�u�����v�N���T�o�@��
                int total_cups = Cup_Num;                                                                           // �s�@�`�M��
                string time_per_cup = TimesPerCup();                                                                // �C�@�M�s�@�ɶ� 
                string steps_errors_per_cup = StepsErrorsPerCup();                                                  // �C�@�M�U�B�J���~����
                string steps_correct_errors = StepsCorrectErrors();                                                 // �U�B�J�`���T/���~����

                APIManager.SendEvaluate(point, total_cups, time_per_cup, steps_errors_per_cup, steps_correct_errors);

                //�M��
                CupTimeTemp_Array.Clear();
                CupErrorTemp_Array.Clear();

                Timing.ReceiveTimingStatus(false); //����p��
            }
        }
    }
    // ��X���G
    private string StepsErrorsPerCup()
    {
        string result = "";
        int count = 0;

        for (int i = 0; i < CupErrorTemp_Array.Count; i++)
        {
            int cupIndex = i / 4;
            int cupStep = CupErrorTemp_Array[i];

            if (system_mode == "game" && game_mode_version == 1)
            {
                if (cupStep == 0)
                    count++;
                if (count > 20)
                    break;
            }

            if (result != "" && i % 4 == 0)
                result += ", \n";
            if (i % 4 == 0)
                result += $"��{cupIndex + 1}�M:";
            result += $" {cupStep}";
        }

        return result;
    }


    private string TimesPerCup()
    {
        StringBuilder resultBuilder = new StringBuilder();

        for (int i = 0; i < CupTimeTemp_Array.Count - 1; i++)
        {
            string[] currentTimeParts = CupTimeTemp_Array[i].Split('��');
            string[] nextTimeParts = CupTimeTemp_Array[i + 1].Split('��');

            int currentMinutes = int.Parse(currentTimeParts[0]);
            int currentSeconds = int.Parse(currentTimeParts[1].TrimEnd('��'));
            int nextMinutes = int.Parse(nextTimeParts[0]);
            int nextSeconds = int.Parse(nextTimeParts[1].TrimEnd('��'));

            int minutesDifference = currentMinutes - nextMinutes;
            int secondsDifference = currentSeconds - nextSeconds;

            // �p�G��Ʈt���t�ȡA�ݭn�ɥ�
            if (secondsDifference < 0)
            {
                minutesDifference--;
                secondsDifference += 60;
            }

            resultBuilder.AppendLine($"��{i + 1}�M : {minutesDifference}��{secondsDifference}��");
        }

        return resultBuilder.ToString();
    }


    private string StepsCorrectErrors()
    {
        int[] correct = new int[4];
        int[] errors = new int[4];
        int count = 0;

        for (int i = 0; i < CupErrorTemp_Array.Count; i++)
        {
            int cupStep = CupErrorTemp_Array[i];

            if (system_mode == "game" && game_mode_version == 1)
            {
                if (cupStep == 0)
                    count++;
                if (count > 20)
                    break;
            }

            if (cupStep == 0)
                correct[i % 4]++;
            else
                errors[i % 4] += cupStep;
        }

        string result = $"�j�p: {correct[0]}/{errors[0]}, \n�B��: {correct[1]}/{errors[1]}, \n�~��: {correct[2]}/{errors[2]}, \n�M�\: {correct[3]}/{errors[3]}";

        return result;
    }

    // �~���I�s
    public string GetAnswer(string q)
    {
        if (q == "�j�p")
            return randomSize == "���M" ? "coffee_cup_M" : "coffee_cup_L";
        if (q == "�B�q")
            return randomIce;
        if (q == "�~��")
            return randomSize + randomTemperature + randomItem;
        if (q == "�Ҧ�")
            return system_mode;

        Debug.LogError("���~�ޥ�");
        return "ERROR";
    }
    public void ReceiveIceAmount(string amount)
    {
        iceAmount = amount;
    }
    public void ReceiveCoffeeType(string size, string temprature, string type)
    {
        coffeeSize = size; coffeeTemprature = temprature; coffeeType = type;
    }
    public void WrongTimes(string step)
    {
        //�p�G�C����¦�w�����h���A�p����~����
        if (!(Step >= 20 && (system_mode == "game" && game_mode_version == 1)))
        {
            if (step == "�j�p")
                step_1_error++;
            if (step == "�B�q")
                step_2_error++;
            if (step == "�~��")
                step_3_error++;
        }
        Debug.LogError("�j�p: ��" + step_1_error + ", �B�q: ��" + step_2_error + ", �~��: ��" + step_3_error);
    }

    // ���s���y�B���s�}�l
    public void Remove()
    {
        //******************************************************
        //                    �i���k�s
        //******************************************************
        C1 = 0; C2 = 0; C3 = 0; C4 = 0;
        coffeeSize = ""; coffeeTemprature = ""; coffeeType = ""; iceAmount = "";

        step_1_error = 0; step_2_error = 0; step_3_error = 0; step_4_error = 0;
        tf1 = 0; tf2 = 0; tf3 = 0;
        //���s�@�تM���U���@�ت��A
        cupDetection.Remove();

        //���s�M�\���A
        lid_M.gameObject.SetActive(false);
        lid_L.gameObject.SetActive(false);
    }
    public void Restart()
    {
        system_mode = ""; game_mode_version = 0;
        coffeeSize = ""; coffeeTemprature = ""; coffeeType = ""; iceAmount = "";
        Step = 0; Cup_Num = 0;
    }
}