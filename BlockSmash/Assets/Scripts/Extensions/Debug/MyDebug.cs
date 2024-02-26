public static class MyDebug
{
    private static string GetColor(ColorDebugEnum color)
    {
        return color switch {
            ColorDebugEnum.Normal => "white",
            ColorDebugEnum.Red => "red",
            ColorDebugEnum.Yellow => "yellow",
            ColorDebugEnum.Blue => "blue",
            ColorDebugEnum.Black => "black",
            ColorDebugEnum.Green => "green",
            _ => "white"
        };
    }

    [System.Diagnostics.Conditional("SHOW_LOG")]
    public static void Log(string content, ColorDebugEnum color = ColorDebugEnum.Normal, UnityEngine.GameObject root = null)
    {
//#if UNITY_EDITOR
        UnityEngine.Debug.Log($"<color={GetColor(color)}> {content} </color>", root);
//#endif
    }

    [System.Diagnostics.Conditional("SHOW_LOG")]
    public static void Log(object content, ColorDebugEnum color = ColorDebugEnum.Normal, UnityEngine.GameObject root = null)
    {
//#if UNITY_EDITOR
        UnityEngine.Debug.Log($"<color={GetColor(color)}> {content} </color>", root);
//#endif
    }
}

public enum ColorDebugEnum : byte
{
    Normal,
    Red,
    Yellow,
    Blue,
    Black,
    Green
}