using Sirenix.OdinInspector;
using UnityEngine;

public class _Level : MonoBehaviour
{
    [Button]
    private void SetScrewEditor()
    {
        var screws = transform.GetComponentsInChildren<_Screw>();
        foreach (var screw in screws)
        {
            screw.Set();
        }
    }
}