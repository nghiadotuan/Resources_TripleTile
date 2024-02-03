using System.Collections.Generic;
using Extensions.GameObjects;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.UI;

namespace ToolEditor.Level
{
    public class _LevelEditor : MonoBehaviour
    {
#if UNITY_EDITOR

        [SerializeField] private int _numLevel;

        private GameObject _level;
        private int _numCountHoleScrew;

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
            _numCountHoleScrew = 0;
            _level = new GameObject(nameLevel);
            _level.transform.SetParent(transform);
            // create bg
            var prefabBg = Resources.Load<GameObject>("BackGround");
            var bg = prefabBg.CreateGameObject(Vector3.zero, prefabBg.transform.rotation, _level.transform);
            bg.name = "BackGround";

            // create canvas
            var prefabCanvas = Resources.Load<GameObject>("Canvas");
            var canvas = prefabCanvas.CreateGameObject(_level.transform);
            canvas.name = "Canvas";
            canvas.GetComponent<Canvas>().worldCamera = Camera.main;
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
            => Resources.Load<GameObject>("Screw").CreateGameObject(_level.transform).GetComponent<_Screw>();

        [Button]
        private void CreateEmptyHole()
        {
            EmptyHole();
        }

        [Button]
        private void CreateHoleHasScrew()
        {
            _numCountHoleScrew++;
            var hole = EmptyHole();
            hole.name = $"Hole_Screw_{_numCountHoleScrew}";
            var screw = CreateScrew();
            screw.name = $"Screw_{_numCountHoleScrew}";
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

        // tao button click vao hole
        private void CreateBtn(Transform hole, Transform canvas)
        {
            var prefab = Resources.Load<GameObject>("ButtonClickHole");
            var pos = RectTransformUtility.WorldToScreenPoint(Camera.main, hole.position);
            var btn = prefab.CreateGameObject(pos: pos, canvas);
            btn.GetComponent<Button>().onClick.AddListener(hole.GetComponent<_Hole>().OnClick);
        }

        [Button]
        private void Set()
        {
            // create mask hole co trong level
            var maskHolePrefab = Resources.Load<GameObject>("MaskHole");
            if (_level == null)
            {
                _level = transform.GetChild(0).gameObject;
                if (_level == null)
                {
                    Debug.LogError("Level gameObject is null");
                    return;
                }
            }

            var bg = _level.transform.Find("BackGround");
            var canvas = _level.transform.Find("Canvas");

            // delete old mask in bg
            foreach (var mask in bg.GetComponentsInChildren<SpriteMask>())
            {
                DestroyImmediate(mask.gameObject);
            }
            
            // delete old btn in canvas
            foreach (var btn in canvas.GetComponentsInChildren<Button>())
            {
                DestroyImmediate(btn.gameObject);
            }
            
            foreach (var hole in ListHoles())
            {
                var maskHole = maskHolePrefab.CreateGameObject(hole.position, bg);
                maskHole.name = maskHolePrefab.name;
                CreateBtn(hole, canvas);
            }

            foreach (Transform child in _level.transform)
            {
                if (child.TryGetComponent<_ISetAble>(out var setAble))
                {
                    setAble.Set();
                }
            }
        }

#endif
    }
}