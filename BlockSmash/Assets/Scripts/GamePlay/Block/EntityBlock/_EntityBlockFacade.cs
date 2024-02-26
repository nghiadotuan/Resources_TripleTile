using Sirenix.OdinInspector;
using UnityEngine;

namespace GamePlay
{
    public class _EntityBlockFacade  : MonoBehaviour
    {
        [ShowInInspector] public sbyte X { get; set; }
        [ShowInInspector] public sbyte Y { get; set; }
        [ShowInInspector] public bool IsActive { get; set; }

        public _SpriteRendererEntityBlock SpriteRenderer { get; private set; }

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
    }
}