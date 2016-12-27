using UnityEngine;
using System.Collections;

public class Ball : MonoBehaviour {

    public Material[] ballMaterials;

    private float clippingPlane = -5;

    private Collider ballCollider;
    private MeshRenderer ballMeshRenderer;

    // Use this for initialization
    void Start () {
        ballCollider = GetComponent<Collider>();
        ballMeshRenderer = GetComponent<MeshRenderer>();

        SetBallColour();
	}

    void OnCollisionEnter(Collision otherCollider)
    {
        //SetBallColour();
    }

    private void SetBallColour()
    {
        int index = Random.Range(0, ballMaterials.Length);
        ballMeshRenderer.material = ballMaterials[index];
    }

}
