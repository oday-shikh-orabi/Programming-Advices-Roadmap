using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _24_Validate_Age_Between_18_and_45
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int age;
            Console.WriteLine("Enter your Age ");
            age = int.Parse(Console.ReadLine());

            if (age >= 18 && age <= 48)
            {
                Console.WriteLine("Vaild age");
            }
            else
                Console.WriteLine("invaild age");
        }
    }
}
