using Sirenix.OdinInspector;
using UnityEngine;

namespace GamePlay
{
    public class _EntityBlockFacade : MonoBehaviour
    {
        [ShowInInspector] public sbyte X { get; set; }
        [ShowInInspector] public sbyte Y { get; set; }
        [ShowInInspector] public bool IsActive { get; set; }

        [ShowInInspector] public sbyte XShadow { get; set; } = -1;
        [ShowInInspector] public sbyte YShadow { get; set; } = -1;

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
            gameObject.SetActive(isActive);
        }

        public void SetXYShadow(sbyte x, sbyte y)
        {
            XShadow = x;
            YShadow = y;
        }
    }
}