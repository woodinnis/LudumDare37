using UnityEngine;
using System.Collections;

public class Dirt : MonoBehaviour {

    public Sprite[] dirtSprites;

    private Collider2D dirtCollider;
    private SpriteRenderer dirtSpriteRenderer;

	// Use this for initialization
	void Start ()
    {
        dirtCollider = GetComponent<Collider2D>();
        dirtSpriteRenderer = GetComponent<SpriteRenderer>();

        SetBallColour();
    }

    // Update is called once per frame
    void Update () {
	
	}

    void OnCollisionEnter2D(Collision2D otherCollider)
    {
        Debug.Log(otherCollider.collider.name);

        //  Switch the current sprite based on what is being collided with
        SwapSprites(otherCollider);
    }

    private void SwapSprites(Collision2D otherCollider)
    {
        if (otherCollider.collider.name == "Cleaner")
        {
            SetBallColour();
            //dirtSpriteRenderer.sprite = dirtSprites[1];
        }
        else if (otherCollider.collider.tag == "Dirt")
        {
            if (otherCollider.collider.GetComponent<SpriteRenderer>().sprite == dirtSprites[0])
                SetBallColour();
                //dirtSpriteRenderer.sprite = dirtSprites[0];
        }
    }

    private void SetBallColour()
    {
        int spriteIndex = Random.Range(0, dirtSprites.Length);
        dirtSpriteRenderer.sprite = dirtSprites[spriteIndex];
    }
}
