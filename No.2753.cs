using System;

namespace BAEKJOON2753
{
    class No2753
    {
        static void Main(string[] args)
        {
            string original = Console.ReadLine();

            int year = int.Parse(original);

            if(year % 400 == 0)
            {
                Console.Write("1");
            }
            else if(year % 100 == 0)
            {
                Console.Write("0");
            }
            else if(year % 4 == 0)
            {
                Console.Write("1");
            }
            else
            {
                Console.Write("0");
            }

            Console.ReadKey();
        }
    }
}
