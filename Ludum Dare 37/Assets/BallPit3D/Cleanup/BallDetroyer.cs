using UnityEngine;
using System.Collections;

public class BallDetroyer : MonoBehaviour {

	void OnCollisionEnter(Collision other)
    {
        if(other.collider.tag == "Ball")
            Destroy(other.gameObject, 0.5f);
        if (other.collider.tag == "Player")
            other.transform.position = Vector3.zero;
    }
}
