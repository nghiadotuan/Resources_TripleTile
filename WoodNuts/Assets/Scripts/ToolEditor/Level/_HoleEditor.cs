using Sirenix.OdinInspector;
using UnityEditor;
using UnityEngine;

namespace ToolEditor.Level
{
    [ExecuteInEditMode]
    public class _HoleEditor : MonoBehaviour, _ISetAble
    {

        [ShowInInspector] public Transform Screw { get; set; }

        private void Update()
        {
            #if UNITY_EDITOR
            if (EditorApplication.isPlaying) return;
            #endif
            if (Screw != null)
                Screw.position = transform.position;
        }

        public void Set()
        {
            if(Screw == null) return;
            if (TryGetComponent<_Hole>(out var hole))
            {
                hole.Screw = Screw.GetComponent<_Screw>();
            }
            else
            {
                gameObject.AddComponent<_Hole>().Screw = Screw.GetComponent<_Screw>();
            }
        }
        
    }
}