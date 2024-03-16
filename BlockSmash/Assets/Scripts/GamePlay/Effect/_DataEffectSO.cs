using System;
using UnityEngine;

namespace GamePlay
{
    [Serializable]
    public class _DataEffectSO
    {
        [SerializeField] private GameObject _prefabEffectDestroyBlock;
        public GameObject PrefabEffectDestroyBlock => _prefabEffectDestroyBlock;
    }
}