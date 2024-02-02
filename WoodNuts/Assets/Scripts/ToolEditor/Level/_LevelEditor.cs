using System.Collections.Generic;
using System.Linq;
using Cysharp.Threading.Tasks.Triggers;
using Extensions.GameObjects;
using Sirenix.OdinInspector;
using UnityEngine;

namespace ToolEditor.Level
{
    public class _LevelEditor : MonoBehaviour
    {
#if UNITY_EDITOR

        [SerializeField] private int _numLevel;

        private GameObject _level;

        private string NameLevel
        {
            get
            {
                var nameLevel = $"Level_{_numLevel}";
                var go = transform.Find(nameLevel);
                if (go != null) return nameLevel;
                if (transform.childCount <= 0)
                    return nameLevel;
                go = transform.GetChild(0);
                if (go.name.Contains("Level")) return go.name;
                return nameLevel;
            }
        }

        private bool IsLevel => transform.childCount > 0 && transform.GetChild(0).name.Contains("Level");

        private void CreateLevelGameObject(string nameLevel)
        {
            _level = new GameObject(nameLevel);
            _level.transform.SetParent(transform);
            var prefab = Resources.Load<GameObject>("BackGround");
            var bg = prefab.CreateGameObject(Vector3.zero, prefab.transform.rotation, _level.transform);
            bg.name = "BackGround";
        }

        private void CheckExistLevel()
        {
            if (IsLevel) return;
            CreateLevelGameObject(NameLevel);
        }

        private _HoleEditor EmptyHole()
        {
            CheckExistLevel();
            var prefab = Resources.Load<GameObject>("Hole");
            var hole = prefab.CreateGameObject(_level.transform);
            hole.name = "EmptyHole";
            return hole.GetComponent<_HoleEditor>();
        }

        private _Screw CreateScrew()
        {
            var prefab = Resources.Load<GameObject>("Screw");
            var screw = prefab.CreateGameObject(_level.transform);
            screw.name = "Screw";
            return screw.GetComponent<_Screw>();
        }

        [Button]
        private void CreateEmptyHole()
        {
            EmptyHole();
        }

        [Button]
        private void CreateHoleHasScrew()
        {
            var hole = EmptyHole();
            hole.name = "Hole";
            var screw = CreateScrew();
            if (hole.TryGetComponent<_HoleEditor>(out var holeEditor))
            {
                holeEditor.Screw = screw.transform;
            }
        }

        [Button]
        private void CreateBar()
        {
            var prefab = Resources.Load<GameObject>("Bar");
            var bar = prefab.CreateGameObject(_level.transform);
            bar.name = "Bar";
        }

        // lay tat ca cac hole, ca empty hole va hole co screw
        private List<Transform> ListHoles()
        {
            var list = _level.GetComponentsInChildren<_HoleEditor>();
            var result = new List<Transform>();
            foreach (var hole in list)
            {
                result.Add(hole.transform);
            }

            return result;
        }
        
        [Button]
        private void Set()
        {
            // create mask hole co trong level
            var maskHolePrefab = Resources.Load<GameObject>("MaskHole");
            var bg = _level.transform.Find("BackGround");
            foreach (var hole in ListHoles())
            {
                var maskHole = maskHolePrefab.CreateGameObject(hole.position, bg);
                maskHole.name = maskHolePrefab.name;
            }
        }
        
#endif
    }
}