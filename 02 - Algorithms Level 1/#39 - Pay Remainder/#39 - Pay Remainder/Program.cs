using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _39___Pay_Remainder
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int a, b;
            Console.WriteLine("Enter A : ");
            a= int.Parse(Console.ReadLine());
            Console.WriteLine("Enter B : ");
            b = int.Parse(Console.ReadLine());

            Console.WriteLine("\n" + (b - a));
        }
    }
}
