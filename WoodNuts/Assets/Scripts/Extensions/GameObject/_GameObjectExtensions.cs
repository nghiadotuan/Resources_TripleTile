using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.UI;

namespace Extensions.GameObjects
{
    public static class _GameObjectExtensions
    {
        // public static async UniTask CreateGameObject(string key, Transform parent = null)
        // {
        //     var asset = await AddressablesManager.LoadAssetAsync<GameObject>(key);
        //     if (asset.Value == null) return;
        //     asset.Value.CreateGameObject(parent);
        // }
        
        // public static async UniTask<GameObject> CreateGameObject(string key, Transform parent = null)
        // {
        //     var asset = await AddressablesManager.LoadAssetAsync<GameObject>(key);
        //     return asset.Value == null ? null : asset.Value.CreateGameObject(parent);
        // }

        public static GameObject CreateGameObject(this GameObject prefab, Vector3 pos, Quaternion quaternion, Transform parent = null)
        {
            return parent is null
                ? Object.Instantiate(prefab, pos, quaternion)
                : Object.Instantiate(prefab, pos, default, parent);
        }

        public static GameObject CreateGameObject(this GameObject prefab, Vector3 pos, Transform parent = null)
        {
            return parent is null
                ? Object.Instantiate(prefab, pos, quaternion.identity)
                : Object.Instantiate(prefab, pos, default, parent);
        }

        public static GameObject CreateGameObject(this GameObject prefab, Transform parent)
        {
            var pos = prefab.transform.position;
            var rot = prefab.transform.rotation;
            return Object.Instantiate(prefab, pos, rot, parent);
        }

        public static T CreateInstance<T>(this GameObject prefab,
            Transform parent = null) where T : MonoBehaviour
        {
            return parent is null
                ? Object.Instantiate(prefab).GetComponent<T>()
                : Object.Instantiate(prefab, parent).GetComponent<T>();
        }

        public static T CreateInstance<T>(this T prefab,
            Transform parent = null) where T : MonoBehaviour
        {
            return parent is null
                ? Object.Instantiate(prefab)
                : Object.Instantiate(prefab, parent);
        }

        public static List<Transform> GetChildObject(this GameObject gameObject)
        {
            List<Transform> children = new List<Transform>();
            foreach (Transform child in gameObject.transform)
            {
                children.Add(child);
            }

            return children;
        }

        /// <summary>
        /// Resize image UI
        /// </summary>
        /// <param name="component"></param>
        /// <param name="valueSplit"> value > 0: image sizeDelta * value, value <= 0:  image SizeDelta / value) </param>
        public static void ResizeSplit(this Component component, float valueSplit)
        {
            if (component.TryGetComponent<Image>(out var image))
            {
                image.SetNativeSize();
            }

            var sizeDelta = component.GetComponent<RectTransform>().sizeDelta;
            if (valueSplit > 0)
            {
                sizeDelta *= valueSplit;
            }
            else
            {
                sizeDelta /= math.abs(valueSplit);
            }

            component.GetComponent<RectTransform>().sizeDelta = sizeDelta;
        }

        public static void ResizeWidth(this Component component, float newValue)
        {
            if (component.TryGetComponent<Image>(out var image))
            {
                image.SetNativeSize();
            }

            var sizeDelta = component.GetComponent<RectTransform>().sizeDelta;
            sizeDelta.x = newValue;
            component.GetComponent<RectTransform>().sizeDelta = sizeDelta;
        }

        public static void ResizeHeight(this Component component, float newValue)
        {
            if (component.TryGetComponent<Image>(out var image))
            {
                image.SetNativeSize();
            }

            var sizeDelta = component.GetComponent<RectTransform>().sizeDelta;
            sizeDelta.y = newValue;
            component.GetComponent<RectTransform>().sizeDelta = sizeDelta;
        }
    }
}