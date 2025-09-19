using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _47___Loan_Instalment_Months
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int am, monthly ,month;
            Console.Write("Enter Am :");
            am = int.Parse(Console.ReadLine());
            Console.Write("Enter monthly :");
            monthly = int.Parse(Console.ReadLine());

            month = am / monthly;
            Console.WriteLine(month);
        }
    }
}
