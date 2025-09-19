using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _49___ATM_PIN
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int pas = 0,con =1;

            while (pas != 1234 && con <= 3)
            {
                Console.WriteLine("Enter ATM pas :");
                pas = int.Parse(Console.ReadLine());
                ++con;
                
            }
            Console.WriteLine("your atm locked");
        }
    }
}
