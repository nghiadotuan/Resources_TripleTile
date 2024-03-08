using System.Collections.Generic;
using Extensions.Random;
using Sirenix.OdinInspector;

namespace GamePlay
{
    [System.Serializable]
    public class _ShapeBlock
    {
        [ShowInInspector] public List<bool[,]> Shapes;
        public bool[,] Shape => Shapes[_Random.Value(Shapes.Count)];
    }
}