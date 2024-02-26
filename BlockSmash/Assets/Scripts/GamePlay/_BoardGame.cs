using Extensions.GameObjects;
using UnityEngine;

namespace GamePlay
{
    public class _BoardGame
    {
        private readonly Vector2 _posFirstBlock;
        private readonly float _distanceEntityBlock;
        private readonly _EntityBlockFacade _prefabEntityBlock;

        public _BoardGame(_GamePlayInit init)
        {
            _posFirstBlock = init.InitBoard.PosFirstBlock;
            _distanceEntityBlock = init.DistanceEntityBlock;
            _prefabEntityBlock = init.PrefabEntityBlock;
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
            CreateEntityBlocksBoard(init);
        }

        private void CreateEntityBlocksBoard(_GamePlayInit init)
        {
            var sizeBoard = init.InitBoard.SizeBoard;
            _matrixEntityBlocks = new _EntityBlockFacade[sizeBoard.x, sizeBoard.y];
            for (var i = 0; i != sizeBoard.y; i++)
            {
                for (var j = 0; j != sizeBoard.x; j++)
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
            block.SetXY(x,y);
            block.SpriteRenderer.SetShadow();
            _matrixEntityBlocks[x, y] = block;
        }

        public _EntityBlockFacade GetEntityBlock(sbyte x, sbyte y)
        {
            if (x < 0 || y < 0) return null;
            return _matrixEntityBlocks[x, y];
        }
    }
}