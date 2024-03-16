using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using Extensions.GameObjects;
using UnityEngine;

namespace GamePlay
{
    public class _BoardGame
    {
        private readonly Vector2Int _sizeBoard;
        private readonly Vector2 _posFirstBlock;
        private readonly float _distanceEntityBlock;
        private readonly GameObject _prefabPieceBlock;
        private readonly float _distanceCheckShadow;
        private readonly CancellationTokenSource _cts;
        private readonly _DataSpriteBlock _dataSpriteBlock;
        private readonly _DataEffectSO _dataEffect;

        public _BoardGame(_GamePlayInit init, CancellationTokenSource cts)
        {
            _sizeBoard = init.InitBoard.SizeBoard;
            _posFirstBlock = init.InitBoard.PosFirstBlock;
            _distanceEntityBlock = init.DistanceEntityBlock;
            _prefabPieceBlock = init.PrefabPieceBlock;
            _distanceCheckShadow = init.DistanceCheckPutBlock;
            _dataSpriteBlock = init.DataSpriteBlock;
            _dataEffect = init.DataEffect;
            _cts = cts;
            CreateBoard(init);
        }

        private Transform _trfBoard;
        private _PieceBlockFacade[,] _matrixPieceBlocks;

        public _PieceBlockFacade[,] MatrixPieceBlocks => _matrixPieceBlocks;

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
            _matrixPieceBlocks = new _PieceBlockFacade[_sizeBoard.x, _sizeBoard.y];
            for (var i = 0; i != _sizeBoard.y; i++)
            {
                for (var j = 0; j != _sizeBoard.x; j++)
                {
                    CreatePieceBlock((sbyte) j, (sbyte) i);
                }
            }
        }

        private void CreatePieceBlock(sbyte x, sbyte y)
        {
            var pos = new Vector2(_posFirstBlock.x + x * _distanceEntityBlock, _posFirstBlock.y + y * _distanceEntityBlock);
            var block = _prefabPieceBlock.CreateGameObject(pos: pos, parent: _trfBoard);
#if UNITY_EDITOR
            block.name = $"Block_{x}x{y}";
#endif
            block.gameObject.SetActive(false);
            var pieceBlock = new _PieceBlockFacade(block.transform, _cts);
            pieceBlock.SetXY(x, y);
            pieceBlock.SpriteRenderer.SetShadowSprite();
            _matrixPieceBlocks[x, y] = pieceBlock;
            block.transform.localScale = Vector3.one * .986f;
        }

        public _PieceBlockFacade GetEntityBlock(sbyte x, sbyte y)
        {
            if (x < 0 || y < 0) return null;
            if (x >= _sizeBoard.x || y >= _sizeBoard.y) return null;
            return _matrixPieceBlocks[x, y];
        }

        private bool IsShadow(Vector3 pos1, Vector3 pos2)
        {
            if (Mathf.Abs(pos1.x - pos2.x) > _distanceCheckShadow) return false;
            if (Mathf.Abs(pos1.y - pos2.y) > _distanceCheckShadow) return false;
            return true;
        }

        public (sbyte, sbyte) GetIDShowShadow(_PieceBlockFacade piece)
        {
            foreach (var shadow in _matrixPieceBlocks)
            {
                if (shadow.IsActive) continue;
                if (!IsShadow(piece.Pos, shadow.Pos)) continue;
                return (shadow.X, shadow.Y);
            }

            // khong co id piece block nao phu hop, return gia tri so am.
            return (-1, -1);
        }

        public bool IsFullRow(int y)
        {
            for (var i = 0; i != _sizeBoard.x; i++)
            {
                if (!_matrixPieceBlocks[i, y].IsActive) return false;
            }

            return true;
        }

        public bool IsFullColumn(int x)
        {
            for (var i = 0; i != _sizeBoard.y; i++)
            {
                if (!_matrixPieceBlocks[x, i].IsActive) return false;
            }

            return true;
        }

        public void HighlightRow(sbyte y, Sprite sprite)
        {
            for (var i = 0; i != _sizeBoard.x; i++)
            {
                _matrixPieceBlocks[i, y].SpriteRenderer.SetHighLightSprite(sprite);
            }
        }

        public void SetRootSpriteRow(sbyte y)
        {
            for (var i = 0; i != _sizeBoard.x; i++)
            {
                _matrixPieceBlocks[i, y].SpriteRenderer.SetRootSprite();
            }
        }

