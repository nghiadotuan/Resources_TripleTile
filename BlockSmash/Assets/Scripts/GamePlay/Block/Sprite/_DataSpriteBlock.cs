using UnityEngine;

namespace GamePlay
{
    [CreateAssetMenu(menuName = "GamePlay/Sprite Block")]
    public class _DataSpriteBlock : ScriptableObject
    {
        [SerializeField] private Sprite[] _sprites;

        public Sprite GetSprite(int index) => _sprites[index];

        public Sprite GetRandomSprite => _sprites[Random.Range(0, _sprites.Length)];
    }
}