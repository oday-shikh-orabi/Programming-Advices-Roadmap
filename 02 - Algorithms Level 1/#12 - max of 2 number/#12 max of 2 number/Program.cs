using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _12_max_of_2_number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num1, num2,num3;
            Console.WriteLine("entr first number");
            num1 = int.Parse(Console.ReadLine());
            Console.WriteLine("enter second number");
            num2 = int.Parse(Console.ReadLine());
            Console.WriteLine("enter therd number");
            num3 = int.Parse(Console.ReadLine());

            if (num1 > num2 && num1 > num3)
            {
                Console.WriteLine(num1);
            }
            else if (num2 > num1 && num2 > num3)
            {
                Console.WriteLine(num2);
            }
            else
                Console.WriteLine(num3);
        }
    }
}
