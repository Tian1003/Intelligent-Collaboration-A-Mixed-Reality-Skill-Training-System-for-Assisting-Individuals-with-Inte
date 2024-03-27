using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TurnOnDescriptivePrompt : MonoBehaviour
{
    public RandomObjectSpawner RandomObjectSpawner;

    public void OnClick()
    {
        RandomObjectSpawner.TurnOnDescriptivePrompt();
    }

}
