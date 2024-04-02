using System;
using GamePlay;
using TMPro;
using UnityEngine;

namespace UI
{
    public class _UIGame : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI _textScore;
        [SerializeField] private GameObject _prefabBtnBooster;

        public static Action OnSetTextScore { get; private set; }

        private void Awake()
        {
            _DataGamePlay.Score = 0;
            OnSetTextScore = SetTextScore;
            SetTextScore();
        }

        private void SetTextScore()
        {
            _textScore.SetText(_DataGamePlay.Score.ToString());
        }

        public void CreateBtnBooster(Vector2[] posBlocks)
        {
        }

        public void OnClickBtnShuffle()
        {
            _EventGamePlay.GenEasyBlock?.Invoke();
        }

        public void OnClickBtnLittleBoom()
        {
            _EventGamePlay.UseLittleBoom?.Invoke();
        }

        public void OnClickBtnBigBoom()
        {
            _EventGamePlay.UseBigBoom?.Invoke();
        }
    }
}