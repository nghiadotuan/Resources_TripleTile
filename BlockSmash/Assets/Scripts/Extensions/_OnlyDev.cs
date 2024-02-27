using System;
using Sirenix.OdinInspector;
using UnityEngine;

namespace Extensions
{
    public class _OnlyDev  : MonoBehaviour
    {
        public static _OnlyDev Instance;

        [ShowInInspector] public _ShapeBlock ShapeBlock;

        private void Awake()
        {
            Instance = this;
        }
    }
}