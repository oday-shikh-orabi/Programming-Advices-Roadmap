using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace _15_rectangel_angel
{
    internal class Program
    {
        static int fnAngel(int Length, int Width)
        {
            return Length * Width;
        }
        static void Main(string[] args)
        {
            int Length, width;
            Write("enter length ");
            Length = int.Parse (ReadLine());
            Write("enter width ");
            width = int.Parse(ReadLine());

            WriteLine(fnAngel(Length,width));

        }
    }
}
