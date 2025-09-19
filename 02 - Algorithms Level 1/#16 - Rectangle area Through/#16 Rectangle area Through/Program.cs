using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _16_Rectangle_area_Through
{
    internal class Program
    {
        static void Main(string[] args)
        {
            double length, diagonal, angel; //الجذر ما بيقبل غير نمط دبل خطا بيقبل دبل وفلوت وانت
            Console.Write("enter length ");
            length = int.Parse(Console.ReadLine());
            Console.Write("enter diagonal ");
            diagonal = int.Parse(Console.ReadLine());

            angel = length * Math.Sqrt(Math.Pow(diagonal, 2) - Math.Pow(length, 2)); //لو حاطين هون int كان طلع Erorr

            Console.WriteLine(angel);
        }
    } 
}
