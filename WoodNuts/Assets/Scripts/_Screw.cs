using System;
using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

public class _Screw : MonoBehaviour
{
    [SerializeField] private GameObject _body;
    [ShowInInspector] private bool _isNailed;

    private void Awake()
    {
        _isNailed = true;
    }

    public void UpdateState()
    {
        transform.DOKill();
        _isNailed = !_isNailed;
        var posStart = transform.position;
        var posEnd = posStart;
        posEnd.y += .5f;
        if (_isNailed)
        {
            _body.SetActive(_isNailed);
            transform.DOMove(posStart, .05f)
                .From(posEnd)
                .SetEase(Ease.Linear)
                .OnComplete(() => _body.SetActive(false));
        }
        else
        {
            transform.position = posEnd;
            _body.SetActive(true);
        }
    }
}