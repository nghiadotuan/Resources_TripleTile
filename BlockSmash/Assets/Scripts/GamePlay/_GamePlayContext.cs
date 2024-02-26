using UnityEngine;

namespace GamePlay
{
    public class _GamePlayContext : MonoBehaviour
    {
        [SerializeField] private Camera _mainCamera;
        [SerializeField] private _GamePlayInit _gamePlayInit;

        private _BoardGame _boardGame;
        private _InputFacade[] _inputBlocks;

        private void Awake()
        {
            _gamePlayInit.Init();
            CreateBoardGame();
            CreateInputsGame();
        }

        // board game: chua cac entity block
        private void CreateBoardGame()
        {
            _boardGame = new _BoardGame(_gamePlayInit);
        }

        // logic bat su kien user cham vao block
        private void CreateInputsGame()
        {
            var input = new GameObject();
#if UNITY_EDITOR
            input.name = "Input";
#endif
            var size = _gamePlayInit.InitInput.SizeColliderInput;
            _inputBlocks = new _InputFacade[_gamePlayInit.InitInput.PosInput.Length];
            for (var i = 0; i != _gamePlayInit.InitInput.PosInput.Length; i++)
            {
                _inputBlocks[i] = new GameObject().AddComponent<_InputFacade>();
                _inputBlocks[i].transform.SetParent(input.transform);
#if UNITY_EDITOR
                _inputBlocks[i].name = $"InputBlock_{i}";
#endif
                _inputBlocks[i].Init(_mainCamera,  _gamePlayInit.InitInput.PosInput[i], size, _gamePlayInit.DataCreateBlock, _gamePlayInit.PrefabEntityBlock);
            }

        }

        private void Update()
        {
            var deltaTime = Time.deltaTime;
            foreach (var input in _inputBlocks)
            {
                input.OnUpdate(deltaTime);
            }
        }
    }
}