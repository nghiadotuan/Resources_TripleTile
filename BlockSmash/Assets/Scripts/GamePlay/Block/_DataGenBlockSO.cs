using System;
using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using Debug = UnityEngine.Debug;

namespace GamePlay
{

    [CreateAssetMenu(menuName = "GamePlay/Data Gen Block")]
    public class _DataGenBlockSO : ScriptableObject
    {
        [SerializeField] private TextAsset[] _text;
        [ShowInInspector] private Dictionary<_TypeBlockEnum, _ShapeBlock> _dicShapeBlock;

        public Dictionary<_TypeBlockEnum, _ShapeBlock> DicShapeBlock => _dicShapeBlock;

        [Button]
        public void Init()
        {
            _dicShapeBlock = new Dictionary<_TypeBlockEnum, _ShapeBlock>();
            foreach (var t in _text)
            {
                var value = GenShape(t);
                if (value == default) continue;
                _dicShapeBlock.Add(value.Item1, value.Item2);
            }
        }

        private (_TypeBlockEnum, _ShapeBlock) GenShape(TextAsset text)
        {
            var shapeBlock = new _ShapeBlock();
            var str = text.text.Split(',');
            var lengthShape = str.Length - 1;
            if (lengthShape % 25 != 0) return default;
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

            if (Enum.TryParse(str[^1], out _TypeBlockEnum type))
            {
                return (type, shapeBlock);
            }

            Debug.LogError($"Can't convert {str[^1]} to TypeBlockEnum");
            return default;
        }
    }
}