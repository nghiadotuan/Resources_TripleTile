using System.Collections.Generic;
using Sirenix.OdinInspector;

namespace GamePlay
{
    public class _DataInputGame
    {
        [ShowInInspector] public List<_DataXYShadow> ListXYShadow { get; } = new();
        [ShowInInspector] public List<sbyte> ListXCheckFullRow { get; } = new();
        [ShowInInspector] public List<sbyte> ListYCheckFullColumn { get; } = new();

        public void SetListCheckFullRowAndColumn()
        {
            ListXCheckFullRow.Clear();
            ListYCheckFullColumn.Clear();
            foreach (var data in ListXYShadow)
            {
                var x = data.XShadow;
                var y = data.YShadow;
                if (!ListXCheckFullRow.Contains(x))
                    ListXCheckFullRow.Add(x);
                if (!ListYCheckFullColumn.Contains(y))
                    ListYCheckFullColumn.Add(y);
            }
        }
    }
}