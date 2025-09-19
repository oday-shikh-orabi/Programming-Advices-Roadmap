using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
using static System.Math;

namespace _22_Circle_Area_Inscribed_in_an_Isosceles
{
    internal class Program
    {
        static float fnAngel(float a , float b)
        {
            const float pi = 3.14f;

            return (float)(pi * Pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
        }
        static void Main(string[] args)
        {
            float a, b;

            Write("Enter a ");
            a = float.Parse(ReadLine());
            Write("Enter b ");
            b = float.Parse(ReadLine());

            WriteLine(Floor(fnAngel(a,b)));
        }
    }
}
