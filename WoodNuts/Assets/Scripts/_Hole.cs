using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

public class _Hole : MonoBehaviour
{
    public _Screw Screw;

    private void OnMouseDown()
    {
        if (Screw == null)
        {
            if (_GameManager.Instance.CurrentScrew == null) return;
            Screw = _GameManager.Instance.CurrentScrew;
            var pos = transform.position;
            pos.y += .5f;
            Screw.transform.DOMove(transform.position, .05f)
                .From(pos)
                .SetEase(Ease.Linear)
                .OnComplete(() => Screw.State = _StateScrew.FitUp);
            _GameManager.Instance.CurrentScrew = null;
        }
        else
        {
            Screw.State = _StateScrew.Loose;
            var pos = Screw.transform.position;
            pos.y += .5f;
            Screw.transform.position = pos;
            if (_GameManager.Instance.CurrentScrew != null)
            {
                _GameManager.Instance.CurrentScrew.State = _StateScrew.FitUp;
            }

            _GameManager.Instance.CurrentScrew = Screw;
            Screw = null;
        }
    }

    [Button]
    private void SetScrew()
    {
        if (Screw == null) return;
        Screw.transform.position = transform.position;
        Screw.State = _StateScrew.Loose;
    }
}