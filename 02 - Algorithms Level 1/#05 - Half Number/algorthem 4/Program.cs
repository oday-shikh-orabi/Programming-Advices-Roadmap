using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace algorthem_4
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int inp, half;
            Console.WriteLine("enter number");
            inp = int.Parse(Console.ReadLine());
            half = inp / 2;
            Console.WriteLine("half of " + inp + " is " + half);
        }
    }
}
