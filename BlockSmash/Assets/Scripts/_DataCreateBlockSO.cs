using Sirenix.OdinInspector;
using UnityEngine;

[CreateAssetMenu(menuName = "Gameplay/Data Create Block")]
public class _DataCreateBlockSO : ScriptableObject
{
    [SerializeField] private float _distance = 1.24f;
    [ShowInInspector] private Vector2[,] _posLocalEntityBlock;
    

    public float DistanceX => _distance;
    public Vector2[,] PosLocalEntityBlock => _posLocalEntityBlock;

    [Button]
    public void Init()
    {
        _posLocalEntityBlock = new Vector2[5, 5];
        var centerIndex = 2;
        for (var i = 0; i != _posLocalEntityBlock.GetLength(1); i++)
        {
            var y = (i - centerIndex) * _distance;
            for (var j = 0; j != _posLocalEntityBlock.GetLength(0); j++)
            {
                var x = (j - centerIndex) * _distance;
                _posLocalEntityBlock[i, j] = new Vector2(x, y);
            }
        }
    }
}