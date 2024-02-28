using UnityEngine;

namespace GamePlay
{
    [System.Serializable]
    public class _DataCameraDefault
    {
        [SerializeField] private float _widthDefaultCameraGamePlay = 10.8f;
        [SerializeField] private float _valueOrthographicSizeCam = 9.6f;

        public float WidthDefaultCameraGamePlay => _widthDefaultCameraGamePlay;
        public float ValueOrthographicSizeCam => _valueOrthographicSizeCam;
    }
}