using System.Collections.Generic;
using System.Linq;
using Extensions.GameObjects;
using UnityEngine;

namespace Extensions.MyPoolObject
{
    public static class _PoolObject
    {
        private static readonly Dictionary<int, List<_IPoolAble>> _dic = new();
        private static readonly Dictionary<int, Transform> _dicParent = new();

        private static Transform GetParent(GameObject root, int id)
        {
            if (_dicParent.TryGetValue(id, out var parent)) return parent;
            var trf = new GameObject(root.name).transform;
            _dicParent.Add(id, trf);
            return trf;
        }

        private static List<_IPoolAble> GetListPool(_IPoolAble root, int id)
        {
            if (_dic.TryGetValue(id, out var pool)) return pool;
            var list = new List<_IPoolAble>();
            _dic.Add(id, list);
            return list;
        }

        public static _IPoolAble GetPool(this GameObject root, Vector3 pos = default, Quaternion rotation = default)
        {
            if (!root.TryGetComponent<_IPoolAble>(out var component))
            {
                Debug.LogError("Game Object hasn't pool able");
            }

            var id = root.GetHashCode();
            var list = GetListPool(component, id);
            foreach (var pool in list.Where(pool => !pool.IsActive))
            {
                pool.GetGameObject(pos, rotation);
                return pool;
            }

            var instance = root.CreateGameObject(pos, rotation, GetParent(root, id)).GetComponent<_IPoolAble>();
            list.Add(instance);
            return instance;
        }

        public static T GetPool<T>(this GameObject root, Vector3 pos = default, Quaternion rotation = default) where T : _IPoolAble
        {
            if (!root.TryGetComponent<_IPoolAble>(out var component))
            {
                Debug.LogError("Game Object hasn't pool able");
            }

            var id = root.GetHashCode();
            var list = GetListPool(component, id);
            foreach (var pool in list.Where(pool => !pool.IsActive))
            {
                return pool.GetGameObject(pos, rotation).GetComponent<T>();
            }

            var instance = root.CreateGameObject(GetParent(root, id)).GetComponent<_IPoolAble>();
            list.Add(instance);
            return instance.GetGameObject(pos,rotation).GetComponent<T>();
        }

        public static void Dispose()
        {
            _dic?.Clear();
            _dicParent?.Clear();
        }
    }
}