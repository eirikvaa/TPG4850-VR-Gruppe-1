using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Windows.Speech;
using UnityEngine.XR.WSA.Input;

public class test : MonoBehaviour
{

    DictationRecognizer _dr;

    public Text _subtitle;


    // Use this for initialization
    void Awake()
    {
        _dr = new DictationRecognizer();

        _dr.DictationHypothesis += _dr_hypothesis;

        _dr.DictationResult += _dr_result;

        _dr.DictationComplete += _dr_dictationComplete;

        _dr.Start();

        Debug.Log("init complete");
    }

    private void _dr_dictationComplete(DictationCompletionCause cause)
    {
        _dr.Stop();

        this._subtitle.text = "";
        Debug.Log("Dictation complete");
    }

    private void _dr_result(string text, ConfidenceLevel confidence)
    {
        this._subtitle.text = text;
        Debug.Log("Displaying result");
    }

    private void _dr_hypothesis(string text)
    {
        Debug.Log("Thinking...");
    }

    // Update is called once per frame
    void Update()
    {

    }
}
