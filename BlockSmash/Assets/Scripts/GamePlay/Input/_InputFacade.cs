using Sirenix.OdinInspector;
using UnityEngine;

namespace GamePlay
{
    public class _InputFacade : MonoBehaviour, _IUpdateAble
    {
        [ShowInInspector] private _InputLogic _inputLogic;
        private _Block _block;

        public void Init
        (
            Camera cam,
            Vector2 pos,
            Vector2 size,
            _DataCreateBlock dataCreateBlock,
            _EntityBlockFacade prefab,
            _BoardGame boardGame
        )
        {
            var box = gameObject.AddComponent<BoxCollider2D>();
            box.size = size;
            transform.position = pos;
            _block = new _Block(dataCreateBlock, prefab, pos);
            _inputLogic = new _InputLogic(cam, pos, _block, boardGame);
        }

        public bool IsPut => _inputLogic.IsPut;

        private void OnMouseDown()
        {
            if (_inputLogic.IsPut) return;
            _inputLogic.OnMouseDown();
        }

        public void GenBlock(_ShapeBlock shape, Sprite sprite)
        {
            _inputLogic.IsPut = false;
            _block.GenBlock(shape);
            _block.SetSpriteBlock(sprite);
            _block.Trf.gameObject.SetActive(true);
        }

#if UNITY_EDITOR

        [SerializeField] private _DataGenBlockSO _data;

        [Button]
        private void GenBlock(int index)
        {
            if (index >= _data.ListShapeBlock.Count)
            {
                index = _data.ListShapeBlock.Count - 1;
            }

            _block.GenBlock(_data.ListShapeBlock[index]);
        }

#endif
        public void OnUpdate(float deltaTime)
        {
            _inputLogic.OnUpdate(deltaTime);
        }
    }
}