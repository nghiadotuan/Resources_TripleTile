namespace Extensions.Random
{
    public static class _Random
    {
        private static readonly System.Random _random = new();

        public static int Value(int count) => _random.Next(0, count);
        public static int Value(int min, int max) => _random.Next(min, max);

        public static float Value(float min, float max) => (float) _random.NextDouble() * (max - min) + min;
    }
}