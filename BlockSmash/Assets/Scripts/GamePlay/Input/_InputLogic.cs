using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace GamePlay
{
    public class _InputLogic : _IUpdateAble
    {
        private readonly Camera _cam;
        private readonly Vector2 _position;
        private readonly _Block _block;
        private readonly _BoardGame _boardGame;
        private readonly _DataInputGame _dataInputGame;
        private readonly CancellationTokenSource _cts;

        public _InputLogic
        (
            Camera camera,
            Vector2 position,
            _Block block,
            _BoardGame boardGame,
            _DataInputGame dataInputGame,
            CancellationTokenSource cts
        )
        {
            _cam = camera;
            _position = position;
            _block = block;
            _boardGame = boardGame;
            _dataInputGame = dataInputGame;
            _cts = cts;
        }

        [ShowInInspector] private bool _isPick;
        [ShowInInspector] private bool _isNotSelect;

        public bool IsPut { get; set; }

        public void OnMouseDown()
        {
            if (_isNotSelect) return;
            _dataInputGame.ListXYShadow.Clear();
            _block.Trf.DOScale(1, .15f).SetEase(Ease.OutBack).From(0.68f);
            _isPick = true;
        }

        public void OnUpdate(float deltaTime)
        {
            if (!_isPick) return;
            if (Input.GetMouseButton(0))
            {
                var pos = _cam.ScreenToWorldPoint(Input.mousePosition);
                pos.y += 3;
                pos.z = 0;
                _block.Trf.position = pos;
                _block.ShowShadow(_boardGame);
            }

            if (Input.GetMouseButtonUp(0))
            {
                _isPick = false;
                if (_block.IsPut)
                {
                    PutBlock();
                    IsPut = true;
                    _EventGamePlay.NextGenBlock?.Invoke();
                    CheckGameOver();
                }
                else
                {
                    DoBlockToPosStart();
                }
            }
        }

        private void DoBlockToPosStart()
        {
            _block.Trf.DOScale(.68f, .1f).SetEase(Ease.Linear).From(1);
            _block.Trf.DOMove(_position, .05f).SetEase(Ease.Linear);
        }

        private void PutBlock()
        {
            _block.PutBlock(_boardGame);
            _block.Trf.gameObject.SetActive(false);
        }

        private async void CheckGameOver()
        {
            await UniTask.Delay(TimeSpan.FromSeconds(0.1f), cancellationToken: _cts.Token);
            if (_EventGamePlay.IsGameOver.Invoke())
            {
                await UniTask.Delay(TimeSpan.FromSeconds(0.5f), cancellationToken: _cts.Token);
                await _boardGame.WaitDisableAllEntityBlockWhenGameOver();
                await UniTask.Delay(TimeSpan.FromSeconds(1), cancellationToken: _cts.Token);
                SceneManager.LoadScene(0);
            }
        }

        public bool IsCheckSelect()
        {
            _isNotSelect = !_block.IsBlockCanSelect(_boardGame);
            return _isNotSelect;
        }
    }
}