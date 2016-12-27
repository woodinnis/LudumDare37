using UnityEngine;
using System.Collections;

public class Ball : MonoBehaviour {

    public Material[] ballMaterials;

    private MeshRenderer ballMeshRenderer;

    // Use this for initialization
    void Start () {

        ballMeshRenderer = GetComponent<MeshRenderer>();

        SetBallColour();
	}

    private void SetBallColour()
    {
        int index = Random.Range(0, ballMaterials.Length);
        ballMeshRenderer.material = ballMaterials[index];
    }

}
