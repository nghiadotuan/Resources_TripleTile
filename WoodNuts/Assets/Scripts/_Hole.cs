using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

public class _Hole : MonoBehaviour
{
    private static int _count;

    public _Screw Screw;
    [ShowInInspector] public bool IsEmpty { get; set; }

    public void OnClick()
    {
        _count++;
        if (Screw == null)
        {
            if (_GameManager.Instance.CurrentScrew == null)
            {
                IsEmpty = true;
                return;
            }

            Screw = _GameManager.Instance.CurrentScrew;
            var pos = transform.position;
            pos.y += .5f;
            Screw.transform.DOMove(transform.position, .05f)
                .From(pos)
                .SetEase(Ease.Linear)
                .OnComplete(() => Screw.State = _StateScrew.FitUp);
            _GameManager.Instance.CurrentScrew = null;
            if (_GameManager.Instance.CurrentHole != null)
                _GameManager.Instance.CurrentHole.GetComponent<Collider2D>().enabled = false;
            _GameManager.Instance.CurrentHole = null;
            IsEmpty = false;
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

            _GameManager.Instance.CurrentHole = this;
            _GameManager.Instance.CurrentScrew = Screw;
            Screw = null;
            IsEmpty = true;
        }

        if (_count % 2 == 0)
        {
            var bar = FindObjectOfType<_Bar>();
            bar.UpdateState();
            GetComponent<Collider2D>().enabled = true;
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