using System.Collections.Generic;
using Sirenix.OdinInspector;
using UnityEngine;

[System.Serializable]
public class _ShapeBlock
{
    [ShowInInspector] public List<bool[,]> Shapes;
    public _LevelBlockEnum LevelBlock;
    public bool[,] Shape => Shapes[Random.Range(0, Shapes.Count - 1)];
}