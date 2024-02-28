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
        private readonly Sprite _spriteDisable;

        public _Block
        (
            _DataCreateBlock dataCreateBlock,
            _EntityBlockFacade prefab,
            Vector2 posInputBlock,
            _DataInputGame dataInputGame,
            Sprite spriteDisable
        )
        {
            Trf = new GameObject().transform;
            _posInputBlock = posInputBlock;
#if UNITY_EDITOR
            Trf.name = "Block";
#endif
            CreateEntities(dataCreateBlock, prefab);
            _dataCreateBlock = dataCreateBlock;
            _dataInputGame = dataInputGame;
            _spriteDisable = spriteDisable;
        }

        private _EntityBlockFacade[,] _matrixEntitiesBlock;
        private int _numEntityBlock;
        private Sprite _sprite;

        public Transform Trf { get; }
        public byte IndexSprite { get; set; }
        public bool IsPut { get; private set; }

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
                    block.SetXY((sbyte) (j), (sbyte) (i));
                    block.SpriteRenderer.SetSortingOrder(2);
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
                    block.transform.localPosition = _dataCreateBlock.PosLocalEntityBlock[j, i];
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
                    Vector2 p = _matrixEntitiesBlock[j, i].transform.localPosition;
                    p -= pos;
                    _matrixEntitiesBlock[j, i].transform.localPosition = p;
                }
            }

            Trf.DOScale(0.68f, .5f).From(0).SetEase(Ease.OutBack);
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
            foreach (var entityBlock in _matrixEntitiesBlock)
            {
                if (!entityBlock.IsActive) continue;
                var (x, y) = boardGame.GetIDShowShadow(entityBlock);
                if (x < 0) continue;
                var data = new _DataXYShadow(x, y);
                _dataInputGame.ListXYShadow.Add(data);
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
                shadow.SpriteRenderer.SetSpriteBlock(_sprite);
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
                boardGame.HighlightColumn(x, _sprite);
            }

            foreach (var y in _dataInputGame.ListYFull)
            {
                boardGame.HighlightRow(y, _sprite);
            }
        }

        private void CheckDestroyRowAndColumn(_BoardGame boardGame)
        {
            var numRowAndColumn = 0;
            foreach (var x in _dataInputGame.ListXCheckFullRow)
            {
                if (boardGame.IsFullColumn(x))
                {
                    numRowAndColumn++;
                    boardGame.DestroyColumn(x);
                }
            }

            foreach (var y in _dataInputGame.ListYCheckFullColumn)
            {
                if (boardGame.IsFullRow(y))
                {
                    numRowAndColumn++;
                    boardGame.DestroyRow(y);
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
                shadow.SpriteRenderer.SetSpriteBlock(_sprite);
                shadow.SpriteRenderer.SetBlock();
            }

            CheckDestroyRowAndColumn(boardGame);
            _dataInputGame.ListXYShadow.Clear();
        }

        public void SetSpriteBlock(Sprite sprite)
        {
            _sprite = sprite;
            foreach (var entity in _matrixEntitiesBlock)
            {
                if (!entity.IsActive) continue;
                entity.SpriteRenderer.SetSpriteBlock(sprite);
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
                    SetSpriteBlock(_sprite);
                    return true;
                }
            }

            SetSprite(_spriteDisable);
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
                    MyDebug.Log(newX + "  " + newY + "  "+ x + "  "+ y);
                    var entityBoardGame = boardGame.GetEntityBlock(newX, newY);
                    if (!entityBoardGame) return false;
                    if (entityBoardGame.IsActive) return false;
                }
            }

            return true;
        }
    }
}