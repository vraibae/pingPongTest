using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallDrop : MonoBehaviour
{
    public GameObject ballPrefab;
    public float dropHeight = 0.5f;
    //public float ballResetPoint = -200.0f;

    //How do I make it so the ball just resets every time that it falls below a particular height? 
    //void Update()
    //{
    //    if (ballPrefab.transform.position.y <= ballResetPoint)
    //    {
    //        Destroy(ballPrefab);
    //        this.Drop();
    //    }
    //}

    public void Drop()
    {
        var dropPosition = this.gameObject.transform.position;
        dropPosition.y = dropPosition.y + dropHeight;
        //dropPosition.z = dropPosition.z + 0.2f;
        //dropPosition.x = dropPosition.x + 0.5f;

        Instantiate(ballPrefab, dropPosition, Quaternion.identity);
    }
}
