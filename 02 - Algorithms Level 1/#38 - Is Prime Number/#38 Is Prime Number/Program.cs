using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _38_Is_Prime_Number
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num;
            num = 0;
            while (num != -96)
            { 
                Console.WriteLine("Enter Number : ");
                num = int.Parse(Console.ReadLine());

                if ((num / 1 == num) && (num / num == 1))
                {
                    Console.WriteLine("Prime");
                }
                else
                {
                    Console.WriteLine("Not Prime");
                }

            }
        }
    }
}
