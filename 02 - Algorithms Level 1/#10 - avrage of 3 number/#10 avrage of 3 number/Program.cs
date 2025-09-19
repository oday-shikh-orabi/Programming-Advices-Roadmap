using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _10_avrage_of_3_number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num1, num2, num3 ,sum ,avg;
            Console.WriteLine("entr first number");
            num1 = int.Parse(Console.ReadLine());
            Console.WriteLine("enter second number");
            num2 = int.Parse(Console.ReadLine());
            Console.WriteLine("enter therd number");
            num3 = int.Parse(Console.ReadLine());

            sum = num1 + num2 + num3;
            avg = sum / 3;

            Console.WriteLine(avg);
            

        }
    }
}
