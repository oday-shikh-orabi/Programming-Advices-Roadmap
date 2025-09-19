using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Math;
using static System.Console;

namespace _19___Circle_Area_Through_Diameter
{
    internal class Program
    {
        static double fnAngel(double d) // أنتبه عالنمط يلي عم تعرفو لازم يكون نفس نمط يلي عم ترجعو
        {
            const double pi = 3.14;

           return pi * Pow(d, 2) / 4;
        }
        static void Main(string[] args)
        {
            double d, area;

            Write("Enter diameter ");
            d = double.Parse(ReadLine());

            WriteLine(fnAngel(d)); 
        }
    }
}
