using System;

namespace BAEKJOON2741
{
    class No2741
    {
        static void Main(string[] args)
        {
            string original = Console.ReadLine();

            int N = int.Parse(original);

            for(int i = 0; i < N; i++)
            {
                Console.WriteLine("{0}", i + 1);
            }

            Console.ReadKey();
        }
    }
}
