using System;

namespace GamePlay
{
    public static class _EventGamePlay
    {
        public static Action NextGenBlock { get; set; }
        public static Action GenEasyBlock { get; set; }
        public static Action UseLittleBoom { get; set; }
        public static Action UseBigBoom { get; set; }
        public static Func<bool> IsGameOver { get; set; }
    }
}