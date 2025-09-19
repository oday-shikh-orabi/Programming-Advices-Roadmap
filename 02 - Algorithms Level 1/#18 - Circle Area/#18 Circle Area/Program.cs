using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _18_Circle_Area
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double r,area;
            const double PI = 3.14159;

            Console.WriteLine("Enter r ");
            r = int.Parse(Console.ReadLine());

            area = PI * Math.Pow(r , 2);
            
            Console.WriteLine(Math.Ceiling(area));
            
        }
    }
}
