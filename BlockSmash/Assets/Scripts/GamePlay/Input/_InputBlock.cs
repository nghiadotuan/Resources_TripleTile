using DG.Tweening;
using UnityEngine;

namespace GamePlay
{
    public class _InputBlock : _IUpdateAble
    {
        private readonly Camera _cam;
        private readonly Vector2 _position;
        private readonly _Block _block;
        private readonly _BoardGame _boardGame;

        public _InputBlock
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

        private bool _isPick;

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
                // if (_block.GetComponent<_CreatorBlock>().IsEntitiesBlockAllShadow())
                // {
                //     PutBlock();
                // }
                // else
                // {
                //     DoBlockToPosStart();
                // }
            }
        }

        private void ShowShadow()
        {
        }

        // when block can't put into frame
        private void DoBlockToPosStart()
        {
            _block.Trf.DOScale(.68f, .1f).SetEase(Ease.Linear).From(1);
            _block.Trf.DOMove(_position, .05f).SetEase(Ease.Linear);
            //_block.GetComponent<_CreatorBlock>().ResetWhenUnPick();
        }

        private void PutBlock()
        {
          //  _block.GetComponent<_CreatorBlock>().PutBlock();
            _block.Trf.position = _position;
        }
    }
}