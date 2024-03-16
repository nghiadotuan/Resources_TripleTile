using System;
using Cysharp.Threading.Tasks;
using Extensions.MyPoolObject;
using UnityEngine;

namespace GamePlay
{
    public class _EffectDestroyBlock : MonoBehaviour, _IPoolAble
    {
        [SerializeField] private ParticleSystem[] _dust;

        private Transform _trf;

        private void Awake()
        {
            _trf = transform;
        }

        public void DoShow(ParticleSystem.MinMaxGradient color)
        {
            foreach (var ps in _dust)
            {
                var colorLifeTime = ps.colorOverLifetime;
                colorLifeTime.color = color;
            }

            WaiDeActive().Forget();
        }

        private async UniTask WaiDeActive()
        {
            Active();
            await UniTask.Delay(TimeSpan.FromSeconds(2), cancellationToken: this.GetCancellationTokenOnDestroy());
            Deactivate();
        }

        public bool IsActive { get; private set; }

        public void Active()
        {
            IsActive = true;
            gameObject.SetActive(true);
            GetComponent<ParticleSystem>().Play();
        }

        public void Deactivate()
        {
            IsActive = false;
            gameObject.SetActive(false);
        }

        public GameObject GetGameObject(Vector3 pos, Quaternion rotation)
        {
            _trf.position = pos;
            _trf.rotation = rotation;
            return gameObject;
        }
    }
}