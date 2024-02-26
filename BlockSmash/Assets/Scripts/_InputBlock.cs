using DG.Tweening;
using UnityEngine;

public class _InputBlock : MonoBehaviour
{
    [SerializeField] private Transform _block;

    private bool _isPick;

    private void OnMouseDown()
    {
        _block.DOScale(1, .15f).SetEase(Ease.OutBack).From(0.68f);
        var pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
        pos.y += 3;
        pos.z = 0;
        _block.transform.position = pos;
        _isPick = true;
    }

    private void Update()
    {
        if (!_isPick) return;
        if (Input.GetMouseButton(0))
        {
            var pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            pos.y += 3;
            pos.z = 0;
            _block.transform.position = pos;
            _block.GetComponent<_CreatorBlock>().ShowShadow();
        }

        if (Input.GetMouseButtonUp(0))
        {
            _isPick = false;
            if (_block.GetComponent<_CreatorBlock>().IsEntitiesBlockAllShadow())
            {
                PutBlock();
            }
            else
            {
                DoBlockToPosStart();
            }
        }
    }

    // when block can't put into frame
    private void DoBlockToPosStart()
    {
        _block.DOScale(.68f, .1f).SetEase(Ease.Linear).From(1);
        _block.DOMove(transform.position, .05f).SetEase(Ease.Linear);
        _block.GetComponent<_CreatorBlock>().ResetWhenUnPick();
    }

    private void PutBlock()
    {
        _block.GetComponent<_CreatorBlock>().PutBlock();
        _block.transform.position = transform.position;
    }
}