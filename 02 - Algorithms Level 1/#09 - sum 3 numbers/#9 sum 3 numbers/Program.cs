using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace _9_sum_3_numbers
{
    internal class Program
    {
        static int fnSum(int Num1,int Num2,int Num3)
        {
            return Num1 + Num2 + Num3 ;
        }
        static void Main(string[] args)
        {
            int num1, num2, num3,sum ;
            Write("enter first number ");
            num1= int.Parse(ReadLine());
            Write("enter second number");
            num2 = int.Parse(ReadLine());
            Write("enter therd number");
            num3 = int.Parse(ReadLine());
            WriteLine(fnSum(num1,num2,num3));
            
        }
    }
}
