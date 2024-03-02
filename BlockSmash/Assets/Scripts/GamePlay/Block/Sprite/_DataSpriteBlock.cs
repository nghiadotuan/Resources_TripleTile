using System.Collections.Generic;
using Extensions.Random;
using UnityEngine;

namespace GamePlay
{
    [CreateAssetMenu(menuName = "GamePlay/Sprite Block")]
    public class _DataSpriteBlock : ScriptableObject
    {
        [SerializeField] private Sprite[] _sprites;
        [SerializeField] private Sprite _spritesDisable;
        [SerializeField] private List<ParticleSystem.MinMaxGradient> _listColorEffect;

        public ParticleSystem.MinMaxGradient ColorEffect(int index) => _listColorEffect[index];

        public Sprite GetSprite(int index) => _sprites[index];
        public Sprite SpriteDisable => _spritesDisable;

        public Sprite GetRandomSprite => _sprites[Random.Range(0, _sprites.Length)];
        public int RandomIndex => _Random.Value(_sprites.Length);
        public int IndexSprite(int index) => index < _sprites.Length ? index : index - _sprites.Length;
    }
}