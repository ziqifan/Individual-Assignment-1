using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectMovement : MonoBehaviour
{
    public float MaxmiumSpeed = 4;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.position += (Vector3.forward * MaxmiumSpeed) * Input.GetAxis("Vertical") * Time.deltaTime;
        transform.position += (Vector3.right * MaxmiumSpeed) * Input.GetAxis("Horizontal") * Time.deltaTime;
    }
}
