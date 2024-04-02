using UnityEngine;

namespace GamePlay
{
    public class _LogicCheckMatrixPieceBlock
    {
        private readonly _PieceBlockFacade[,] _matrixPieceBlocks;
        private readonly Vector2Int _sizeBoard;
        private readonly _BoardGame _boardGame;

        public _LogicCheckMatrixPieceBlock
        (
            _PieceBlockFacade[,] matrix,
            Vector2Int sizeBoard,
            _BoardGame boardGame
        )
        {
            _matrixPieceBlocks = matrix;
            _sizeBoard = sizeBoard;
            _boardGame = boardGame;
            _EventGamePlay.UseLittleBoom = DestroyRowOrColumnMostPieceBlocks;
            _EventGamePlay.UseBigBoom = DestroyPlusBlock;
        }

        // hang dat dieu kien de destroy: co num block
        private bool IsRowReachCondition(int numRow, int numBlock)
        {
            var count = 0;
            for (var i = 0; i != _sizeBoard.y; i++)
            {
                var piece = _matrixPieceBlocks[i, numRow];
                if (!piece.IsActive) continue;
                count++;
                if (count >= numBlock) return true;
            }

            return false;
        }

        // hang dat dieu kien de destroy: co num block
        private bool IsColumnReachCondition(int numColumn, int numBlock)
        {
            var count = 0;
            for (var i = 0; i != _sizeBoard.x; i++)
            {
                var piece = _matrixPieceBlocks[numColumn, i];
                if (!piece.IsActive) continue;
                count++;
                if (count >= numBlock) return true;
            }

            return false;
        }

        // pha huy hang or cot co nhieu block nhat
        // uu tien pha huy hang
        public void DestroyRowOrColumnMostPieceBlocks()
        {
            for (var numBlock = _sizeBoard.x - 1; numBlock > 0; numBlock--)
            {
                for (var rowOrColumn = 0; rowOrColumn != _sizeBoard.x; rowOrColumn++)
                {
                    if (IsRowReachCondition(rowOrColumn, numBlock))
                    {
                        _boardGame.DestroyRow((sbyte)rowOrColumn, 0);
                        return;
                    }

                    if (IsColumnReachCondition(rowOrColumn, numBlock))
                    {
                        _boardGame.DestroyColumn((sbyte)rowOrColumn, 0);
                        return;
                    }
                }
            }
        }

        //TODO: hard code.
        // pha mot dien tich hinh dau + co do rong la 2
        public void DestroyPlusBlock()
        {
            _boardGame.DestroyRow(3,0);
            _boardGame.DestroyColumn(3,0);
            _boardGame.DestroyRow(4,0);
            _boardGame.DestroyColumn(4,0);
        }
    }
}