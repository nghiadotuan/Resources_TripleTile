using DG.Tweening;
using UnityEngine;

public class _GameManager : MonoBehaviour
{
    public static _GameManager Instance;
    
    //public _Screw CurrentScrew;
    public _Hole CurrentHole;

    private void Awake()
    {
        Instance = this;
        DOTween.Init();
    }
}