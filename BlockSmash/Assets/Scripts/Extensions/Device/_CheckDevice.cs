using UnityEngine;
using static UnityEngine.Mathf;

public static class _CheckDevice
{
    public static bool IsTable { get; private set; } 

    private static float DeviceDiagonalSizeInInches()
    {
        float screenWidth = Screen.width / Screen.dpi;
        float screenHeight = Screen.height / Screen.dpi;
        float diagonalInches = Sqrt(Pow(screenWidth, 2) + Pow(screenHeight, 2));
 
        return diagonalInches;
    }

    public static void CheckDevice()
    {
#if UNITY_IOS
    bool deviceIsIpad = UnityEngine.iOS.Device.generation.ToString().Contains("iPad");
            if (deviceIsIpad)
            {
                IsTable = true;
            }
            bool deviceIsIphone = UnityEngine.iOS.Device.generation.ToString().Contains("iPhone");
            if (deviceIsIphone)
            {
                IsTable = false;
            }
#elif UNITY_ANDROID
 
        float aspectRatio = Max(Screen.width, Screen.height) / Min(Screen.width, Screen.height);
        IsTable  = (DeviceDiagonalSizeInInches() > 6.5f && aspectRatio < 2f);
#endif
    }
}