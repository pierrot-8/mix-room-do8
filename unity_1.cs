using UnityEngine;
using System.Collections;

public class Cylinder1 : MonoBehaviour {

	// Use this for initialization
	void Start () {
		//transform.position = new Vector3 (-20, 0, 0);
	
	}

	float a=0,b=0;
	// Update is called once per frame
	void Update () {

		/*a += 0.05f;
		b += 0.02f;

		transform.position = new Vector3 (b, Mathf.Sin(a*0.05f), 0);

		if (transform.position.x > 20) {}*/



		a += 0.05f;
		b += 0.05f;
		//transform.position = new Vector3 (b*0.08f, Mathf.Sin(a*0.05f), 0);
		transform.position = new Vector3 (Mathf.Cos(b*0.2f)*12.0f, Mathf.Sin(a*1.2f), 0);

		if (a >= 360) { a = 0; }

		if (b >= 360) {	b = 0; }

	}
}
