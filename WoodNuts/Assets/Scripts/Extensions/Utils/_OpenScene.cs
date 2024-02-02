#if UNITY_EDITOR
using UnityEditor;
using UnityEditor.SceneManagement;

namespace Game.Scripts.Utils
{
    public class OpenScene
    {
        [MenuItem("OpenScene/Release/Loading")]
        private static void OpenSceneLoading()
        {
            EditorSceneManager.OpenScene("Assets/Templates/Scenes/Loading.unity");
        }
        
        [MenuItem("OpenScene/Release/GamePlay")]
        private static void OpenSceneGamePlay()
        {
            EditorSceneManager.OpenScene("Assets/Scenes/GamePlay.unity");
        }
        
        [MenuItem("OpenScene/Release/Home")]
        private static void OpenSceneHome()
        {
            EditorSceneManager.OpenScene("Assets/Templates/Scenes/Home.unity");
        }
    }
}

#endif