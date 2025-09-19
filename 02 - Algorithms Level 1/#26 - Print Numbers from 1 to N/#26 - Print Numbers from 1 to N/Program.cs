using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _26___Print_Numbers_from_1_to_N
{
    internal class Program
    {
        static void Main(string[] args)
        {

            /*int N; error
            Console.WriteLine("Enter N ");
            N = int.Parse( Console.ReadLine());
            int[] max = new int[N];

            for (int j = 1; j <= N; ++j )
            {
                
                for (int k = 0; k < N; ++k) 
                {
                    max[k] = j;
                    Console.WriteLine(max[k]);
                        
                }
                Console.WriteLine(max[2]);
                return;*/

            int N;
            Console.WriteLine("Enter N ");
            N = int.Parse(Console.ReadLine());
            

            for (int j = 1; j <= N; ++j)
            {

                
                    Console.WriteLine(j);




            }
        }
    }
}
