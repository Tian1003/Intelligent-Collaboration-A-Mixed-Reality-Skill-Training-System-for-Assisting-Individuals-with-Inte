using System.Collections;
using System.Collections.Generic;
using System.Net.Http;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.Networking;

public class RemoveImageTarget : MonoBehaviour
{
    public GameObject ImageTargets;
    public Ask_questions Ask_questions;

    public void Click()
    {
        ImageTargets.SetActive(false);
        Invoke(nameof(ReScanImageTargets), 1f);
    }

    private void ReScanImageTargets()
    {
        Ask_questions.Remove();
        ImageTargets.SetActive(true);
    }
}
