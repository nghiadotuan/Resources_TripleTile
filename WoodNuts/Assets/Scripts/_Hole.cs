using System.Collections.Generic;
using UnityEngine;

public class _Hole : MonoBehaviour
{
    private static int _count;

    private readonly List<Collider2D> _listCollider = new();

    public _Screw Screw;

    public void OnClick()
    {
        if (_listCollider.Count > 0) return;
        var gameManager = _GameManager.Instance;
        if (gameManager == null) return;
        if (Screw == null)
        {
            if (gameManager.CurrentHole == null)
            {
                UpdateCollider();
                return;
            }

            _count++;
            Screw = gameManager.CurrentHole.Screw;
            SetScrew();
            gameManager.CurrentHole.Screw = null;
            gameManager.CurrentHole.UpdateCollider();
            gameManager.CurrentHole = null;
        }
        else
        {
            if (_GameManager.Instance.CurrentHole != null)
            {
                _count++;
                if (gameManager.CurrentHole != this)
                {
                    _count--;
                    gameManager.CurrentHole.SetScrew();
                    gameManager.CurrentHole = this;
                    gameManager.CurrentHole.SetScrew();
                }
                else
                {
                    _count = 0;
                    gameManager.CurrentHole.SetScrew();
                    gameManager.CurrentHole = null;
                }
            }
            else
            {
                SetScrew();
                gameManager.CurrentHole = this;
                _count++;
            }

            UpdateCollider();
        }

        if (_count % 2 == 0)
        {
            if (_GameManager.Instance.CurrentHole != null)
                _GameManager.Instance.CurrentHole.Screw = null;
            var bars = FindObjectsByType<_Bar>(FindObjectsSortMode.None);
            foreach (var bar in bars)
            {
                bar.UpdateState();
            }

            UpdateCollider();
            _count = 0;
        }
    }

    private void SetScrew()
    {
        if (Screw == null) return;
        Screw.transform.position = transform.position;
        Screw.UpdateState();
    }

    private void UpdateCollider()
    {
        GetComponent<CircleCollider2D>().isTrigger = Screw == null;
    }

    private void OnTriggerStay2D(Collider2D other)
    {
        Debug.Log(other.name + "  " + gameObject.name);
        if (other.TryGetComponent<_Bar>(out var bar))
        {
            foreach (var maskBar in bar.ListMaskBar)
            {
                if (maskBar.Hole.Screw != null) continue;
                var vt = transform.position - maskBar.transform.position;
                vt.z = 0;
                var distance = Vector2.SqrMagnitude(vt);
                if (distance > _Const.EPSILON)
                {
                    if (!_listCollider.Contains(other))
                        _listCollider.Add(other);
                }
                else
                {
                    if (_listCollider.Contains(other))
                    {
                        _listCollider.Remove(other);
                    }
                }
            }
        }
    }

    private void OnTriggerExit2D(Collider2D other)
    {
        if (_listCollider.Contains(other))
        {
            _listCollider.Remove(other);
        }
    }
}