﻿using System;

namespace GamePlay
{
    public static class _EventGamePlay
    {
        public static Action NextGenBlock { get; set; }
        public static Func<bool> IsGameOver { get; set; }
    }
}