using System;
using System.Collections.Generic;
using System.Diagnostics.Contracts;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _27___Print_Numbers_from_N_to_1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            /*int N;
            Console.Write("Enter N : ");
            N = int.Parse(Console.ReadLine());

            while (N != 0)
            {
                Console.WriteLine(N);
                --N;
            }*/

            int N;
            Console.Write("Enter N : ");
            N = int.Parse(Console.ReadLine());

            for (int con = N ;con !=0; --con )
            {
                Console.WriteLine(con);
            }
        }
    }
}
