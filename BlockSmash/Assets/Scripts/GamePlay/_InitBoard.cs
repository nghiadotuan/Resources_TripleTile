using System;
using UnityEngine;

namespace GamePlay
{
    [Serializable]
    public class _InitBoard
    {
        [SerializeField] private Sprite _spriteBoard; 
        [SerializeField] private Vector2Int _sizeBoard;
        [SerializeField] private Vector2 _posBoard;
        [SerializeField] private Vector2 _posFirstBlock;

        public Sprite SpriteBoard => _spriteBoard;
        public Vector2Int SizeBoard => _sizeBoard;
        public Vector2 PosBoard => _posBoard;
        public Vector2 PosFirstBlock => _posFirstBlock;
    }
}