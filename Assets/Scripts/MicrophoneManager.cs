using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Windows.Speech;
using UnityEngine.XR.WSA.Input;

public class MicrophoneManager : MonoBehaviour
{

    DictationRecognizer _dr;

    public Text _subtitle;
    public Image _loading;
    public Image _complete;

    private bool thinking = false;
    private bool restarting = false;
    private float timer = 0;
    private float restartTimer = 0;


    // Use this for initialization
    void Awake()
    {

        _dr = new DictationRecognizer();

        _dr.DictationHypothesis += _dr_hypothesis;

        _dr.DictationResult += _dr_result;

        //_dr.DictationComplete += _dr_dictationComplete;

        _dr.Start();

        _loading.gameObject.SetActive(false);
        _complete.gameObject.SetActive(false);

        this._subtitle.text = "Start complete";

        Debug.Log("init complete");
    }

    private void _dr_dictationComplete(DictationCompletionCause cause)
    {
        Debug.Log("Dictation complete");
    }

    private void _dr_result(string text, ConfidenceLevel confidence)
    {
        StartCoroutine(Translator.instance.TranslateWithUnityNetworking(text));
        _loading.gameObject.SetActive(false);
        this._subtitle.text = text;
        Debug.Log("Displaying result");
        Debug.Log(confidence);

        _loading.gameObject.SetActive(false);
        _complete.gameObject.SetActive(true);
        thinking = false;
    }

    private void _dr_hypothesis(string text)
    {
        _complete.gameObject.SetActive(false);
        _loading.gameObject.SetActive(true);
        thinking = true;
        Debug.Log("Thinking...");
    }

    // Update is called once per frame
    void Update()
    {
        
        if (thinking)
        {
            timer += Time.deltaTime;
            if (timer > 10)
            {
                _loading.gameObject.SetActive(false);
                _complete.gameObject.SetActive(false);
                this._subtitle.text = "Failed to process, try again :)";
                restarting = true;
                thinking = false;
                _dr.Stop();
                timer = 0;
                Debug.Log("Thinking too long, restarting the application.");
            }
        } else if (restarting)
        {
            restartTimer += Time.deltaTime;
            if (restartTimer > 1.5)
            {
                restarting = false;
                _dr.Start();
                restartTimer = 0;
                Debug.Log("Application restarted.");
            }
        } else
        {
            timer = 0;
        }
    }
}
