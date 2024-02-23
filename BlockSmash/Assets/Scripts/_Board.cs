using System.Collections.Generic;
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

    private List<GameObject> _listBlocks;
    private const float _SQUARE_DISTANCE = .35f;

    public static _Board Instance;

    private void Awake()
    {
        Instance = this;
    }

    [Button]
    private void CreateBlocks()
    {
        _listBlocks = new List<GameObject>();
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
        var block = Instantiate(_block, pos, quaternion.identity, transform);
        block.name = $"Block_{x}x{y}";
        block.SetActive(false);
        var color = block.GetComponent<SpriteRenderer>().color;
        color.a = .68f;
        block.GetComponent<SpriteRenderer>().color = color;
        block.GetComponent<SpriteRenderer>().sortingOrder = 1;
        _listBlocks.Add(block);
    }

    private bool IsShowShadow(Vector3 pos1, Vector3 pos2)
    {
        var x = pos1.x - pos2.x;
        x *= x;
        var y = pos1.y - pos2.y;
        y *= y;
        var squareDistance = x + y;
        return squareDistance < _SQUARE_DISTANCE;
    }

    public (byte, byte) ShowShadowBlock(Vector3 pos)
    {
        for (var i = 0; i != _sizeFrame.y; i++)
        {
            for (var j = 0; j != _sizeFrame.x; j++)
            {
                var shadow = _listBlocks[i * (_sizeFrame.y - 1) + j];
                if (!IsShowShadow(pos, shadow.transform.position)) continue;
                shadow.SetActive(true);
                return ((byte) j, (byte) i);
            }
        }

        return (0, 0);
    }

    public GameObject GetShadow(byte x, byte y)
    {
        return _listBlocks[y * (_sizeFrame.y - 1) + x];
    }
}