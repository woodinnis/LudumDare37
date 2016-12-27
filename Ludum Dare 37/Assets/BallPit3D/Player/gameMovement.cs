using UnityEngine;
using System.Collections;

public class gameMovement : MonoBehaviour {

    public float speed = 3.0F;
    public float rotateSpeed = 3.0F;
    public float jumpSpeed = 8.0F;
    public float gravity = 20.0F;

    public Camera gameCamera;

    private Vector3 moveDirection = Vector3.zero;
    private Quaternion cameraRotation;

    
    // Update is called once per frame
    void Update () {

        cameraRotation = gameCamera.transform.localRotation;

        CharacterController controller = GetComponent<CharacterController>();
        /*
        transform.Rotate(0, Input.GetAxis("Horizontal") * rotateSpeed, 0);
        Vector3 forward = transform.TransformDirection(Vector3.forward);
        float curSpeed = speed * Input.GetAxis("Vertical");
        controller.SimpleMove(forward * curSpeed);
        */

        transform.localRotation = cameraRotation;

        if (controller.isGrounded)
        {
            moveDirection = new Vector3(Input.GetAxis("Horizontal"), 0, Input.GetAxis("Vertical"));
            moveDirection = transform.TransformDirection(moveDirection);
            moveDirection *= speed;
            if (Input.GetButton("Jump"))
                moveDirection.y = jumpSpeed;

        }
        moveDirection.y -= gravity * Time.deltaTime;
        controller.Move(moveDirection * Time.deltaTime);
        
    }
}
