using UnityEngine;

namespace GamePlay
{
    public class _Camera
    {
        public _Camera(Camera cam, _DataCameraDefault data)
        {
            cam.orthographicSize = data.ValueOrthographicSizeCam;
            var width = cam.orthographicSize * 2 * cam.aspect;
            var fixSize = data.ValueOrthographicSizeCam / width * data.WidthDefaultCameraGamePlay;
            cam.orthographicSize = fixSize;
        }
    }
}