using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _36___Simple_Calculator
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("-------------------------BEST CALCULATER WORLD---------------------\n");
            double num1, num2;
            string op;
            Console.WriteLine("Enter First Number : ");
            num1 = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter Second Number : ");
            num2 = int.Parse(Console.ReadLine());
            Console.WriteLine("Enter Operation Tybe : ");
            op = Console.ReadLine();

            if (op == "*" )
            {
                Console.WriteLine(num1 * num2);
            }
            if (op == "/")
            {
                Console.WriteLine(num1 / num2);
            }
            if (op == "+")
            {
                Console.WriteLine(num1 + num2);
            }
            if (op == "_")
            {
                Console.WriteLine(num1 - num2);
            }
            Console.WriteLine("-------------------------THANCK YOU--------------------------------\n");
        }


    }
}

