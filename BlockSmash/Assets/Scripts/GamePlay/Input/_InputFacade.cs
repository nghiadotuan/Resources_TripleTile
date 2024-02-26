using Sirenix.OdinInspector;
using UnityEngine;

namespace GamePlay
{
    public class _InputFacade : MonoBehaviour, _IUpdateAble
    {
        private _InputBlock _inputBlock;
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
            _inputBlock = new _InputBlock(cam, pos, _block, boardGame);
        }

        private void OnMouseDown()
        {
            _inputBlock.OnMouseDown();
        }

        public void GenBlock(_ShapeBlock shape)
        {
            _block.GenBlock(shape);
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
            _inputBlock.OnUpdate(deltaTime);
        }
    }
}