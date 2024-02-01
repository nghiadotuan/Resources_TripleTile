using UnityEngine;

public class _Screw : MonoBehaviour
{
    [SerializeField] private GameObject _body;

    private _StateScrew _state;

    public _StateScrew State
    {
        get => _state;
        set
        {
            _state = value;
            _body.SetActive(_state == _StateScrew.Loose);
        }
    }
}

public enum _StateScrew : byte
{
    FitUp,
    Loose
}