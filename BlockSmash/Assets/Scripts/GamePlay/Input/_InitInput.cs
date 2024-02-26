using UnityEngine;

namespace GamePlay
{
    [System.Serializable] 
    public class _InitInput
    {
        [SerializeField] private Vector2 _sizeColliderInput;
        [SerializeField] private Vector2[] _posInput;

        public Vector2[] PosInput => _posInput;
        public Vector2 SizeColliderInput => _sizeColliderInput;
    }
}