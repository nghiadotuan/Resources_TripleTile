using Sirenix.OdinInspector;
using UnityEngine;

public class _EntityBlock : MonoBehaviour
{
    [ShowInInspector] private sbyte _x = -1;
    [ShowInInspector] private sbyte _y = -1;

    public void SetIdShadow(sbyte x, sbyte y)
    {
        if (x == _x && y == _y) return;
        if (_x >= 0 && _y >= 0)
            _Board.Instance.GetShadow((byte) _x, (byte) _y).SetActive(false);
        _x = x;
        _y = y;
    }

    public void ResetId()
    {
        if (_x >= 0 && _y >= 0)
            _Board.Instance.GetShadow((byte) _x, (byte) _y).SetActive(false);
        _x = -1;
        _y = -1;
    }

    public bool IsShowShadow => _x >= 0 && _y >= 0;

    [Button]
    private void CheckDistance(GameObject go)
    {
        var pos = transform.position;
        var pos2 = go.transform.position;
        Debug.Log(pos.x + "   "+ pos2.x + "   "+ Mathf.Abs(pos.x - pos2.x));
        Debug.Log(pos.y + "   "+ pos2.y + "   "+ Mathf.Abs(pos.y - pos2.y));
    }
}