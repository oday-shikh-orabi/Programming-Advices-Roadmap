using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _29___Print_Sum_Even_Numbers_from_1_to_N
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int N, sum = 0;
            Console.Write("Enter N : ");
            N = int.Parse(Console.ReadLine());

            while (N != 0)
            {
                if (N % 2 == 0)
                {
                    sum += N;
                }
                --N;
            }
            Console.WriteLine(sum);
        }
    }
}
