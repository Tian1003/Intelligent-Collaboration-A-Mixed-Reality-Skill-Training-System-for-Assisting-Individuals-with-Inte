using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RestartManager : MonoBehaviour
{
    public Ask_questions Ask_questions;

    public void RestartGame()
    {
        Ask_questions.Restart();
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
