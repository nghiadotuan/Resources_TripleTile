using System;
using GamePlay;
using TMPro;
using UnityEngine;

namespace UI
{
    public class _UIGame : MonoBehaviour
    {
        [SerializeField] private TextMeshProUGUI _textScore;

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
    }
}