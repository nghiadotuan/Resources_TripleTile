using UnityEngine;

public class _MaskBar : MonoBehaviour
{
    [SerializeField] private Transform _hole;

    public void SetHole(Transform hole)
    {
        _hole = hole;
    }

    public bool IsMaskBarIntoHole()
    {
        var vt = _hole.position - transform.position;
        vt.z = 0;
        Debug.Log(Vector2.SqrMagnitude(vt) + "  " + vt + "  "+ _hole.name, this);
        return Vector2.SqrMagnitude(vt) < _Const.EPSILON;
    }

    public _Hole Hole => _hole.GetComponent<_Hole>();
}