﻿using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

namespace GamePlay
{
    [CreateAssetMenu(menuName = "GamePlay/Init GamePlay")]
    public class _GamePlayInit : ScriptableObject
    {
        [SerializeField, TabGroup("Board")] private _InitBoard _initBoard;
        [SerializeField, TabGroup("Input")] private _InitInput _initInput;
        [SerializeField, TabGroup("Block")] private _DataCreateBlock _dataCreateBlock;
        [SerializeField, TabGroup("Block")] private List<_DataSpriteBlock> _listDataSpriteBlock;
        [SerializeField, TabGroup("Common")] private float _distanceEntityBlock;
        [SerializeField, TabGroup("Common")] private float _distanceCheckPutBlock;
        [SerializeField, TabGroup("Common")] private _EntityBlockFacade _prefabEntityBlock;

        public void Init()
        {
            _dataCreateBlock.Init();
        }

        public _InitBoard InitBoard => _initBoard;
        public _InitInput InitInput => _initInput;
        public _DataCreateBlock DataCreateBlock => _dataCreateBlock;
        public _DataSpriteBlock DataSpriteBlock => _listDataSpriteBlock[Random.Range(0, _listDataSpriteBlock.Count-1)];
        public float DistanceEntityBlock => _distanceEntityBlock;
        public float DistanceCheckPutBlock => _distanceCheckPutBlock;
        public _EntityBlockFacade PrefabEntityBlock => _prefabEntityBlock;
    }
}