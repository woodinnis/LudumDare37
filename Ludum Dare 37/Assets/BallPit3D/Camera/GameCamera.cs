using UnityEngine;
using System.Collections;

public class GameCamera : MonoBehaviour {

    public float rotationSpeed;

    private Player player;
	// Use this for initialization
	void Start () {
        player = FindObjectOfType<Player>();
	}
	
	// Update is called once per frame
	void Update () {
        
        //  Camera Rotation controls
        if(Input.GetAxis("Horizontal") < 0)
        {
            transform.RotateAround(player.transform.position, Vector3.up, rotationSpeed * Time.deltaTime);
        }
        if (Input.GetAxis("Horizontal") > 0)
        {
            transform.RotateAround(player.transform.position, Vector3.down, rotationSpeed * Time.deltaTime);
        }
        if (Input.GetAxis("Vertical") < 0)
        {
            transform.RotateAround(player.transform.position, Vector3.left, rotationSpeed * Time.deltaTime);
        }
        if (Input.GetAxis("Vertical") > 0)
        {
            transform.RotateAround(player.transform.position, Vector3.right, rotationSpeed * Time.deltaTime);
        }
    }
}
