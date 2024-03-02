using System;
using UnityEngine;

namespace GamePlay
{
    [Serializable]
    public class _DataEffectSO
    {
        [SerializeField] private _EffectDestroyBlock _prefabEffectDestroyBlock;
        public _EffectDestroyBlock PrefabEffectDestroyBlock => _prefabEffectDestroyBlock;
    }
}