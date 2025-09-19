using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _41___Weeks_and_Days
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double daye, weeks, hour;
            Console.WriteLine("Enter Hour");
            hour = double.Parse(Console.ReadLine());

            daye = hour / 24;
            weeks = daye / 7;

            Console.WriteLine("Days : " + daye.ToString("F2"));
            Console.WriteLine("Weeks : " + weeks.ToString("F2"));

        }
    }
}
