using System.Threading;
using Sirenix.OdinInspector;
using UnityEngine;

namespace GamePlay
{
    public class _InputGame 
    {
        private readonly _DataGenBlockSO _dataGenBlock;
        private readonly _DataSpriteBlock _dataSpriteBlock;
        [ShowInInspector] private readonly _DataInputGame _dataInputGame;
        private readonly _DataRatioGenBlockSO _dataRatioGenBlock;
        private readonly CancellationTokenSource _cts;

        public _InputGame
        (
            _GamePlayInit gamePlayInit,
            Camera mainCamera,
            _BoardGame boardGame,
            CancellationTokenSource cts
        )
        {
            _cts = cts;
            _dataSpriteBlock = gamePlayInit.DataSpriteBlock;
            _dataRatioGenBlock = gamePlayInit.DataRatioGenBlockSo;
            _dataInputGame = new _DataInputGame();
            CreateInputs(gamePlayInit, mainCamera, boardGame);
            _dataGenBlock = gamePlayInit.DataCreateBlock.DataGenBlock;
            _EventGamePlay.NextGenBlock = NextGenBlock;
            _EventGamePlay.IsGameOver = IsGameOver;
        }

        private _InputFacade[] _inputBlocks;

        private void CreateInputs(_GamePlayInit gamePlayInit, Camera mainCamera, _BoardGame boardGame)
        {
            var input = new GameObject();
#if UNITY_EDITOR
            input.name = "Input";
#endif
            var size = gamePlayInit.InitInput.SizeColliderInput;
            _inputBlocks = new _InputFacade[gamePlayInit.InitInput.PosInput.Length];
            for (var i = 0; i != gamePlayInit.InitInput.PosInput.Length; i++)
            {
                _inputBlocks[i] = new GameObject().AddComponent<_InputFacade>();
                _inputBlocks[i].transform.SetParent(input.transform);
#if UNITY_EDITOR
                _inputBlocks[i].name = $"InputBlock_{i}";
#endif
                _inputBlocks[i].Init
                (
                    mainCamera,
                    gamePlayInit.InitInput.PosInput[i],
                    size, gamePlayInit.DataCreateBlock,
                    gamePlayInit.PrefabEntityBlock, boardGame,
                    _dataInputGame,
                    _dataSpriteBlock, _cts
                );
            }
        }

        public void GenBlocks()
        {
            foreach (var input in _inputBlocks)
            {
                var type = _dataRatioGenBlock.GetType(_DataGamePlay.Score);
                input.GenBlock(_dataGenBlock.DicShapeBlock[type], _dataSpriteBlock.GetRandomSprite);
            }
        }

        private void NextGenBlock()
        {
            foreach (var input in _inputBlocks)
            {
                if (!input.IsPut) return;
            }

            GenBlocks();
        }

        private bool IsGameOver()
        {
            foreach (var input in _inputBlocks)
            {
                input.CheckSelect();
            }

            foreach (var input in _inputBlocks)
            {
                if (input.IsPut) continue;
                if (!input.IsNotSelect) return false;
            }

            return true;
        }
    }
}