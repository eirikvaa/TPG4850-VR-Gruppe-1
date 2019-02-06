using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SpriteFader : MonoBehaviour
{

    Image img;
    float fade = 1;
    public float fadeSpeed = 0.02f;

    private void Awake()
    {
        img = gameObject.GetComponent<Image>();
    }

    private void OnEnable()
    {
        fade = 0;
    }


    // Update is called once per frame
    void Update()
    {
        fade = fade + fadeSpeed;
        img.color = new Color(img.color.a, img.color.b, img.color.g, fade);
        
    }
}
