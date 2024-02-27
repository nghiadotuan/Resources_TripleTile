using Extensions.GameObjects;
using UnityEngine;

namespace GamePlay
{
    public class _BoardGame
    {
        private readonly Vector2Int _sizeBoard;
        private readonly Vector2 _posFirstBlock;
        private readonly float _distanceEntityBlock;
        private readonly _EntityBlockFacade _prefabEntityBlock;
        private readonly float _distanceCheckShadow;

        public _BoardGame(_GamePlayInit init)
        {
            _sizeBoard = init.InitBoard.SizeBoard;
            _posFirstBlock = init.InitBoard.PosFirstBlock;
            _distanceEntityBlock = init.DistanceEntityBlock;
            _prefabEntityBlock = init.PrefabEntityBlock;
            _distanceCheckShadow = init.DistanceCheckPutBlock;
            CreateBoard(init);
        }

        private Transform _trfBoard;
        private _EntityBlockFacade[,] _matrixEntityBlocks;

        private void CreateBoard(_GamePlayInit init)
        {
            _trfBoard = new GameObject("Board").transform;
            _trfBoard.position = init.InitBoard.PosBoard;
            _trfBoard.gameObject.AddComponent<SpriteRenderer>().sprite = init.InitBoard.SpriteBoard;
            _trfBoard.GetComponent<SpriteRenderer>().sortingOrder = -10;
            CreateEntityBlocksBoard();
        }

        private void CreateEntityBlocksBoard()
        {
            _matrixEntityBlocks = new _EntityBlockFacade[_sizeBoard.x, _sizeBoard.y];
            for (var i = 0; i != _sizeBoard.y; i++)
            {
                for (var j = 0; j != _sizeBoard.x; j++)
                {
                    CreateEntityBlock((sbyte) j, (sbyte) i);
                }
            }
        }

        private void CreateEntityBlock(sbyte x, sbyte y)
        {
            var pos = new Vector2(_posFirstBlock.x + x * _distanceEntityBlock, _posFirstBlock.y + y * _distanceEntityBlock);
            var block = _prefabEntityBlock.CreateInstance(pos, _trfBoard);
#if UNITY_EDITOR
            block.name = $"Block_{x}x{y}";
#endif
            block.gameObject.SetActive(false);
            block.SetXY(x, y);
            block.SpriteRenderer.SetShadow();
            _matrixEntityBlocks[x, y] = block;
        }

        public _EntityBlockFacade GetEntityBlock(sbyte x, sbyte y)
        {
            if (x < 0 || y < 0) return null;
            if (x >= _sizeBoard.x || y >= _sizeBoard.y) return null;
            return _matrixEntityBlocks[x, y];
        }

        private bool IsShadow(Vector3 pos1, Vector3 pos2)
        {
            if (Mathf.Abs(pos1.x - pos2.x) > _distanceCheckShadow) return false;
            if (Mathf.Abs(pos1.y - pos2.y) > _distanceCheckShadow) return false;
            return true;
        }

        public (sbyte, sbyte) GetIDShowShadow(_EntityBlockFacade entity)
        {
            // for (var i = 0; i != _sizeBoard.y; i++)
            // {
            //     for (var j = 0; j != _sizeBoard.x; j++)
            //     {
            //         var shadow = _matrixEntityBlocks[j, i];
            //         if (shadow.IsActive) continue;
            //         if (!IsShadow(entity.Pos, shadow.Pos)) continue;
            //         return ((sbyte) j, (sbyte) i);
            //     }
            // }

            foreach (var shadow in _matrixEntityBlocks)
            {
                if (shadow.IsActive) continue;
                if (!IsShadow(entity.Pos, shadow.Pos)) continue;
                return (shadow.X, shadow.Y);
            }

            return (-1, -1);
        }

        public void ShowBlock(sbyte x, sbyte y)
        {
            if (x < 0 || y < 0)
            {
                Debug.LogError($"can't get block with x = {x} and y = {y}");
                return;
            }

            var entity = GetEntityBlock(x, y);
            entity.SpriteRenderer.SetBlock();
            entity.SetActive(true);
        }
    }
}