﻿using DG.Tweening;
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

        public Sprite RootSprite { get; private set; }
        public Sprite SpriteBlock => _spriteRenderer.sprite;

        public void SetShadow()
        {
            _spriteRenderer.DOFade(0.68f, 0);
        }

        public void SetBlock()
        {
            _spriteRenderer.DOFade(1, 0);
        }

        public void SetSortingOrder(int value)
        {
            _spriteRenderer.sortingOrder = value;
        }

        public void SetSpriteBlock(Sprite sprite)
        {
            RootSprite = sprite;
            _spriteRenderer.sprite = sprite;
        }

        public void SetHighLightSprite(Sprite sprite)
        {
            _spriteRenderer.sprite = sprite;
        }

        public void SetRootSprite()
        {
            _spriteRenderer.sprite = RootSprite;
        }
    }
}