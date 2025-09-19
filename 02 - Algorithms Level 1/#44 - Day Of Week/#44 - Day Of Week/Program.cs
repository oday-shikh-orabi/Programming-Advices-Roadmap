using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _44___Day_Of_Week
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int day =10;

            while (day < 1 || day > 7)
            {
                Console.WriteLine("Enter day ");
                day = int.Parse(Console.ReadLine());
            }
        }
    }
}
