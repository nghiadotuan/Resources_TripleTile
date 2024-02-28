﻿using System.Collections.Generic;
using Sirenix.OdinInspector;

namespace GamePlay
{
    public class _DataInputGame
    {
        [ShowInInspector] public List<_DataXYShadow> ListXYShadow { get; } = new();
        [ShowInInspector] public List<sbyte> ListXCheckFullRow { get; } = new();
        [ShowInInspector] public List<sbyte> ListYCheckFullColumn { get; } = new();
        [ShowInInspector] public List<sbyte> ListXNotFull { get; } = new();
        [ShowInInspector] public List<sbyte> ListXFull { get; } = new();
        [ShowInInspector] public List<sbyte> ListYNotFull { get; } = new();
        [ShowInInspector] public List<sbyte> ListYFull { get; } = new();

        // kiem tra x, y cua block. neu x, y tao thanh 1 hang full -> add vao list check full
        public void SetListCheckFullRowAndColumn()
        {
            ListXCheckFullRow.Clear();
            ListYCheckFullColumn.Clear();
            ListXNotFull.Clear();
            ListXFull.Clear();
            ListYFull.Clear();
            ListYNotFull.Clear();
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

        // set list XY, neu khong tao thanh hang -> add list not full va nguoc lai.
        public void SetListXYFullRowAndColumn(_BoardGame boardGame)
        {
            foreach (var x in ListXCheckFullRow)
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

            foreach (var y in ListYCheckFullColumn)
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