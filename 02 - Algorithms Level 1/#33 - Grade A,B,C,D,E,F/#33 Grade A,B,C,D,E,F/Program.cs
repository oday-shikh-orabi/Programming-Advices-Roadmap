using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _33_Grade_A_B_C_D_E_F
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int grade;
            Console.WriteLine("Enter your grade :");
            grade = int.Parse(Console.ReadLine());

            if (grade >= 50 && grade <= 100)
            {
                if (grade >= 90 && grade <= 100)
                {
                    Console.WriteLine("A");
                }
                if (grade >= 80 && grade <= 89)
                {
                    Console.WriteLine("B");
                }
                if (grade >= 70 && grade <= 79)
                {
                    Console.WriteLine("C");
                }
                if (grade >= 60 && grade <= 69)
                {
                    Console.WriteLine("D");
                }
                if (grade >= 50 && grade <= 59)
                {
                    Console.WriteLine("E");
                }
            }
            else
            {
                Console.WriteLine("F");
            }
               
        }
    }
}
