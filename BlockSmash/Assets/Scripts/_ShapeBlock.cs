using System.Collections.Generic;
using Extensions.Random;
using Sirenix.OdinInspector;

[System.Serializable]
public class _ShapeBlock
{
    [ShowInInspector] public List<bool[,]> Shapes;
    public bool[,] Shape => Shapes[_Random.Value(Shapes.Count)];
}