using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
using static System.Math;

namespace _42___Task_Duration_In_Seconds
{
    internal class Program
    {
        static float fnTaskDurationInSeconds(float day,float hour,float minutes, float second)
        {
            return (minutes * 60) + (hour * 3600) + (day * 86400) + second;
        }
        static void Main(string[] args)
        {
            float second, minutes, hour, day, total;
            Write("Enter Day :");
            day = float.Parse(ReadLine());
            Write("Enter Hour :");
            hour = float.Parse(ReadLine());
            Write("Enter Minute :");
            minutes = float.Parse(ReadLine());
            Write("Enter Seconds :");
            second = float.Parse(ReadLine());

            //total = (minutes * 60) + (hour * 3600) + (day * 86400) + second; // انتبه تحط فاصلة الميات تبع الحاسبة هون بيقراها على انها فاصلة عشرية وبتخرب قيمة الرقم

            WriteLine("Second : " + Round(fnTaskDurationInSeconds(day,hour,minutes,second)));
        }
    }
}
