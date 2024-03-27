using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LimitedTimeRace : MonoBehaviour
{
    public RandomObjectSpawner RandomObjectSpawner;
    public Level_successfully_disappears_objects Level_successfully_disappears_objects;
    public TimingBoard TimingBoard;
    public BtnEnd BtnEnd;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnClick()
    {
        Debug.Log("我點了限時賽");
        RandomObjectSpawner.LimitedTimeRace();
        Level_successfully_disappears_objects.LimitedTimeRace();
        TimingBoard.LimitedTimeRace();
        BtnEnd.LimitedTimeRace();
    }
}
