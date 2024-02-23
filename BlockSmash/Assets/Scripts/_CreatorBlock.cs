﻿using Sirenix.OdinInspector;
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
        _block = new GameObject[5, 5];
        for (var i = 0; i != 5; i++)
        {
            for (var j = 0; j != 5; j++)
            {
                var block = Instantiate(_entityBlock, transform);
                block.transform.localPosition = _dataCreateBlock.PosLocalEntityBlock[j, i];
                _block[j, i] = block;
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
        var shape = _data.ListShapeBlock[index].Shape;
        for (var i = 0; i != _block.GetLength(1); i++)
        {
            for (var j = 0; j != _block.GetLength(0); j++)
            {
                _block[j, i].transform.localPosition = _dataCreateBlock.PosLocalEntityBlock[j, i];
                _block[j, i].SetActive(shape[j, i]);
                if (!shape[j, i]) continue;
                pos += (Vector2) _block[j, i].transform.localPosition;
                count++;
            }
        }

        pos = pos / count;

        for (var i = 0; i != _block.GetLength(1); i++)
        {
            for (var j = 0; j != _block.GetLength(0); j++)
            {
                if(!_block[j,i].activeInHierarchy) continue;
                Vector2 p = _block[j, i].transform.localPosition;
                p -= pos;
                _block[j, i].transform.localPosition = p;
            }
        }
    }
}