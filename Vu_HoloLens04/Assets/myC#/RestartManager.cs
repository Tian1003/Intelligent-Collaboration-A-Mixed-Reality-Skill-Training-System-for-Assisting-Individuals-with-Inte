using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RestartManager : MonoBehaviour
{
    public Teach TeachBanner;
    public RandomObjectSpawner RandomObjectSpawner;
    public Level_successfully_disappears_objects Level_successfully_disappears_objects;
    public TestModeRandomObjectSpawner TestModeRandomObjectSpawner;
    public TimingBoard TimingBoard;
    public BtnEnd BtnEnd;

    public void RestartGame()
    {
        TeachBanner.Restart();
        RandomObjectSpawner.Restart();
        //TestModeRandomObjectSpawner.Restart();
        Level_successfully_disappears_objects.Restart();
        TimingBoard.Restart();
        BtnEnd.Restart();
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
