using UnityEngine;

namespace Extensions.GameObjects
{
    public class _DontDestroyOnLoad : MonoBehaviour
    {
        private void Awake()
        {
            DontDestroyOnLoad(gameObject);
        }
    }
}