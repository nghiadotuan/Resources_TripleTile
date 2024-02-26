using UnityEngine;

namespace Extensions.UI
{
    public static class _CanvasGroupExtensions
    {
        public static void SetActiveCanvasGroup(this CanvasGroup canvasGroup, bool isActive)
        {
            canvasGroup.alpha = isActive ? 1 : 0;
            canvasGroup.interactable = isActive;
            canvasGroup.blocksRaycasts = isActive;
        }
    }
}