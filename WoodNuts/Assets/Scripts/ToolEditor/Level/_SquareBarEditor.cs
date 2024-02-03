using System.Collections.Generic;
using Extensions.GameObjects;
using Sirenix.OdinInspector;
using UnityEngine;

namespace ToolEditor.Level
{
    public class _SquareBarEditor : MonoBehaviour, _ISetAble
    {
#if UNITY_EDITOR

        [SerializeField] private List<Transform> _listHoles;

        private void SetPosBar(List<Transform> listHoles)
        {
            var pointStart = listHoles[0].position;
            var pointEnd = listHoles[^1].position;

            // trung diem
            var midPoint = pointStart + pointEnd;
            midPoint /= 2;
            transform.position = midPoint;

            // set goc xoay bar
            var angleRadians = Mathf.Atan2(pointEnd.y - pointStart.y, pointEnd.x - pointStart.x);
            var angleDegrees = angleRadians * Mathf.Rad2Deg;
            if (angleDegrees < 0)
            {
                angleDegrees += 360;
            }

            var rot = Quaternion.Euler(0, 0, angleDegrees);
            transform.rotation = rot;
        }

        private void CreateMaskBar(List<Transform> listHoles)
        {
            // destroy available child 
            var listChild = transform.GetComponentsInChildren<SpriteMask>();
            foreach (var child in listChild)
            {
                DestroyImmediate(child.gameObject);
            }

            // create
            var prefabMaskHole = Resources.Load<GameObject>("MaskBar");
            foreach (var hole in listHoles)
            {
                var maskHole = prefabMaskHole.CreateGameObject(hole.position, Quaternion.identity, transform);
            }
        }

        private void SetSizeBar(List<Transform> listHoles)
        {
            var pointStart = listHoles[0].position;
            var pointEnd = listHoles[^1].position;
            pointStart.z = pointEnd.z = 0;
            var distance = Vector3.Distance(pointStart, pointEnd);
            var spriteRenderer = GetComponent<SpriteRenderer>();
            spriteRenderer.drawMode = SpriteDrawMode.Sliced;
            spriteRenderer.size = new Vector2(distance + 1, 1);
        }

        private void SetComponent()
        {
            GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Kinematic;
            SetSizeCollider();
        }

        [Button]
        private void SetBar()
        {
            SetPosBar(_listHoles);
            CreateMaskBar(_listHoles);
            SetSizeBar(_listHoles);
            SetComponent();
        }

        [Button]
        private void SetSizeCollider()
        {
            var collier = GetComponent<BoxCollider2D>();
            var spriteRenderer = GetComponent<SpriteRenderer>();
            collier.size = spriteRenderer.size;
        }

        public void Set()
        {
            var list = new List<_Hole>();
            foreach (var hole in _listHoles)
            {
                list.Add(hole.GetComponent<_Hole>());
            }
            if (TryGetComponent<_Bar>(out var bar))
            {
                bar.SetData(list);
            }
            else
            {
                gameObject.AddComponent<_Bar>().SetData(list);
            }
        }

#endif
    }
}