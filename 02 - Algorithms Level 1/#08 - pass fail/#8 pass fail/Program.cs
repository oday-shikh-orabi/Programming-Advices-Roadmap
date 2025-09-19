using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;

namespace _8_pass_fail
{
    internal class Program
    {
        static string Proseder(int Mark) //أخترتو سترينغ لانو بدو يرجعلي نص
        {
            if (Mark >= 50)
            {
                return "sucses";
            }
            else //ما لازم الفانكشن يرجع فاضي فاذا خليت بس ايف رح يطلع ايرور بركي كانت العلامة اصغر من 50 ما بيرجع فاضي فبدنا نحط ايلس
            {
                return "sucses";
            }
        }
        static void Main(string[] args)
        {
            int mark;
            Write("enter your mark ");
            mark = int.Parse(ReadLine());

            WriteLine(Proseder(mark));
        }
        /*static void Main(string[] args)
        {
            int mark;
            Write("enter your mark ");
            mark = int.Parse(ReadLine());
            if (mark >= 50)
            {
                WriteLine("sucses");
            }
            else
                WriteLine("Fial");
        }*/
        
    }
}
