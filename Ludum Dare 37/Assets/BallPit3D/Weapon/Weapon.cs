using UnityEngine;
using System.Collections;

public class Weapon : MonoBehaviour {

    public GameObject projectileIShoot;
    public Transform spawnPoint;

    private Vector3 myPosition;
    
	// Update is called once per frame
	void Update () {

        myPosition = transform.position;

        if (Input.GetMouseButton(0))
        {
            Fire();
        }
    }

    private void Fire()
    {
        Bullet bullet = (Bullet)Instantiate(projectileIShoot, spawnPoint.position, spawnPoint.rotation); //Instantiate(projectileIShoot, new Vector3(myPosition.x, myPosition.y, myPosition.z), Quaternion.identity);
        bullet.GetComponent<Rigidbody>().velocity = Vector3.forward * bullet.bulletVelocity;

        Destroy(bullet, 2.0f);
    }
}
