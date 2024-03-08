using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;
using UnityEngine.Serialization;

namespace GamePlay
{
    [CreateAssetMenu(menuName = "GamePlay/Init GamePlay")]
    public class _GamePlayInit : ScriptableObject
    {
        [SerializeField, TabGroup("Board")] private _InitBoard _initBoard;
        [SerializeField, TabGroup("Input")] private _InitInput _initInput;
        [SerializeField, TabGroup("Block")] private _DataCreateBlock _dataCreateBlock;
        [SerializeField, TabGroup("Block")] private List<_DataSpriteBlock> _listDataSpriteBlock;
        [SerializeField, TabGroup("Block")] private _DataRatioGenBlockSO _dataRatioGenBlock;
        [SerializeField, TabGroup("Camera")] private _DataCameraDefault _dataCameraDefault;
        [SerializeField, TabGroup("Effect")] private _DataEffectSO _dataEffect;

        [SerializeField, TabGroup("Common")] private float _distanceEntityBlock;
        [SerializeField, TabGroup("Common")] private float _distanceCheckPutBlock;
        [SerializeField, TabGroup("Common")] private GameObject _prefabPieceBlock;

        public void Init()
        {
            _dataCreateBlock.Init();
        }

        public _InitBoard InitBoard => _initBoard;
        public _InitInput InitInput => _initInput;
        public _DataCreateBlock DataCreateBlock => _dataCreateBlock;
        public _DataSpriteBlock DataSpriteBlock => _listDataSpriteBlock[Random.Range(0, _listDataSpriteBlock.Count - 1)];
        public _DataRatioGenBlockSO DataRatioGenBlockSo => _dataRatioGenBlock;
        public _DataCameraDefault DataCameraDefault => _dataCameraDefault;
        public _DataEffectSO DataEffect => _dataEffect;
        public float DistanceEntityBlock => _distanceEntityBlock;
        public float DistanceCheckPutBlock => _distanceCheckPutBlock;
        public GameObject PrefabPieceBlock => _prefabPieceBlock;
    }
}