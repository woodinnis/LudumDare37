using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

    public float moveSpeed;
    public float smoothTime;

    private Vector3 velocity = Vector3.zero;
    //  Variable declarations for movement
    private float journeyLength;
    private float distCovered;
    private float startTime;
    private Transform startPoint;
    private float fracJourney;
    private Vector3 newPosition;

    // Use this for initialization
    void Start () {

        //  Variable definitions for movement
        startTime = Time.time;
        startPoint = transform;
        newPosition = transform.position;
        fracJourney = 0f;
    }
	
	// Update is called once per frame
	void Update () {
        if (Input.GetButton("Fire1"))
        {
            journeyLength = Vector3.Distance(transform.position, Input.mousePosition);

            distCovered = (Time.time - startTime) * moveSpeed;
            startPoint = transform;

            fracJourney = distCovered / journeyLength;

            newPosition = CalculateWorldspaceFromMouseClick();
        }
        //  transform.position = Vector3.Lerp(startPoint.position, newPosition, fracJourney);
        transform.position = Vector3.SmoothDamp(startPoint.position, newPosition, ref velocity, smoothTime);

    }

    private static Vector3 CalculateWorldspaceFromMouseClick()
    {
        float mouseX = Input.mousePosition.x;
        float mouseY = Input.mousePosition.y;
        float distanceFromCamera = 10f;

        //  Get the camera information
        Camera localCamera;
        localCamera = FindObjectOfType<Camera>();

        //  Calculate the a screen position based on the the worldspace information from the mouse click
        Vector3 mouseSpacePos = new Vector3(mouseX, mouseY, distanceFromCamera);
        Vector3 newPosition = localCamera.ScreenToWorldPoint(mouseSpacePos);

        return newPosition;
    }
}
