using UnityEngine;

namespace GamePlay
{
    public class _GamePlayContext : MonoBehaviour
    {
        [SerializeField] private Camera _mainCamera;
        [SerializeField] private _GamePlayInit _gamePlayInit;

        private _BoardGame _boardGame;
        private _InputGame _inputGame;

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
            _inputGame = new _InputGame(_gamePlayInit, _mainCamera, _boardGame);
        }

        private void Update()
        {
            var deltaTime = Time.deltaTime;
           _inputGame.OnUpdate(deltaTime);
        }
    }
}