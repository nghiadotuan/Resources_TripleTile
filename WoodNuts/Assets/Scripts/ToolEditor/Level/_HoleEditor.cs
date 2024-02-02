using Sirenix.OdinInspector;
using UnityEditor;
using UnityEngine;

namespace ToolEditor.Level
{
    [ExecuteInEditMode]
    public class _HoleEditor : MonoBehaviour
    {
#if UNITY_EDITOR

        [ShowInInspector] public Transform Screw { get; set; }

        private void Update()
        {
            if (EditorApplication.isPlaying) return;
            if (Screw != null)
                Screw.position = transform.position;
        }

#endif
    }
}