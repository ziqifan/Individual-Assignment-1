﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;

public class PositionEditor : MonoBehaviour
{
    const string DLL_NAME = "Individual A1 VS";

    [DllImport(DLL_NAME)]
    private static extern int savePosition(float x, float y, float z);

    [DllImport(DLL_NAME)]
    private static extern float loadPositionX();

    [DllImport(DLL_NAME)]
    private static extern float loadPositionY();

    [DllImport(DLL_NAME)]
    private static extern float loadPositionZ();


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        //Debug.Log(transform.position);
        if (Input.GetKeyDown(KeyCode.X))
        {
            transform.position = new Vector3(loadPositionX(), loadPositionY(), loadPositionZ());
        }
        if (Input.GetKeyDown(KeyCode.Z))
        {
            Debug.Log(savePosition(transform.position.x, transform.position.y, transform.position.z));
        }
    }
}
