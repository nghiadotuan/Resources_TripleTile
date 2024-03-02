using System;
using Cysharp.Threading.Tasks;
using UnityEngine;

namespace GamePlay
{
    public class _EffectDestroyBlock : MonoBehaviour
    {
        [SerializeField] private ParticleSystem[] _dust;

        public void DoShow(ParticleSystem.MinMaxGradient color)
        {
            foreach (var ps in _dust)
            {
                var colorLifeTime = ps.colorOverLifetime;
                colorLifeTime.color = color;
            }

            WaiDestroy().Forget();
        }

        private async UniTask WaiDestroy()
        {
            await UniTask.Delay(TimeSpan.FromSeconds(3), cancellationToken: this.GetCancellationTokenOnDestroy());
            Destroy(gameObject);
        }
    }
}