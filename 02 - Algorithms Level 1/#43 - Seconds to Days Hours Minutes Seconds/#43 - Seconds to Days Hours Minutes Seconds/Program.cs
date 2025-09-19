using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;
using static System.Math;

namespace _43___Seconds_to_Days_Hours_Minutes_Seconds
{
    internal class Program
    {
        static void Main(string[] args)
        {
            float second, minutes, hour, day, total , t1;
            Write("Enter Total second :");
            total = float.Parse(ReadLine());

            day = total / 86400;
            
            day = (float)Floor(day);
            t1 = day * 86400;
            total -= t1;
            hour = total / 3600;
            hour = (float)Floor(hour);
            t1 = hour * 3600;
            total -= t1;
            minutes = total / 60;
            minutes = (float)Floor(minutes);    
            t1 = minutes * 60;
            total -= t1;
            second = total ;
            
            
            WriteLine(day + "," + hour + "," + minutes + "," + second);

        }
    }
}
