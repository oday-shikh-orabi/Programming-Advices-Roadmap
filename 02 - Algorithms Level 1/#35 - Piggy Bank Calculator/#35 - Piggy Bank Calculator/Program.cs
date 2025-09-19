using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _35___Piggy_Bank_Calculator
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double pens, nickls, dime, quarter, dollr, sum_p, sum_d;

            Console.Write("Enter pens : ");
            pens = double.Parse(Console.ReadLine());
            Console.Write("Enter nickls : ");
            nickls = double.Parse(Console.ReadLine());
            Console.Write("Enter dime : ");
            dime = double.Parse(Console.ReadLine());
            Console.Write("Enter quarter : ");
            quarter = double.Parse(Console.ReadLine());
            Console.Write("Enter dollr : ");
            dollr = double.Parse(Console.ReadLine());

            sum_p = (pens * 1) + (nickls * 5) + (dime * 10) + (quarter * 25) + (dollr * 100);
            sum_d = (sum_p / 100) ;

            Console.WriteLine("Pens is : " + sum_p + " $");
            Console.WriteLine("Dollar is : " + sum_d.ToString("F2"));

        }
    }
}
