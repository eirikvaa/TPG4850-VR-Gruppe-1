using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Windows.Speech;
using UnityEngine.XR.WSA.Input;
using System.IO;
using System;

public class MicrophoneManager : MonoBehaviour
{

    // NOTE!! THIS REQUIRES AN INTERNET CONNECTION TO WORK SINCE SPEECH IS PROCESSED ON THE CLOUD
    
    //  Dictation instance
    DictationRecognizer _dr;

    //  Public variables, these are set in Unity editor
    public Text _subtitle;
    public Image _loading;
    public Image _complete;

    //  Private variables
    private bool thinking = false;
    private bool restarting = false;
    private float timer = 0;
    private float restartTimer = 0;
    private string path = @"C:\Users\chrec\Documents\School\EiT\TPG4850-VR-Gruppe-1\Assets\Scripts\log.txt";


    //  Runs when script awakes
    void Awake()
    {
        //  Initialize dictation and add functions
        _dr = new DictationRecognizer();
        _dr.DictationHypothesis += _dr_hypothesis;
        _dr.DictationResult += _dr_result;
        //_dr.DictationComplete += _dr_dictationComplete;
        _dr.Start();

        //  Set icons to inactive (not displayed)
        _loading.gameObject.SetActive(false);
        _complete.gameObject.SetActive(false);

        //  Update text and log sucessful start
        this._subtitle.text = "Start complete";
        Debug.Log("init complete");

        //  Start log
        using (StreamWriter sw = File.AppendText(path))
        {
            string timeStamp = DateTime.UtcNow.ToString();
            string text = "============================== Session start ==============================";
            string log = timeStamp + ": " + text + "\n";
            sw.WriteLine(log);
        }
    }


    /*  This function is run when dictation is complete, for our case we want to run it continuously,
     *  therefore we do not ever wish to reach this function. This is why it is disabled in awake()  */
    private void _dr_dictationComplete(DictationCompletionCause cause)
    {
        Debug.Log("Dictation complete");
    }


    /*  This function is called when the dication recognizer returns a result. The resulting text
     *  is passed in the function as string text and the confidence is passed as ConfidenceLevel. 
     * 
     *  The function starts a coroutine that sets the translated text. It also sets the regular subtitle text 
     *  to the resul of the dictation. */
    private void _dr_result(string text, ConfidenceLevel confidence)
    {
        //  Get translated subtitle
        StartCoroutine(Translator.instance.TranslateWithUnityNetworking(text));

        //  Disable loading and display success icon
        _loading.gameObject.SetActive(false);
        _complete.gameObject.SetActive(true);

        //  Update regular subtitle
        this._subtitle.text = text;

        //  Get time stamp for text
        string timeStamp = DateTime.UtcNow.ToString();
        string log = timeStamp + ": " + text + "\n";

        //  Write result to log
        using (StreamWriter sw = File.AppendText(path))
        {
            sw.WriteLine(log);
        }

        //  Log result and confidence
        Debug.Log("Displaying result");
        Debug.Log(confidence);
    
        //  Disable the thinking timer
        thinking = false;
    }
    
    /*  This function is called when the dictation recognizer hears percieved speech. It then processes
     *  the sound to create a hypothesis which is processed on the cloud.  */
    private void _dr_hypothesis(string text)
    {
        //  If the complete icon is active, deactivate it. Activate thinking icon
        _complete.gameObject.SetActive(false);
        _loading.gameObject.SetActive(true);

        //  Enable the thinking timer
        thinking = true;

        //  Log information
        Debug.Log("Thinking...");
    }


    //  Close and save log on quit
    void OnApplicationQuit()
    {
        using (StreamWriter sw = File.AppendText(path))
        {
            string timeStamp = DateTime.UtcNow.ToString();
            string text = "============================== Session closed ==============================";
            string log = timeStamp + ": " + text + "\n\n\n";
            sw.WriteLine(log);
        }
    }

    // Update is called once per frame
    void Update()
    {
        /*  This loop restarts the dictation recognizer if it thinks for more than 10 seconds. 
         *  The reason for this is that sometimes it gets stuck processing difficult information.  */
        if (thinking)
        {
            //  If thinking for more than 10 seconds, start shutdown
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
            //  After shutdown, start again after 1.5 seconds
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
