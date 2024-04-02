using System;
using System.Collections.Generic;
using Extensions.Random;
using UnityEngine;

namespace GamePlay
{
    [CreateAssetMenu(menuName = "GamePlay/Ratio Gen Block")]
    public class _DataRatioGenBlockSO : ScriptableObject
    {
        [SerializeField] private List<DataRatioGenBlockFollowScore> _listData;

        public _TypeBlockEnum GetType(int score)
        {
            foreach (var data in _listData)
            {
                if (score <= data.Score) return data.GetTypeBlock();
            }

            return _listData[0].GetTypeBlock();
        }

        public _TypeBlockEnum EasyType => _listData[0].GetTypeBlock();
    }

    [Serializable]
    public class DataRatioGenBlockFollowScore
    {
        public ushort Score;
        public List<DataChildRatioTypeBlock> ListData;

        public _TypeBlockEnum GetTypeBlock()
        {
            var rand = _Random.Value(100);
            float value = 0;
            foreach (var data in ListData)
            {
                value += data.Value;
                if (rand <= value) return data.Type;
            }

            return ListData[0].Type;
        }
    }

    [Serializable]
    public class DataChildRatioTypeBlock
    {
        public _TypeBlockEnum Type;
        public float Value;
    }
}