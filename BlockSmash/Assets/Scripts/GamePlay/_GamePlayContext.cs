﻿using System;
using System.Threading;
using Sirenix.OdinInspector;
using UnityEngine;

namespace GamePlay
{
    public class _GamePlayContext : MonoBehaviour
    {
        [SerializeField] private Camera _mainCamera;
        [SerializeField] private _GamePlayInit _gamePlayInit;

        [ShowInInspector] private _BoardGame _boardGame;
        [ShowInInspector] private _InputGame _inputGame;

        private CancellationTokenSource _cts;

        private void Awake()
        {
            _cts = new CancellationTokenSource();
            Input.multiTouchEnabled = false;
            _gamePlayInit.Init();
            CreateBoardGame();
            CreateInputsGame();
        }

        // board game: chua cac entity block
        private void CreateBoardGame()
        {
            _boardGame = new _BoardGame(_gamePlayInit, _cts);
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

        private void OnDestroy()
        {
            _cts?.Cancel();
            _cts?.Dispose();
        }
    }
}