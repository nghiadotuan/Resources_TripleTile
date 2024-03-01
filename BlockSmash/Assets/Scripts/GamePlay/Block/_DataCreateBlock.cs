using Sirenix.OdinInspector;
using UnityEngine;

namespace GamePlay
{
    [System.Serializable]
    public class _DataCreateBlock
    {
        [SerializeField] private float _distance = 1.2f;
        [SerializeField] private float _scaleBlock = .5f;
        [SerializeField] private _DataGenBlockSO _dataGenBlock;

        [ShowInInspector] public Vector2[,] PosLocalEntityBlock { get; private set; }
        public _DataGenBlockSO DataGenBlock => _dataGenBlock;
        public float ScaleBlock => _scaleBlock;

        public void Init()
        {
            _dataGenBlock.Init();
            PosLocalEntityBlock = new Vector2[5, 5];
            const int centerIndex = 2;
            for (var i = 0; i != PosLocalEntityBlock.GetLength(1); i++)
            {
                var y = (i - centerIndex) * _distance;
                for (var j = 0; j != PosLocalEntityBlock.GetLength(0); j++)
                {
                    var x = (j - centerIndex) * _distance;
                    PosLocalEntityBlock[j, i] = new Vector2(x, y);
                }
            }
        }
    }
}