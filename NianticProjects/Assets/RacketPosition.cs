using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RacketPosition : MonoBehaviour
{
    public GameObject ARCamera;
    public float DistanceFromCamera = 2.0f;
    public float heightOffset = 0.5f;

    void Update()
    {
        if (!ARCamera) return;
        var cameraTransform = ARCamera.transform;
        var RacketPosition = cameraTransform.position + cameraTransform.forward * DistanceFromCamera;
        RacketPosition.y = RacketPosition.y - heightOffset;
        this.gameObject.transform.position = RacketPosition;
    }
}
