using System;
using System.CodeDom;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
namespace _14_Max_of_3_number
{
    internal class Program
    {
        static int fnComparison(int Num1,int Num2,int Num3)
        {
            if (Num1 > Num2 && Num1 > Num3)
            {
                return Num1;
            }
            else if (Num2 > Num1 && Num2 > Num3)
            {
                return Num2;
            }
            else
                return Num3;
        }
        static void Main(string[] args)
        {
            int num1, num2, num3;
            WriteLine("entr first number");
            num1 = int.Parse(ReadLine());
            WriteLine("enter second number");
            num2 = int.Parse(ReadLine());
            WriteLine("enter therd number");
            num3 = int.Parse(ReadLine());

            WriteLine(fnComparison(num1,num2,num3));
        }
    }
}
