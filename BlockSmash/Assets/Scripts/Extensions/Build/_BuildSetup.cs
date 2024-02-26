#if UNITY_EDITOR

using UnityEditor;

public class _BuildSetup
{
    [MenuItem("BuildSetup/Release")]
    private static void BuildRelease()
    {
        OpenScene.DisableLog();
    }

    [MenuItem("BuildSetup/Debug")]
    private static void BuildDebug()
    {
        OpenScene.EnableLog();
    }

    private static BuildTargetGroup BuildTargetGroup
    {
        get
        {
#if UNITY_ANDROID
            return BuildTargetGroup.Android;
#elif UNITY_IOS
                return BuildTargetGroup.iOS;
#else
                return return BuildTargetGroup.Standalone;
#endif
        }
    }
}

#endif