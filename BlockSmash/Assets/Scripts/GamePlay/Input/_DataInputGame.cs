using System.Collections.Generic;
using Sirenix.OdinInspector;

namespace GamePlay
{
    public class _DataInputGame
    {
        // list x va y cua block dang dc select.
        [ShowInInspector] public List<_DataXYShadow> ListXYShadow { get; } = new();

        [ShowInInspector] public List<sbyte> ListXCheckFullAColumn { get; } = new();
        [ShowInInspector] public List<sbyte> ListYCheckFullARow { get; } = new();

        // lis x ma KHONG tao thanh hang.
        [ShowInInspector] public List<sbyte> ListXNotFull { get; } = new();

        // list x ma tao thanh hang ngang hoan chinh => x lay tu ListXYShadow 
        [ShowInInspector] public List<sbyte> ListXFull { get; } = new();
        [ShowInInspector] public List<sbyte> ListYNotFull { get; } = new();
        [ShowInInspector] public List<sbyte> ListYFull { get; } = new();

        // kiem tra x, y cua block. neu x, y tao thanh 1 hang full -> add vao list check full
        public void SetListCheckFullRowAndColumn()
        {
            ListXCheckFullAColumn.Clear();
            ListYCheckFullARow.Clear();
            ListXNotFull.Clear();
            ListXFull.Clear();
            ListYFull.Clear();
            ListYNotFull.Clear();
            foreach (var data in ListXYShadow)
            {
                var x = data.XShadow;
                var y = data.YShadow;
                if (!ListXCheckFullAColumn.Contains(x))
                    ListXCheckFullAColumn.Add(x);
                if (!ListYCheckFullARow.Contains(y))
                    ListYCheckFullARow.Add(y);
            }
        }

        // set list XY, neu khong tao thanh hang -> add list not full va nguoc lai.
        public void SetListXYFullRowAndColumn(_BoardGame boardGame)
        {
            foreach (var x in ListXCheckFullAColumn)
            {
                if (boardGame.IsFullColumn(x))
                {
                    ListXFull.Add(x);
                }
                else
                {
                    ListXNotFull.Add(x);
                }
            }

            foreach (var y in ListYCheckFullARow)
            {
                if (boardGame.IsFullRow(y))
                {
                    ListYFull.Add(y);
                }
                else
                {
                    ListYNotFull.Add(y);
                }
            }
        }
    }
}