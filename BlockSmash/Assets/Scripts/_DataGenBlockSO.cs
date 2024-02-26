using System;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using Debug = UnityEngine.Debug;
using Random = UnityEngine.Random;

[CreateAssetMenu(menuName = "Gameplay/Data Gen Block")]
public class _DataGenBlockSO : ScriptableObject
{
    [SerializeField] private TextAsset[] _text;
    [ShowInInspector] private List<_ShapeBlock> _listShapeBlock;

    public List<_ShapeBlock> ListShapeBlock => _listShapeBlock;

    public _ShapeBlock ShapeBlockRandom => _listShapeBlock[Random.Range(0, _listShapeBlock.Count - 1)];

    [Button]
    public void Init()
    {
        _listShapeBlock = new List<_ShapeBlock>();
        foreach (var t in _text)
        {
            var shape = GenShape(t);
            if (shape == null) continue;
            _listShapeBlock.Add(shape);
        }
    }

    private _ShapeBlock GenShape(TextAsset text)
    {
        var shapeBlock = new _ShapeBlock();
        var str = text.text.Split(',');
        var lengthShape = str.Length - 1;
        if (lengthShape % 25 != 0) return null;
        var count = lengthShape / 25;
        shapeBlock.Shapes = new List<bool[,]>();
        for (var ii = 0; ii != count; ii++)
        {
            var shape = new bool[5, 5];
            for (var i = 0; i != shape.GetLength(1); i++)
            {
                for (var j = 0; j != shape.GetLength(0); j++)
                {
                    var index = 5 * i + j + 25 * ii;
                    try
                    {
                        var valueIn = int.Parse(str[index].Trim());
                        shape[j, i] = valueIn == 1;
                    }
                    catch (Exception)
                    {
                        Debug.LogError($"Can't convert string {str[index]} to int at {text.name}");
                    }
                }
            }

            shapeBlock.Shapes.Add(shape);
        }

        var levelBlock = str[^1] switch
        {
            "Ease" => _LevelBlockEnum.Easy,
            "Normal" => _LevelBlockEnum.Normal,
            "Hard" => _LevelBlockEnum.Hard,
            _ => _LevelBlockEnum.Easy
        };

        shapeBlock.LevelBlock = levelBlock;
        return shapeBlock;
    }
}