using DG.Tweening;
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

    private GameObject[,] _listBlocks;
    [SerializeField] private float _DISTANCE = .5f;

    public static _Board Instance;

    private void Awake()
    {
        Instance = this;
    }

    [Button]
    private void CreateBlocks()
    {
        _listBlocks = new GameObject[_sizeFrame.x, _sizeFrame.y];
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
        block.GetComponent<_EntityBlock>().SetId((sbyte) x, (sbyte) y);
        _listBlocks[x, y] = block;
    }

    private bool IsShowShadow(Vector3 pos1, Vector3 pos2)
    {
        if (Mathf.Abs(pos1.x - pos2.x) > _DISTANCE) return false;
        if (Mathf.Abs(pos1.y - pos2.y) > _DISTANCE) return false;
        return true;
    }

    public (sbyte, sbyte) ShowShadowBlock(Vector3 pos)
    {
        for (var i = 0; i != _sizeFrame.y; i++)
        {
            for (var j = 0; j != _sizeFrame.x; j++)
            {
                var shadow = _listBlocks[j, i];
                if (shadow.GetComponent<_EntityBlock>().IsActive) continue;
                if (!IsShowShadow(pos, shadow.transform.position)) continue;
                shadow.SetActive(true);
                return ((sbyte) j, (sbyte) i);
            }
        }

        return (-1, -1);
    }

    public GameObject GetShadow(byte x, byte y)
    {
        return _listBlocks[x, y];
    }

    public void ShowBlock(sbyte x, sbyte y)
    {
        if (x < 0 || y < 0)
        {
            Debug.LogError("can't get block");
            return;
        }

        var block = _listBlocks[x, y];
        block.GetComponent<SpriteRenderer>().DOFade(1, 0);
        block.GetComponent<_EntityBlock>().IsActive = true;
        block.SetActive(true);
    }
}