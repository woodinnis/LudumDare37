using UnityEngine;
using System.Collections;

public class Ball : MonoBehaviour {

    public Material[] ballMaterials;

    private Collider ballCollider;
    private MeshRenderer ballMeshRenderer;

	// Use this for initialization
	void Start () {
        ballCollider = GetComponent<Collider>();
        ballMeshRenderer = GetComponent<MeshRenderer>();

        SetBallColour();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    private void SetBallColour()
    {
        int index = Random.Range(0, ballMaterials.Length);
        ballMeshRenderer.material = ballMaterials[index];
    }
}
