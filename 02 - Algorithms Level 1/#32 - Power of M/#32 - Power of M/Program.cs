using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
using static System.Math;

namespace _32___Power_of_M
{
    internal class Program
    {
        static float fnPower(float N,float M)
        {
            return (float)Round(Pow(N, M));
        }
        static void Main(string[] args)
        {
            float N, M;
            Write("Enter N : ");
            N = float.Parse(ReadLine());
            Write("Enter M : ");
            M = float.Parse(ReadLine());

            WriteLine(fnPower(N,M));
        }
    }
}
