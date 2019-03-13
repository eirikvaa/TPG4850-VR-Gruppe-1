using System;
using System.Collections;
using System.Xml.Linq;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

public class Translator : MonoBehaviour
{
    public static Translator instance;
    private string translationTokenEndpoint = "https://api.cognitive.microsoft.com/sts/v1.0/issueToken";
    private string translationTextEndpoint = "https://api.microsofttranslator.com/v2/http.svc/Translate?";
    private const string ocpApimSubscriptionKeyHeader = "Ocp-Apim-Subscription-Key";

    // Personal key, might change as far as i understand it
    private const string authorizationKey = "2716044350fa4e40972443effd8a52a2";
    private string authorizationToken;

    // languages set below are: 
    // English 
    // Norwegian

    public enum Languages {en, no};
    public Languages from = Languages.en;
    public Languages to = Languages.no;

    // Translated text, updates when rely is returned
    public Text translated;

    private void Awake()
    {
        instance = this;
    }

    void Start()
    {
        StartCoroutine("GetTokenCoroutine", authorizationKey);
    }

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

    public IEnumerator TranslateWithUnityNetworking(string text)
    {
        string queryString = string.Concat("text=", Uri.EscapeDataString(text), "&from=", from, "&to=", to);

        using (UnityWebRequest unityWebRequest = UnityWebRequest.Get(translationTextEndpoint + queryString))
        {
            unityWebRequest.SetRequestHeader("Authorization", "Bearer " + authorizationToken);
            unityWebRequest.SetRequestHeader("Accept", "application/xml");
            yield return unityWebRequest.SendWebRequest();

            if (unityWebRequest.isNetworkError || unityWebRequest.isHttpError)
            {
                Debug.Log(unityWebRequest.error);
                yield return null;
            }

            // Translate the text
            string result = XElement.Parse(unityWebRequest.downloadHandler.text).Value;
            // Debug.Log(result);
            translated.text = result;
        }
    }
}
