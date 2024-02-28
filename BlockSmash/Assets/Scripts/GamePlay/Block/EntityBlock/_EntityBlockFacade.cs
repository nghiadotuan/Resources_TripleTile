using System;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

namespace GamePlay
{
    public class _EntityBlockFacade : MonoBehaviour
    {
        private Transform _trf;

        [ShowInInspector] public sbyte X { get; set; }
        [ShowInInspector] public sbyte Y { get; set; }
        [ShowInInspector] public bool IsActive { get; private set; }

        [ShowInInspector] public sbyte XEntity { get; set; }
        [ShowInInspector] public sbyte YEntity { get; set; }

        [ShowInInspector] public _SpriteRendererEntityBlock SpriteRenderer { get; private set; }

        public Vector3 Pos => transform.position;

        private void Awake()
        {
            _trf = transform;
            SpriteRenderer = new _SpriteRendererEntityBlock(GetComponent<SpriteRenderer>());
        }

        public void SetXY(sbyte x, sbyte y)
        {
            X = x;
            Y = y;
        }

        public void SetActive(bool isActive)
        {
            IsActive = isActive;
            gameObject.SetActive(isActive);
        }

        public async void Destroy()
        {
            if (!IsActive) return;
            IsActive = false;
            _trf.DOKill();
            _trf.DOScale(0, .15f).SetEase(Ease.Flash);
            await UniTask.Delay(TimeSpan.FromSeconds(0.2f), cancellationToken: this.GetCancellationTokenOnDestroy());
            SetActive(false);
            _trf.DOKill();
            _trf.localScale = Vector3.one;
        }
    }
}