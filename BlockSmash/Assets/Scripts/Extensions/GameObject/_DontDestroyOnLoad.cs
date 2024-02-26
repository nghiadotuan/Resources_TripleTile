// using Ads;
// using Core;
// using UnityEngine;
//
// namespace Extensions.GameObjects
// {
//     public class _DontDestroyOnLoad : MonoBehaviour
//     {
//         private void Awake()
//         {
//             DontDestroyOnLoad(gameObject);
//         }
//
//         private void OnApplicationPause(bool pauseStatus)
//         {
//             if (!pauseStatus)
//             {
//                 if(_GameResolve.Resolve<_AdGame>() == null) return;
//                 _GameResolve.Resolve<_AdGame>().Ad.ShowInter();
//             }
//         }
//     }
// }