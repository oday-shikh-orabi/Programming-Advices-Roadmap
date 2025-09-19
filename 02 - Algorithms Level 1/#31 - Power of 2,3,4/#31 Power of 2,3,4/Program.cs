using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
using static System.Math;

namespace _31_Power_of_2_3_4
{
    internal class Program
    {
        static double fnPower(float N)
        {
            return Pow(N, 2);
        }
        static double fnPower3(float N)
        {
            return Pow(N, 3);
        }
        static double fnPower4(float N)
        {
            return Pow(N, 4);
        }

        static void Main(string[] args)
        {
            float N;
            Write("Enter N : ");
            N = float.Parse(ReadLine());
            //N = (float)Round (N);

            WriteLine(Round(fnPower(N)));
            WriteLine(Round(fnPower3(N)));
            WriteLine(Round(fnPower4(N)));
        }
    }
}
