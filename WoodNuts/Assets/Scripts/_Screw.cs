using DG.Tweening;
using Sirenix.OdinInspector;
using UnityEngine;

public class _Screw : MonoBehaviour
{
    [SerializeField] private GameObject _body;
    [SerializeField] private Transform _head;
    [ShowInInspector] private bool _isNailed;

    private void Awake()
    {
        _isNailed = true;
    }

    public void UpdateState()
    {
        _head.DOKill();
        _isNailed = !_isNailed;
        var posStart = transform.position;
        var posEnd = posStart;
        posEnd.y += .5f;
        if (_isNailed)
        {
            _body.SetActive(_isNailed);
            _head.DOMove(posStart, .05f)
                .From(posEnd)
                .SetEase(Ease.Linear)
                .OnComplete(() => _body.SetActive(false));
        }
        else
        {
            _head.position = posEnd;
            _body.SetActive(true);
        }
    }

    [Button]
    public void Set()
    {
        _head = transform.Find("Head");
        GetComponent<Collider2D>().enabled = true;
        GetComponent<CircleCollider2D>().radius = .19f;
        GetComponent<CircleCollider2D>().isTrigger = false;
        gameObject.layer = 0;
        if (_body.transform.parent != _head)
            _body.transform.SetParent(_head);
    }
}