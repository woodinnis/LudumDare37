using UnityEngine;
using System.Collections;

public class BallBlock : Ball {

    public int ballRowsLong;
    public int ballRowsWide;
    public int ballRowsHigh;

    public float spreadBallsApart;
    public GameObject ballToClone;

    private int p_ballRowsLong;
    private int p_ballRowsWide;
    private int p_ballRowsHigh;
    private float p_ballsSpawnSpread;

    [HideInInspector]
    public int totalBallCount;

    private GameObject[] getCount;

	// Use this for initialization
	void Start () {
        p_ballRowsLong = ballRowsLong;  //  X Axis
        p_ballRowsHigh = ballRowsHigh;  //  Y Axis
        p_ballRowsWide = ballRowsWide;  //  Z Axis
        p_ballsSpawnSpread = spreadBallsApart * 2;

        totalBallCount = 0;

        //  Establish the starting coordinates of the block
        float myX = transform.position.x;
        float myY = transform.position.y;
        float myZ = transform.position.z;

        //  Create a new block of balls
        //  X Axis
        for (int i = 0; i < p_ballRowsLong; i++)
        {
            //  Y Axis
            for(int j = 0; j < p_ballRowsHigh; j++)
            {
                //  Z Axis
                for(int k = 0; k < p_ballRowsWide; k++)
                {
                    float radius = ballToClone.GetComponent<SphereCollider>().radius * p_ballsSpawnSpread;
                    
                    Instantiate(ballToClone, new Vector3(myX + (i * radius), myY + ( j * radius), myZ + ( k * radius)), Quaternion.identity);
                }
            }
        }
        
	}

    void Update()
    {
        getCount = GameObject.FindGameObjectsWithTag("Ball");
        totalBallCount = getCount.Length;
    }
}
