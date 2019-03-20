using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotate : MonoBehaviour {

    //  This simple script continuously rotates the GameObject it is attached to.
    //  Currently it is only attached to the thinking icon for better visual experience.

    float z;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    private void FixedUpdate()
    {
        z += Time.deltaTime * 100;
        transform.rotation = Quaternion.Euler(0, 0, z);
    }
}
