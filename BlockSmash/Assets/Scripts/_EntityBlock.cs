using UnityEngine;

public class _EntityBlock : MonoBehaviour
{
    private sbyte _x = -1;
    private sbyte _y = -1;

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
}