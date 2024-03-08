using System;
using System.Threading;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

namespace GamePlay
{
    public class _PieceBlockFacade
    {
        private readonly CancellationTokenSource _cts;

        public _PieceBlockFacade(Transform transform, CancellationTokenSource cts)
        {
            Trf = transform;
            _cts = cts;
            SpriteRenderer = new _SpriteRendererPieceBlock(transform.GetComponent<SpriteRenderer>());
        }

        [ShowInInspector] public sbyte X { get; set; }
        [ShowInInspector] public sbyte Y { get; set; }
        [ShowInInspector] public bool IsActive { get; private set; }

        [ShowInInspector] public _SpriteRendererPieceBlock SpriteRenderer { get; private set; }
        public Transform Trf { get; }

        public Vector3 Pos => Trf.position;

        public void SetXY(sbyte x, sbyte y)
        {
            X = x;
            Y = y;
        }

        public void SetActive(bool isActive)
        {
            IsActive = isActive;
            Trf.gameObject.SetActive(isActive);
        }

        public async void Destroy()
        {
            if (!IsActive) return;
            IsActive = false;
            Trf.DOKill();
            Trf.DOScale(0, .15f).SetEase(Ease.Flash);
            await UniTask.Delay(TimeSpan.FromSeconds(0.2f), cancellationToken: _cts.Token);
            SetActive(false);
            Trf.DOKill();
            Trf.localScale = Vector3.one;
        }
    }
}