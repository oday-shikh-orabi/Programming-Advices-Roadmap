using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _30___Factorial_of_N_
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int N , product;
            Console.Write("Enter N : ");
            N = int.Parse(Console.ReadLine());

            product = 1;
            while (N != 0)
            {
                product *= N;
                --N;
            }
            Console.WriteLine(product);
        }
    }
}
