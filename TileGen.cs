using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TileGen : MonoBehaviour
{
    GameObject[] planes;
    public int FloorSize;
    public int NumberOfTiles;
    private int tileRange;
    private float tileSize;
    private int loopCounter;
    float xPos, zPos;
    private void Start()
    {
        if(NumberOfTiles == 1)
        {
            tileRange = 1;
        }
        else
        {
            tileRange = NumberOfTiles * 2;
        }
        
        tileSize = ((float)FloorSize / (float)NumberOfTiles) * 0.1f;
        Debug.Log("tile range is " + tileRange);
        Debug.Log("TileSize is " + tileSize);
        planes = new GameObject[tileRange];
       
     
        GameObject cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
        cube.transform.localScale = new Vector3(FloorSize, 1, FloorSize);
        
        if(NumberOfTiles == 1)
        {
            loopCounter = 1;
        }
        else
        {
            loopCounter = tileRange / 2;
        }

        xPos = ((0 - (float)FloorSize / (float)2) + ((float)tileSize) * (float)5);
        Debug.Log("xPos is " + xPos);
        zPos = ((0 - (float)FloorSize / (float)2) + ((float)tileSize) * (float)5);
        Debug.Log("zPos " + zPos);

        for (int i = 0; i < loopCounter; i++)
        {
            for(int j = 0; j < loopCounter; j++)
            {
                planes[i] = GameObject.CreatePrimitive(PrimitiveType.Plane);
                planes[i].transform.localScale = new Vector3(tileSize, 1, tileSize);
                planes[i].transform.position = new Vector3(xPos, 0.5f, zPos);
                xPos += ((float)tileSize) * (float)10;
            }
            xPos -= ((float)tileSize) * (float)10 * loopCounter;
            zPos += ((float)tileSize) * (float)10;
    }
    }
}
