using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _11_avrage_pass_fail
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, num3, sum, avg;
            Console.WriteLine("entr first number");
            num1 = int.Parse(Console.ReadLine());
            Console.WriteLine("enter second number");
            num2 = int.Parse(Console.ReadLine());
            Console.WriteLine("enter therd number");
            num3 = int.Parse(Console.ReadLine());

            sum = num1 + num2 + num3;
            avg = sum / 3;

            Console.WriteLine(avg);
            if (avg >= 50)
            {
                Console.WriteLine("PASS");
            }
            else
                Console.WriteLine("FAIL");
        }
    }
}
