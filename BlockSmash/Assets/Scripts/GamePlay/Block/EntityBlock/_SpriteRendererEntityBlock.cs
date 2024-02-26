using DG.Tweening;
using UnityEngine;

namespace GamePlay
{
    public class _SpriteRendererEntityBlock
    {
        private readonly SpriteRenderer _spriteRenderer;

        public _SpriteRendererEntityBlock(SpriteRenderer spriteRenderer)
        {
            _spriteRenderer = spriteRenderer;
            _spriteRenderer.sortingOrder = 1;
        }

        public void SetShadow()
        {
            _spriteRenderer.DOFade(0.68f, 0);
        }
    }
}