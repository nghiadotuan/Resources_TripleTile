using Sirenix.OdinInspector;
using UnityEngine;

public class _EntityBlock : MonoBehaviour
{
    [ShowInInspector] public sbyte X { get; set; }
    [ShowInInspector] public sbyte Y { get; set; }

    [ShowInInspector] public bool IsActive { get; set; }

    public void SetId(sbyte x, sbyte y)
    {
        X = x;
        Y = y;
    }

    public void SetIdShadow(sbyte x, sbyte y)
    {
        if (x == X && y == Y) return;
        if (X >= 0 && Y >= 0)
            _Board.Instance.GetShadow((byte) X, (byte) Y).SetActive(false);
        X = x;
        Y = y;
    }

    public void ResetId()
    {
        if (X >= 0 && Y >= 0)
            _Board.Instance.GetShadow((byte) X, (byte) Y).SetActive(false);
        X = -1;
        Y = -1;
    }

    public bool IsShowShadow => X >= 0 && Y >= 0;

    [Button]
    private void CheckDistance(GameObject go)
    {
        var pos = transform.position;
        var pos2 = go.transform.position;
        Debug.Log(pos.x + "   " + pos2.x + "   " + Mathf.Abs(pos.x - pos2.x));
        Debug.Log(pos.y + "   " + pos2.y + "   " + Mathf.Abs(pos.y - pos2.y));
    }
}