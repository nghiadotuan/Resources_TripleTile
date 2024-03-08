using System.Threading;
using DG.Tweening;
using Extensions.GameObjects;
using UnityEngine;

namespace GamePlay
{
    public class _Block
    {
        private readonly Vector2 _posInputBlock;
        private readonly _DataCreateBlock _dataCreateBlock;
        private readonly _DataInputGame _dataInputGame;
        private readonly _DataSpriteBlock _dataSpriteBlock;
        private readonly float _scaleBlock;
        private readonly CancellationTokenSource _cts;

        public _Block
        (
            _DataCreateBlock dataCreateBlock,
            GameObject prefab,
            Vector2 posInputBlock,
            _DataInputGame dataInputGame,
            _DataSpriteBlock dataSpriteBlock,
            float scaleBlock,
            CancellationTokenSource cts
        )
        {
            _cts = cts;
            Trf = new GameObject().transform;
            _posInputBlock = posInputBlock;
#if UNITY_EDITOR
            Trf.name = "Block";
#endif
            CreateEntities(dataCreateBlock, prefab);
            _dataCreateBlock = dataCreateBlock;
            _dataInputGame = dataInputGame;
            _dataSpriteBlock = dataSpriteBlock;
            _scaleBlock = scaleBlock;
        }

        private _PieceBlockFacade[,] _matrixEntitiesBlock;
        private int _numEntityBlock;
        private int _indexSprite;

        public Transform Trf { get; }
        public byte IndexSprite { get; set; }
        public bool IsPut { get; private set; }

        private void CreateEntities(_DataCreateBlock dataCreateBlock, GameObject prefab)
        {
            // tai sao la 5: vi block dai nhat  co 5 entity block.  
            _matrixEntitiesBlock = new _PieceBlockFacade[5, 5];
            for (var i = 0; i != 5; i++)
            {
                for (var j = 0; j != 5; j++)
                {
                    var go = prefab.CreateGameObject(Trf);
                    go.transform.localPosition = dataCreateBlock.PosLocalEntityBlock[j, i];
                    go.SetActive(false);
                    var pieceBlock = new _PieceBlockFacade(go.transform, _cts);
                    _matrixEntitiesBlock[j, i] = pieceBlock;
                    pieceBlock.SetXY((sbyte) (j), (sbyte) (i));
                    pieceBlock.SpriteRenderer.SetSortingOrder(2);
                }
            }
        }

        public void GenBlock(_ShapeBlock shape)
        {
            _numEntityBlock = 0;
            Trf.position = _posInputBlock;
            var pos = Vector2.zero;
            var shapeBlock = shape.Shape;
            for (var i = 0; i != _matrixEntitiesBlock.GetLength(1); i++)
            {
                for (var j = 0; j != _matrixEntitiesBlock.GetLength(0); j++)
                {
                    var block = _matrixEntitiesBlock[j, i];
                    var isActive = shapeBlock[j, i];
                    block.SetActive(isActive);
                    if (!isActive) continue;
                    block.Trf.localPosition = _dataCreateBlock.PosLocalEntityBlock[j, i];
                    pos += _dataCreateBlock.PosLocalEntityBlock[j, i];
                    _numEntityBlock++;
                }
            }

            pos /= _numEntityBlock;

            for (var i = 0; i != _matrixEntitiesBlock.GetLength(1); i++)
            {
                for (var j = 0; j != _matrixEntitiesBlock.GetLength(0); j++)
                {
                    if (!_matrixEntitiesBlock[j, i].IsActive) continue;
                    Vector2 p = _matrixEntitiesBlock[j, i].Trf.localPosition;
                    p -= pos;
                    _matrixEntitiesBlock[j, i].Trf.localPosition = p;
                }
            }

            Trf.DOScale(_scaleBlock, .5f).From(0).SetEase(Ease.OutBack);
        }

        public void ShowShadow(_BoardGame boardGame)
        {
            foreach (var data in _dataInputGame.ListXYShadow)
            {
                boardGame.GetEntityBlock(data.XShadow, data.YShadow).SetActive(false);
            }

            CheckFullRowAndColumnAndHighLight(boardGame);
            IsPut = false;
            _dataInputGame.ListXYShadow.Clear();
            var xFirst = 0;
            var yFirst = 0;
            foreach (var entityBlock in _matrixEntitiesBlock)
            {
                if (!entityBlock.IsActive) continue;
                if (_dataInputGame.ListXYShadow.Count <= 0)
                {
                    var (x, y) = boardGame.GetIDShowShadow(entityBlock);
                    if (x < 0 || y < 0) return;
                    xFirst = entityBlock.X;
                    yFirst = entityBlock.Y;
                    _dataInputGame.ListXYShadow.Add(new _DataXYShadow(x, y));
                }
                else
                {
                    var x = (sbyte) (_dataInputGame.ListXYShadow[0].XShadow + entityBlock.X - xFirst);
                    var y = (sbyte) (_dataInputGame.ListXYShadow[0].YShadow + entityBlock.Y - yFirst);
                    var entityBlockCheck = boardGame.GetEntityBlock(x, y);
                    if (entityBlockCheck == null || entityBlockCheck.IsActive) return;
                    _dataInputGame.ListXYShadow.Add(new _DataXYShadow(x, y));
                }
            }

            if (_dataInputGame.ListXYShadow.Count < _numEntityBlock)
            {
                IsPut = false;
                return;
            }

            IsPut = true;
            foreach (var data in _dataInputGame.ListXYShadow)
            {
                var shadow = boardGame.GetEntityBlock(data.XShadow, data.YShadow);
                shadow.SetActive(true);
                shadow.SpriteRenderer.SetSpriteBlock(_dataSpriteBlock.GetSprite(_indexSprite));
            }

            CheckFullRowAndColumnAndHighLight(boardGame);
        }

