using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _14_Swap_2_number
{
    internal class Program
    {
        static void Swap(ref int num1,ref int num2)
        {
            int numt;
            numt = num1;
            num1 = num2;
            num2 = numt;
        }
        static void Main(string[] args)
        {
            //Method 1
            /*int num1, num2;
            Console.WriteLine("enter first number");
            num1 = int.Parse(Console.ReadLine());
            Console.WriteLine("enter second number");
            num2 = int.Parse(Console.ReadLine());

            Console.WriteLine(num1);
            Console.WriteLine(num2);

            Console.WriteLine("");

            Console.WriteLine(num2);
            Console.WriteLine(num1);*/

            //Method 2
            int num1, num2;
            Console.WriteLine("enter first number");
            num1 = int.Parse(Console.ReadLine());
            Console.WriteLine("enter second number");
            num2 = int.Parse(Console.ReadLine());
            Console.WriteLine();
            Console.WriteLine(num1);
            Console.WriteLine(num2);

            
            Console.WriteLine("");

            //Console.WriteLine(num1);
            //Console.WriteLine(num2);

            Swap(ref num1, ref num2);
            Console.WriteLine(num1);
            Console.WriteLine(num2);
        }
    }
}
