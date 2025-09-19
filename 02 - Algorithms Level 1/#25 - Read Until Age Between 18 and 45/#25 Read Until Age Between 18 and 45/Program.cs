using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _25_Read_Until_Age_Between_18_and_45
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int age = 0;

            while (age < 18 || age > 47) // انا ايمت بدي ياه يكرر الرسالة والرقم ما بيكون اكبر واصغر بنفس الوقت يا بيكون اكبر يا اصغرس
            {
                Console.Write("Enter your age : ");
                age = Convert.ToInt32(Console.ReadLine());

                if (age >= 18 && age <= 47)
                {
                    Console.WriteLine("مقبول");
                }
                else
                {
                    Console.WriteLine("مرفوض. يجب إدخال عمر بين 18 و 47.");
                }
            }
        }
    }
}
