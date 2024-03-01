using UnityEngine;
using UnityEngine.SceneManagement;

namespace UI
{
    public class _Loading : MonoBehaviour
    {
        public void OnClickBtnClassicMode()
        {
            SceneManager.LoadScene(1);
        }
    }
}