        public async void DestroyRow(sbyte y, int indexGradientColor)
        {
            var posX3 = GetEntityBlock(3, y).Pos;
            var posX4 = GetEntityBlock(4, y).Pos;
            var posEffect = posX3 + posX4;
            posEffect /= 2;
            var rotation = _dataEffect.PrefabEffectDestroyBlock.transform.rotation;
            _dataEffect.PrefabEffectDestroyBlock.CreateInstance(posEffect, rotation).DoShow(_dataSpriteBlock.ColorEffect(indexGradientColor));
            for (var i = 0; i != _sizeBoard.x; i++)
            {
                await UniTask.Delay(TimeSpan.FromSeconds(0.01f), cancellationToken: _cts.Token);
                _matrixPieceBlocks[i, y].Destroy();
            }
        }

        public void HighlightColumn(sbyte x, Sprite sprite)
        {
            for (var i = 0; i != _sizeBoard.y; i++)
            {
                _matrixPieceBlocks[x, i].SpriteRenderer.SetHighLightSprite(sprite);
            }
        }

        public void SetRootSpriteColumn(sbyte x)
        {
            for (var i = 0; i != _sizeBoard.y; i++)
            {
                _matrixPieceBlocks[x, i].SpriteRenderer.SetRootSprite();
            }
        }

        public async void DestroyColumn(sbyte x, int indexGradientColor)
        {
            var posX3 = GetEntityBlock(x, 3).Pos;
            var posX4 = GetEntityBlock(x, 4).Pos;
            var posEffect = posX3 + posX4;
            posEffect /= 2;
            var rotation = _dataEffect.PrefabEffectDestroyBlock.transform.rotation;
            rotation.eulerAngles = new Vector3(90, 90, 0);
            _dataEffect.PrefabEffectDestroyBlock.CreateInstance(posEffect, rotation).DoShow(_dataSpriteBlock.ColorEffect(indexGradientColor));
            for (var i = 0; i != _sizeBoard.y; i++)
            {
                await UniTask.Delay(TimeSpan.FromSeconds(0.01f), cancellationToken: _cts.Token);
                _matrixPieceBlocks[x, i].Destroy();
            }
        }

        public async UniTask WaitDisableAllEntityBlockWhenGameOver()
        {
            ChangeRowSpiteWhenGameOver(3, 4, 3);
            ChangeRowSpiteWhenGameOver(3, 4, 4);
            await UniTask.Delay(TimeSpan.FromSeconds(0.1f), cancellationToken: _cts.Token);
            ChangeRowSpiteWhenGameOver(2, 5, 2);
            ChangeRowSpiteWhenGameOver(2, 5, 5);
            ChangeColumnSpiteWhenGameOver(2, 5, 2);
            ChangeColumnSpiteWhenGameOver(2, 5, 5);
            await UniTask.Delay(TimeSpan.FromSeconds(0.1f), cancellationToken: _cts.Token);
            ChangeRowSpiteWhenGameOver(1, 6, 1);
            ChangeRowSpiteWhenGameOver(1, 6, 6);
            ChangeColumnSpiteWhenGameOver(1, 6, 1);
            ChangeColumnSpiteWhenGameOver(1, 6, 6);
            await UniTask.Delay(TimeSpan.FromSeconds(0.1f), cancellationToken: _cts.Token);
            ChangeRowSpiteWhenGameOver(0, 7, 0);
            ChangeRowSpiteWhenGameOver(0, 7, 7);
            ChangeColumnSpiteWhenGameOver(0, 7, 0);
            ChangeColumnSpiteWhenGameOver(0, 7, 7);
            await UniTask.Delay(TimeSpan.FromSeconds(0.2f), cancellationToken: _cts.Token);
        }

        public void ResetBoardGame()
        {
            foreach (var entity in _matrixPieceBlocks)
            {
                entity.SetActive(false);
            }
        }

        private void ChangeRowSpiteWhenGameOver(sbyte startX, sbyte endX, sbyte y)
        {
            for (var i = startX; i <= endX; i++)
            {
                var entity = _matrixPieceBlocks[i, y];
                entity.SetActive(true);
                entity.SpriteRenderer.SetHighLightSprite(_dataSpriteBlock.GetRandomSprite);
            }
        }

        private void ChangeColumnSpiteWhenGameOver(sbyte startY, sbyte endY, sbyte x)
        {
            for (var i = startY; i <= endY; i++)
            {
                var entity = _matrixPieceBlocks[x, i];
                entity.SetActive(true);
                entity.SpriteRenderer.SetHighLightSprite(_dataSpriteBlock.GetRandomSprite);
            }
        }
    }
}