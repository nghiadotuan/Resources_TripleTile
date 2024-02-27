using Sirenix.OdinInspector;
using UnityEngine;

public class _CreatorBlock : MonoBehaviour
{
    [SerializeField] private _DataCreateBlockSO _dataCreateBlock;
    [SerializeField] private _DataGenBlockSO _data;
    [SerializeField] private GameObject _entityBlock;

    private GameObject[,] _block;

    [Button]
    private void CreateBase()
    {
        _dataCreateBlock.Init();
        _data.Init();

        // tai sao la 5: vi block dai nhat  co 5 entity block.
        _block = new GameObject[5, 5];
        for (var i = 0; i != 5; i++)
        {
            for (var j = 0; j != 5; j++)
            {
                var block = Instantiate(_entityBlock, transform);
                block.transform.localPosition = _dataCreateBlock.PosLocalEntityBlock[j, i];
                _block[j, i] = block;
                block.GetComponent<_EntityBlock>().SetId((sbyte) (j - 2), (sbyte) (i - 2));
            }
        }
    }

    [Button]
    private void SetBlock(int index)
    {
        if (index >= _data.ListShapeBlock.Count)
        {
            index = _data.ListShapeBlock.Count - 1;
        }

        var pos = Vector2.zero;
        int count = 0;
        var shape = _data.ListShapeBlock[index].Shapes[0];
        for (var i = 0; i != _block.GetLength(1); i++)
        {
            for (var j = 0; j != _block.GetLength(0); j++)
            {
                var block = _block[j, i];
                block.transform.localPosition = _dataCreateBlock.PosLocalEntityBlock[j, i];
                block.SetActive(shape[j, i]);
                block.GetComponent<_EntityBlock>().IsActive = shape[j, i];
                if (!shape[j, i]) continue;
                pos += (Vector2) block.transform.localPosition;
                count++;
            }
        }

        pos /= count;

        for (var i = 0; i != _block.GetLength(1); i++)
        {
            for (var j = 0; j != _block.GetLength(0); j++)
            {
                if (!_block[j, i].activeInHierarchy) continue;
                Vector2 p = _block[j, i].transform.localPosition;
                p -= pos;
                _block[j, i].transform.localPosition = p;
            }
        }

        transform.localScale = Vector3.one * .68f;
    }

    public void ShowShadow()
    {
        foreach (var block in _block)
        {
            if (!block.activeInHierarchy) continue;
            var (x, y) = _Board.Instance.ShowShadowBlock(block.transform.position);
            block.GetComponent<_EntityBlock>().SetIdShadow(x, y);
        }

        if (!IsEntitiesBlockAllShadow())
        {
            foreach (var block in _block)
            {
                if (!block.activeInHierarchy) continue;
                block.GetComponent<_EntityBlock>().ResetId();
            }
        }
    }

    public void ResetWhenUnPick()
    {
        foreach (var block in _block)
        {
            if (block.activeInHierarchy)
                block.GetComponent<_EntityBlock>().ResetId();
        }
    }

    public bool IsEntitiesBlockAllShadow()
    {
        foreach (var block in _block)
        {
            if (!block.activeInHierarchy) continue;
            if (block.GetComponent<_EntityBlock>().IsShowShadow) continue;
            return false;
        }

        return true;
    }

    public void PutBlock()
    {
        foreach (var block in _block)
        {
            if (!block.activeInHierarchy) continue;
            var entity = block.GetComponent<_EntityBlock>();
            _Board.Instance.ShowBlock(entity.X, entity.Y);

        }

        gameObject.SetActive(false);
    }
}