using UI;
using UnityEngine;

namespace GamePlay
{
    public static class _DataGamePlay
    {
        private const string _KEY_HIGH_SCORE = "highScore";
        private static int _score;

        public static int Score
        {
            get => _score;
            set
            {
                _score = value;
                if (value > HighScore)
                    HighScore = value;
                _UIGame.OnSetTextScore?.Invoke();
            }
        }

        public static int HighScore
        {
            get => PlayerPrefs.GetInt(_KEY_HIGH_SCORE, 0);
            set => PlayerPrefs.SetInt(_KEY_HIGH_SCORE, value);
        }
    }
}