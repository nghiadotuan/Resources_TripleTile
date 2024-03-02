﻿using System.Threading;
using Sirenix.OdinInspector;
using UnityEngine;

namespace GamePlay
{
    public class _InputFacade : MonoBehaviour
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
            _BoardGame boardGame,
            _DataInputGame dataInputGame,
            _DataSpriteBlock dataSpriteBlock,
            CancellationTokenSource cts
        )
        {
            var box = gameObject.AddComponent<BoxCollider2D>();
            box.size = size;
            transform.position = pos;
            _block = new _Block(dataCreateBlock, prefab, pos, dataInputGame, dataSpriteBlock, dataCreateBlock.ScaleBlock);
            _inputLogic = new _InputLogic(cam, pos, _block, boardGame, dataInputGame, cts);
        }

        public bool IsPut => _inputLogic.IsPut;
        public bool IsNotSelect { get; private set; }

        private void OnMouseDown()
        {
            if (_inputLogic.IsPut) return;
            _inputLogic.OnMouseDown();
        }

        public void GenBlock(_ShapeBlock shape, int indexSprite)
        {
            _inputLogic.IsPut = false;
            _block.GenBlock(shape);
            _block.SetSpriteBlock(indexSprite);
            _block.Trf.gameObject.SetActive(true);
            CheckSelect();
        }

#if UNITY_EDITOR

        [SerializeField] private _DataGenBlockSO _data;

        [Button]
        private void GenBlock(_TypeBlockEnum type)
        {
            _block.GenBlock(_data.DicShapeBlock[type]);
        }

        [Button]
        private void LogCheckBlockCanSelect()
        {
            Debug.Log(_inputLogic.IsCheckSelect());
        }

#endif

        public void CheckSelect()
        {
            IsNotSelect = _inputLogic.IsCheckSelect();
        }
    }
}