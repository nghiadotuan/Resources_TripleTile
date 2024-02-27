using System;
using Cysharp.Threading.Tasks;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

namespace GamePlay
{
    public class _EntityBlockFacade : MonoBehaviour
    {
        [ShowInInspector] public sbyte X { get; set; }
        [ShowInInspector] public sbyte Y { get; set; }
        [ShowInInspector] public bool IsActive { get; private set; }

        [ShowInInspector] public sbyte XEntity { get; set; }
        [ShowInInspector] public sbyte YEntity { get; set; }

        public _SpriteRendererEntityBlock SpriteRenderer { get; private set; }

        public Vector3 Pos => transform.position;

        private void Awake()
        {
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

        public void Destroy()
        {
            IsActive = false;
            transform.DOScale(0, .15f).SetEase(Ease.Flash).OnComplete(() =>
            {
                SetActive(false);
                transform.localScale = Vector3.one;
            });
        }

        // private void WaitDestroy()
        // {
        //     SetActive(false);
        //     transform.DOScale(0, .15f).SetEase(Ease.Flash);
        //     await UniTask.Delay(TimeSpan.FromSeconds(0.15f), cancellationToken: this.GetCancellationTokenOnDestroy());
        //     transform.localScale = Vector3.one;
        // }
    }
}