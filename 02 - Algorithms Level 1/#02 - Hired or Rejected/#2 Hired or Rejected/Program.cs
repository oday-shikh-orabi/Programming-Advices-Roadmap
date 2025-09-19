using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace algorsem_2
{
    internal class Program
    {
        static void Main(string[] args)
        {
            for (int b = 0; b < 2; b++)
            {
                int Age, Lesons;
                Console.WriteLine("enter your age");
                Age = int.Parse(Console.ReadLine());
                Console.WriteLine("Do you have a lesonse Drive \n-enter 1 if you have\n-enter 2 if you dont have\n-enter 3 if you have Recomondition!");
                Lesons = int.Parse(Console.ReadLine()); //true or false bolean
                    if (Lesons == 3)
                {
                    Console.WriteLine("Hierd");
                }
                if (Age > 27 && Lesons == 1)
                {
                    Console.WriteLine("Hierd");
                }
                if (Age > 27 && Lesons == 1)
                {
                    Console.WriteLine("Regected");
                }
                
                }

        }
    }
}
