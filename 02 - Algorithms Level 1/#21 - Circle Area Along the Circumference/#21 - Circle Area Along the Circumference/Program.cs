using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
using static System.Math;

namespace _21___Circle_Area_Along_the_Circumference
{
    internal class Program
    {
        static float fnAngel(float l)
        {
            const float pi = 3.14f;

            return (float)(Pow(l, 2)) / (4 * pi);
        }
        static void Main(string[] args)
        {
            float l;
            Write("Enter l ");
            l = float.Parse(ReadLine());


            WriteLine(Floor(fnAngel(l)));
           
        }
    }
}
