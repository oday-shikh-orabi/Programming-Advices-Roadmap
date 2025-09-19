using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
using static System.Math;

namespace _23___Circle_Area_circle_Described_Around
{
    internal class Program
    {
        static float fnAngel(float a, float b , float c)
        {
            float p;
            const float pi = 3.14f;

            p = (a + b + c) / 2;
            return (float)(pi * Pow((a * b * c) / (4 * Sqrt(p * (p - a) * (p - b) * (p - c))), 2));
        }
        static void Main(string[] args)
        {
            float a, b, c;

            Write("Enter a ");
            a = float.Parse(ReadLine());
            Write("Enter b ");
            b = float.Parse(ReadLine());
            Write("Enter c ");
            c = float.Parse(ReadLine());

            
            WriteLine(fnAngel(a,b,c));
            WriteLine(Round(fnAngel(a, b, c))); // البسط دائما قوس والمقام قوس مشان ما يطلع غلط

        }
    }
}
