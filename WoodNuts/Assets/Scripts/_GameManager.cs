using DG.Tweening;
using Extensions.GameObjects;
using ToolEditor.Level;
using UnityEngine;

public class _GameManager : MonoBehaviour
{
    [SerializeField] private GameObject _win;
    [SerializeField] private _LevelEditor _levelEditor;
    
    public static _GameManager Instance;
    
    public _Hole CurrentHole;
    public bool IsWin;

    private void Awake()
    {
        Instance = this;
        DOTween.Init();
    }

    private void Start()
    {
        SetActiveWin(false);
        CreateLevel(2);
    }

    private void CreateLevel(int level)
    {
        var prefab = Resources.Load<GameObject>($"Level/Level_{level}");
        prefab.CreateGameObject(_levelEditor.transform);
        _levelEditor.Set();
    }

    public void SetActiveWin(bool isActive)
    {
        IsWin = isActive;
        _win.SetActive(isActive);
    }
}