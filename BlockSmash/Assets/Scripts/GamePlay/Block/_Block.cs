using Extensions.GameObjects;
using UnityEngine;

namespace GamePlay
{
    public class _Block
    {
        private readonly Vector2 _posInputBlock;

        public _Block(_DataCreateBlock dataCreateBlock, _EntityBlockFacade prefab, Vector2 posInputBlock)
        {
            Trf = new GameObject().transform;
            _posInputBlock = posInputBlock;
#if UNITY_EDITOR
            Trf.name = "Block";
#endif
            CreateEntities(dataCreateBlock, prefab);
        }

        private _EntityBlockFacade[,] _matrixEntitiesBlock;

        public Transform Trf { get; }

        private void CreateEntities(_DataCreateBlock dataCreateBlock, _EntityBlockFacade prefab)
        {
            // tai sao la 5: vi block dai nhat  co 5 entity block.  
            _matrixEntitiesBlock = new _EntityBlockFacade[5, 5];
            for (var i = 0; i != 5; i++)
            {
                for (var j = 0; j != 5; j++)
                {
                    var block = prefab.CreateInstance(Trf);
                    block.transform.localPosition = dataCreateBlock.PosLocalEntityBlock[j, i];
                    block.SetActive(false);
                    _matrixEntitiesBlock[j, i] = block;
                    block.SetXY((sbyte) (j - 2), (sbyte) (i - 2));
                }
            }
        }

        public void GenBlock(_ShapeBlock shape)
        {
            Trf.position = _posInputBlock;
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
                    Debug.Log(j + "   "+ i);
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

            Trf.localScale = Vector3.one * .68f;
        }

        public void ShowShadow(_BoardGame boardGame)
        {
            foreach (var entityBlock in _matrixEntitiesBlock)
            {
                boardGame.ShowShadow(entityBlock);
            }
        }
    }
}