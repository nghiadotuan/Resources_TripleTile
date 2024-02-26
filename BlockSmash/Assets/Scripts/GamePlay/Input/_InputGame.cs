using UnityEngine;

namespace GamePlay
{
    public class _InputGame : _IUpdateAble
    {
        private readonly _DataGenBlockSO _dataGenBlock;

        public _InputGame
        (
            _GamePlayInit gamePlayInit,
            Camera mainCamera,
            _BoardGame boardGame
        )
        {
            CreateInputs(gamePlayInit, mainCamera, boardGame);
            _dataGenBlock = gamePlayInit.DataCreateBlock.DataGenBlock;
            GenBlocks();
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
                _inputBlocks[i].Init(mainCamera, gamePlayInit.InitInput.PosInput[i], size, gamePlayInit.DataCreateBlock, gamePlayInit.PrefabEntityBlock, boardGame);
            }
        }

        private void GenBlocks()
        {
            foreach (var input in _inputBlocks)
            {
                input.GenBlock(_dataGenBlock.ShapeBlockRandom);
            }
        }

        public void OnUpdate(float deltaTime)
        {
            foreach (var input in _inputBlocks)
            {
                input.OnUpdate(deltaTime);
            }
        }
    }
}