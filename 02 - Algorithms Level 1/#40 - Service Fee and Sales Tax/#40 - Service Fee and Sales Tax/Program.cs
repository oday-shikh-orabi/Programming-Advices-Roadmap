using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _40___Service_Fee_and_Sales_Tax
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double bell , t1 ,t2 ,total;
            const double serv = 0.10; // فيك اذا بدك تزيد 10 بالمية من الراتب تضرب ب 1.1 
            const double salet = 0.16;

            Console.WriteLine("Enter bell : ");
            bell = double.Parse(Console.ReadLine());

            t1 = bell * serv;
            total = bell + t1;
            t2 = total * salet;

            Console.WriteLine((total + t2).ToString("F2"));
        }
    }
}
