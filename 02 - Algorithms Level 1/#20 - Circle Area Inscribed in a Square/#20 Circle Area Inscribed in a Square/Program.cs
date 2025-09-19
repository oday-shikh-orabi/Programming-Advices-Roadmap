using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
using static System.Math;

namespace _20_Circle_Area_Inscribed_in_a_Square
{
    internal class Program
    {
        static double fnAngel(double a)
        {
            const float pi = 3.14f;

            return pi * Pow(a / 2, 2);
        }
        static void Main(string[] args)
        {
            double a;

            WriteLine("Enter a ");
            a = double.Parse(ReadLine());

            WriteLine(Ceiling(fnAngel(a)));
            
            
        }
    }
}
