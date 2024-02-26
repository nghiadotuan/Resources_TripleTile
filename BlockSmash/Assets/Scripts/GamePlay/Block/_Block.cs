using Extensions.GameObjects;
using UnityEngine;

namespace GamePlay
{
    public class _Block
    {
        private Transform _trf;
        private Vector2 _posInputBlock;

        public Transform Execute(_DataCreateBlock dataCreateBlock, _EntityBlockFacade prefab, Vector2 posInputBlock)
        {
            _trf = new GameObject().transform;
            _posInputBlock = posInputBlock;
#if UNITY_EDITOR
            _trf.name = "Block";
#endif
            CreateEntities(dataCreateBlock, prefab);
            return _trf;
        }

        private _EntityBlockFacade[,] _matrixEntitiesBlock;

        private void CreateEntities(_DataCreateBlock dataCreateBlock, _EntityBlockFacade prefab)
        {
            // tai sao la 5: vi block dai nhat  co 5 entity block.  
            _matrixEntitiesBlock = new _EntityBlockFacade[5, 5];
            for (var i = 0; i != 5; i++)
            {
                for (var j = 0; j != 5; j++)
                {
                    var block = prefab.CreateInstance(_trf);
                    block.transform.localPosition = dataCreateBlock.PosLocalEntityBlock[j, i];
                    block.SetActive(false);
                    _matrixEntitiesBlock[j, i] = block;
                    block.SetXY((sbyte) (j - 2), (sbyte) (i - 2));
                }
            }
        }

        public void GenBlock(_ShapeBlock shape)
        {
            _trf.position = _posInputBlock;
            var pos = Vector2.zero;
            int count = 0;
            for (var i = 0; i != _matrixEntitiesBlock.GetLength(1); i++)
            {
                for (var j = 0; j != _matrixEntitiesBlock.GetLength(0); j++)
                {
                    var block = _matrixEntitiesBlock[j, i];
                    var isActive = shape.Shape[j, i];
                    block.SetActive(isActive);
                    block.IsActive = isActive;
                    if (!isActive) continue;
                    pos += (Vector2) block.transform.localPosition;
                    count++;
                }
            }

            pos /= count;

            for (var i = 0; i != _matrixEntitiesBlock.GetLength(1); i++)
            {
                for (var j = 0; j != _matrixEntitiesBlock.GetLength(0); j++)
                {
                    if (!_matrixEntitiesBlock[j, i].IsActive) continue;
                    Vector2 p = _matrixEntitiesBlock[j, i].transform.localPosition;
                    p -= pos;
                    _matrixEntitiesBlock[j, i].transform.localPosition = p;
                }
            }

            _trf.localScale = Vector3.one * .68f;
        }
    }
}