using DG.Tweening;
using Extensions.GameObjects;
using Sirenix.OdinInspector;
using ToolEditor.Level;
using UnityEngine;
using UnityEngine.SceneManagement;

public class _GameManager : MonoBehaviour
{
    [SerializeField] private GameObject _win;
    [SerializeField] private _LevelEditor _levelEditor;
    
    public static _GameManager Instance;
    private static bool _isSetCam;

    public int Level
    {
        get => PlayerPrefs.GetInt("Level",1);
        set => PlayerPrefs.SetInt("Level", value);
    }
    
    public _Hole CurrentHole;
    public bool IsWin;

    private void Awake()
    {
        Instance = this;
        DOTween.Init();
        ResizeCam();
    }

    private void Start()
    {
        SetActiveWin(false);
        CreateLevel(Level);
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

    public void NextLevel()
    {
        Level++;
        if (Level > 2)
        {
            Level = 1;
        }
        
        SceneManager.LoadScene(0);
    }

    public void ReStart()
    {
        SceneManager.LoadScene(0);
    }
    
    public void Level1()
    {
        Level = 1;
        SceneManager.LoadScene(0);
    }

    [Button]
    private void ResizeCam()
    {
        // if(_isSetCam) return;
        // _isSetCam = true;
        // var cam = Camera.main;
        // var width = cam.orthographicSize * 2 * cam.aspect;
        // Debug.Log(cam.orthographicSize + "   "+ cam.aspect);
        // Debug.Log(width);
        // var sizeCamFixed = 5 * width / 5.625f;
        // cam.orthographicSize = sizeCamFixed;
    }

    [Button]
    private void PrintCam()
    {
        var camera = Camera.main;
        Debug.Log(camera.orthographicSize * 2 * camera.aspect);
        Debug.Log(camera.orthographicSize * 2 );
    }
}