﻿using UnityEngine;
using System.Collections;

public class thirdPersonCamera : MonoBehaviour {

    private const float Y_ANGLE_MIN = 20.0f;
    private const float Y_ANGLE_MAX = 90.0f;

	public Transform lookAt;
    public Transform camTransform;

    private Camera cam;

    private float distance = 20.0f;
    private float currentX = 0.0f;
    private float currentY = 0.0f;
    private float sensitivityX = 4.0f;
    private float sensitivityY = 1.0f;

    private void Start()
    {
        camTransform = transform;
        cam = Camera.main;
    }

    private void Update()
    {
        currentX += Input.GetAxis("Mouse X");
        currentY += Input.GetAxis("Mouse Y");

        currentY = Mathf.Clamp(currentY, Y_ANGLE_MIN, Y_ANGLE_MAX);

        //  Camera Zoom controls
        if (Input.GetAxis("Mouse ScrollWheel") > 0)
        {
                cam.fieldOfView--;
        }
        if (Input.GetAxis("Mouse ScrollWheel") < 0)
        {
            cam.fieldOfView++;
        }

        cam.fieldOfView = Mathf.Clamp(cam.fieldOfView, 15, 60);


    }

    private void LateUpdate()
    {
        Vector3 dir = new Vector3(0, 0, -distance);
        Quaternion rotation = Quaternion.Euler(currentY, currentX, 0);
        camTransform.position = lookAt.position + rotation * dir;
        camTransform.LookAt(lookAt.position);
    }
}
