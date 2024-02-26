using Extensions.GameObjects;
using Sirenix.OdinInspector;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Templates.Scripts.Extensions.UI
{
    public class _SetTextLevelEditor : MonoBehaviour
    {
        private void SetViewButton(Transform btn, int level)
        {
            btn.transform.name = $"BtnLevel_{level}";
            btn.transform.GetChild(0).GetComponent<TextMeshProUGUI>().SetText(level.ToString());
        }

        [Button]
        private void SetTextLevel()
        {
            var level = 1;
            foreach (var btn in transform.GetComponentsInChildren<Button>())
            {
                SetViewButton(btn.transform, level);
                level++;
            }
        }

        [Button]
        private void AddButtonLevel()
        {
            var trf = transform;
            var prefab = trf.GetChild(0);
            var btn = prefab.gameObject.CreateGameObject(trf);
            SetViewButton(btn.transform, trf.childCount);
        }
    }
}