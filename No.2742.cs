using System;

namespace BAEKJOON2742
{
    class No2742
    {
        static void Main(string[] args)
        {
            string original = Console.ReadLine();

            int N = int.Parse(original);

            for(int i = N; i > 0; i--)
            {
                Console.WriteLine("{0}", i);
            }

            Console.ReadKey();
        }
    }
}
