using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _17___Triangle_Area
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double a, h, area;
            Console.Write("Enter a ");
            a = int.Parse(Console.ReadLine());
            Console.Write("Enter h ");
            h = int.Parse(Console.ReadLine());

            area = 0.5 * a * h;
            Console.WriteLine(area);
        }
    }
}
