using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class BallCount : MonoBehaviour {

    private Text ballCountNumber;
    private BallBlock localBallBlock;
    void Start()
    {
        ballCountNumber = GetComponent<Text>();
        localBallBlock = FindObjectOfType<BallBlock>();
    }
	// Update is called once per frame
	void Update () {
        ballCountNumber.text = localBallBlock.totalBallCount.ToString();
	}
}
