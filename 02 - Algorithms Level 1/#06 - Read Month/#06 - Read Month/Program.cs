using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace ConsoleApp1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int am, monthly, month;
            Write("Enter Am :");
            am = int.Parse(Console.ReadLine());
            Write("Enter monthly :");
            month = int.Parse(Console.ReadLine());

            monthly = am / month;
            Console.WriteLine(monthly);
        }
    }
}
