using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

namespace GamePlay
{
    public class _InputLogic : _IUpdateAble
    {
        private readonly Camera _cam;
        private readonly Vector2 _position;
        private readonly _Block _block;
        private readonly _BoardGame _boardGame;

        public _InputLogic
        (
            Camera camera,
            Vector2 position,
            _Block block,
            _BoardGame boardGame
        )
        {
            _cam = camera;
            _position = position;
            _block = block;
            _boardGame = boardGame;
        }

        [ShowInInspector] private bool _isPick;

        public bool IsPut { get; set; }

        public void OnMouseDown()
        {
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
    }
}