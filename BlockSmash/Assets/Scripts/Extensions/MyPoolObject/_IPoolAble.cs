using UnityEngine;

namespace Extensions.MyPoolObject
{
    public interface _IPoolAble
    {
        public bool IsActive { get; }

        void Active();

        void Deactivate();

        GameObject GetGameObject(Vector3 pos = default, Quaternion rotation = default);
    }
}