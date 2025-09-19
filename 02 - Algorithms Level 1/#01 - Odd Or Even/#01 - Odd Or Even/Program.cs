using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace algorthem_1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            for (int b = 0; b<3; ++b)
            {
                int input, result;
                Console.Write("enter number = ");
                input = int.Parse(Console.ReadLine());
                result = input % 2;
                if (result == 0)
                {
                    Console.WriteLine("even");
                }
                else
                    Console.WriteLine("ood");
            }

        }
    }
}