        private void CheckFullRowAndColumnAndHighLight(_BoardGame boardGame)
        {
            _dataInputGame.SetListCheckFullRowAndColumn();
            _dataInputGame.SetListXYFullRowAndColumn(boardGame);

            foreach (var x in _dataInputGame.ListXNotFull)
            {
                boardGame.SetRootSpriteColumn(x);
            }

            foreach (var y in _dataInputGame.ListYNotFull)
            {
                boardGame.SetRootSpriteRow(y);
            }

            foreach (var x in _dataInputGame.ListXFull)
            {
                boardGame.HighlightColumn(x, _dataSpriteBlock.GetSprite(_indexSprite));
            }

            foreach (var y in _dataInputGame.ListYFull)
            {
                boardGame.HighlightRow(y, _dataSpriteBlock.GetSprite(_indexSprite));
            }
        }

        private void CheckDestroyRowAndColumn(_BoardGame boardGame)
        {
            var numRowAndColumn = 0;
            foreach (var x in _dataInputGame.ListXCheckFullAColumn)
            {
                if (boardGame.IsFullColumn(x))
                {
                    numRowAndColumn++;
                    boardGame.DestroyColumn(x, _indexSprite);
                }
            }

            foreach (var y in _dataInputGame.ListYCheckFullARow)
            {
                if (boardGame.IsFullRow(y))
                {
                    numRowAndColumn++;
                    boardGame.DestroyRow(y, _indexSprite);
                }
            }

            _DataGamePlay.Score += numRowAndColumn * 10;
        }

        public void PutBlock(_BoardGame boardGame)
        {
            _DataGamePlay.Score += _numEntityBlock;
            foreach (var data in _dataInputGame.ListXYShadow)
            {
                var shadow = boardGame.GetEntityBlock(data.XShadow, data.YShadow);
                shadow.SetActive(true);
                shadow.SpriteRenderer.SetSpriteBlock(_dataSpriteBlock.GetSprite(_indexSprite));
                shadow.SpriteRenderer.SetBlock();
            }

            CheckDestroyRowAndColumn(boardGame);
            _dataInputGame.ListXYShadow.Clear();
        }

        public void SetSpriteBlock(int indexSprite)
        {
            _indexSprite = indexSprite;
            foreach (var entity in _matrixEntitiesBlock)
            {
                if (!entity.IsActive) continue;
                entity.SpriteRenderer.SetSpriteBlock(_dataSpriteBlock.GetSprite(_indexSprite));
            }
        }

        // Block co the chon dc khi no con cho.
        public bool IsBlockCanSelect(_BoardGame boardGame)
        {
            foreach (var entity in boardGame.MatrixEntityBlocks)
            {
                if (entity.IsActive) continue;
                if (IsCheckXYBlockToSelect(entity.X, entity.Y, boardGame))
                {
                    SetSpriteBlock(_indexSprite);
                    return true;
                }
            }

            SetSprite(_dataSpriteBlock.SpriteDisable);
            return false;

            void SetSprite(Sprite sprite)
            {
                foreach (var entity in _matrixEntitiesBlock)
                {
                    if (!entity.IsActive) continue;
                    entity.SpriteRenderer.SetSpriteBlock(sprite);
                }
            }
        }

        private bool IsCheckXYBlockToSelect(sbyte x, sbyte y, _BoardGame boardGame)
        {
            sbyte xCheck = 0;
            sbyte yCheck = 0;
            bool isSet = false;
            foreach (var entity in _matrixEntitiesBlock)
            {
                if (!entity.IsActive) continue;
                if (!isSet)
                {
                    isSet = true;
                    xCheck = (sbyte) (x - entity.X);
                    yCheck = (sbyte) (y - entity.Y);
                }
                else
                {
                    var newX = (sbyte) (xCheck + entity.X);
                    var newY = (sbyte) (yCheck + entity.Y);
                    var entityBoardGame = boardGame.GetEntityBlock(newX, newY);
                    if (entityBoardGame == null) return false;
                    if (entityBoardGame.IsActive) return false;
                }
            }

            return true;
        }
    }
}