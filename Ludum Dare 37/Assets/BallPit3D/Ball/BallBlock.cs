using UnityEngine;
using System.Collections;

public class BallBlock : Ball {

    public int ballsPerRow;
    public float blockStartingX;
    public float blockStartingY;
    public float spreadBallsApart;
    public GameObject ballToClone;

    private int p_ballsPerRow;
    private float p_ballsSpawnSpread;
    private float p_startingX;
    private float p_startingY;

	// Use this for initialization
	void Start () {
        p_ballsPerRow = ballsPerRow;
        p_ballsSpawnSpread = spreadBallsApart * 2;

        //  Create a new block of balls
        for(int i = 0; i < p_ballsPerRow; i++)
        {
            for(int j = 0; j < p_ballsPerRow; j++)
            {
                for(int k = 0; k < p_ballsPerRow; k++)
                {
                    float radius = ballToClone.GetComponent<SphereCollider>().radius * p_ballsSpawnSpread;

                    Instantiate(ballToClone, new Vector3(i * radius, j * radius, k * radius), Quaternion.identity);
                }
            }
        }
        
	}
}
