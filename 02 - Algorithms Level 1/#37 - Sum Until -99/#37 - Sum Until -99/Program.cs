using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _37___Sum_Until__99
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int num = 0,sum = 0;
            while (num != -96)
            {
                sum += num;
                Console.WriteLine("Enter Number To Sum : ");
                num = int.Parse(Console.ReadLine());
                
            }
            Console.WriteLine("Sum is : " + sum);
        }
    }
}
