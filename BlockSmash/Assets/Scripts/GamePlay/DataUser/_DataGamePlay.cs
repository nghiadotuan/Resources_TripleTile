using UI;

namespace GamePlay
{
    public static class _DataGamePlay
    {
        private static int _score;

        public static int Score
        {
            get => _score;
            set
            {
                _score = value;
                _UIGame.OnSetTextScore?.Invoke();
            }
        }

    }
}