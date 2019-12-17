using System;

namespace BAEKJOON8393
{
    class No8393
    {
        static void Main(string[] args)
        {
            string original = Console.ReadLine();

            int n = int.Parse(original);

            Console.Write("{0}", n * (n + 1) / 2);

            Console.ReadKey();
        }
    }
}
