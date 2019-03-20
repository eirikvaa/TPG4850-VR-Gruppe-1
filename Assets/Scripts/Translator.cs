using System;
using System.Collections;
using System.Xml.Linq;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class Translator : MonoBehaviour
{

    //  This code is based on the tutorial at https://docs.microsoft.com/en-us/windows/mixed-reality/mr-azure-301

    //  This code takes a dictation result from the MicrophoneManager class and sends it to the Azure cloud for processing.

    //  Set a reachable translation instance for MicrophoneManager
    public static Translator instance;

    //  Set tokens and acess points for azure cloud user. Currently it is set to my personal user.
    private string translationTokenEndpoint = "https://api.cognitive.microsoft.com/sts/v1.0/issueToken";
    private string translationTextEndpoint = "https://api.microsofttranslator.com/v2/http.svc/Translate?";
    private const string ocpApimSubscriptionKeyHeader = "Ocp-Apim-Subscription-Key";
    private const string authorizationKey = "2716044350fa4e40972443effd8a52a2";  //  This may change as i understand things. Check before presentation.
    private string authorizationToken;

    //  languages set below are: English and Norwegian. Additional languages can be added.
    public enum Languages {en, no};
    public Languages from = Languages.en;
    public Languages to = Languages.no;

    // Translated text, this is displayed on screen and updated when translated reply is recieved.
    public Text translated;

    private void Awake()
    {
        instance = this;
    }

    //  Get authentication on start
    void Start()
    {
        StartCoroutine("GetTokenCoroutine", authorizationKey);
    }

    //  Authorizes the azure cloud such that a text can be sent for translation
    private IEnumerator GetTokenCoroutine(string key)
    {
        if (string.IsNullOrEmpty(key))
        {
            throw new InvalidOperationException("Authorization key not set.");
        }

        using (UnityWebRequest unityWebRequest = UnityWebRequest.Post(translationTokenEndpoint, string.Empty))
        {
            unityWebRequest.SetRequestHeader("Ocp-Apim-Subscription-Key", key);
            yield return unityWebRequest.SendWebRequest();
            long responseCode = unityWebRequest.responseCode;

            if (unityWebRequest.isNetworkError || unityWebRequest.isHttpError)
            {
                Debug.Log("Network error");
                yield return null;
            }
            else
            {
                Debug.Log("Authorized");
                authorizationToken = unityWebRequest.downloadHandler.text;
            }
        }

    }

    /*  Translate a text. This function sends the text in the parameter to azure cloud translation service and
     *  sets the translated subtitle text to the recieved result  */
    public IEnumerator TranslateWithUnityNetworking(string text)
    {
        //  Create translation query
        string queryString = string.Concat("text=", Uri.EscapeDataString(text), "&from=", from, "&to=", to);

        using (UnityWebRequest unityWebRequest = UnityWebRequest.Get(translationTextEndpoint + queryString))
        {
            //  Send request
            unityWebRequest.SetRequestHeader("Authorization", "Bearer " + authorizationToken);
            unityWebRequest.SetRequestHeader("Accept", "application/xml");
            yield return unityWebRequest.SendWebRequest();

            if (unityWebRequest.isNetworkError || unityWebRequest.isHttpError)
            {
                //  Log error
                Debug.Log(unityWebRequest.error);
                yield return null;
            }

            //  Translate the text
            string result = XElement.Parse(unityWebRequest.downloadHandler.text).Value;

            //  Set translated subtitle to result
            translated.text = result;
        }
    }
}
