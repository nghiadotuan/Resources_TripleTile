using Sirenix.OdinInspector;
using Unity.Mathematics;
using UnityEngine;

public class _Board : MonoBehaviour
{
    [SerializeField] private Vector2Int _sizeFrame = new(8, 8);
    [SerializeField] private Vector2 _posRoot;
    [SerializeField] private float _distanceX;
    [SerializeField] private float _distanceY;
    [SerializeField] private GameObject _block;

    [Button]
    private void CreateBlocks()
    {
        for (var i = 0; i != _sizeFrame.y; i++)
        {
            for (var j = 0; j != _sizeFrame.x; j++)
            {
                CreateBlock(j, i);
            }
        }
    }

    private void CreateBlock(int x, int y)
    {
        var pos = new Vector2(_posRoot.x + x * _distanceX, _posRoot.y + y * _distanceY);
        var block = Instantiate(_block, pos, quaternion.identity);
    }
}