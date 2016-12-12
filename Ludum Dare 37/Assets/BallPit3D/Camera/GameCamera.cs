using UnityEngine;
using System.Collections;

public class GameCamera : MonoBehaviour {

    public float rotationSpeed;
    public float maxOut;
    public float maxIn;

    private Player player;
    private Camera thisCamera;

    private Vector3 startingPosition;
    private Quaternion startingRotation;

	// Use this for initialization
	void Start () {
        player = FindObjectOfType<Player>();

        thisCamera = GetComponent<Camera>();

        //  Store the initial position and rotation of the camera at the start of the game
        startingPosition = transform.position;
        startingRotation = transform.rotation;
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

        //  Camera Zoom controls
        if (Input.GetAxis("Mouse ScrollWheel") > 0)
        {
            if(thisCamera.fieldOfView > maxIn)
                thisCamera.fieldOfView--;
        }
        if (Input.GetAxis("Mouse ScrollWheel") < 0)
        {
            if (thisCamera.fieldOfView < maxOut)
                thisCamera.fieldOfView++;
        }

        //  Reset camera position and roation by pressing spacebar
        if (Input.GetAxis("Jump") > 0)
        {
            transform.position = startingPosition;
            transform.rotation = startingRotation;
        }
    }
}
