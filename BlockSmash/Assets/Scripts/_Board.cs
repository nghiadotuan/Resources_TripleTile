using System.Collections.Generic;
using System.Diagnostics;
using Sirenix.OdinInspector;
using Unity.Mathematics;
using UnityEngine;
using Debug = UnityEngine.Debug;

public class _Board : MonoBehaviour
{
    [SerializeField] private Vector2Int _sizeFrame = new(8, 8);
    [SerializeField] private Vector2 _posRoot;
    [SerializeField] private float _distanceX;
    [SerializeField] private float _distanceY;
    [SerializeField] private GameObject _block;

    private List<GameObject> _listBlocks;
    [SerializeField] private float _DISTANCE = .5f;

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
        Debug.Log(Mathf.Abs(pos1.x - pos2.x) + "   "+ Mathf.Abs(pos1.y - pos2.y)  + "     "+ pos1 + "    "+ pos2);
        if (Mathf.Abs(pos1.x - pos2.x) > _DISTANCE) return false;
        if (Mathf.Abs(pos1.y - pos2.y) > _DISTANCE) return false;
        return true;
    }

    public (byte, byte) ShowShadowBlock(Vector3 pos)
    {
        for (var i = 0; i != _sizeFrame.y; i++)
        {
            for (var j = 0; j != _sizeFrame.x; j++)
            {
                Debug.Log($"{j}x{i}");
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