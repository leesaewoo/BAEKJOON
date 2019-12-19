using System;

namespace BAEKJOON11022
{
    class No11022
    {
        static void Main(string[] args)
        {
            string original = Console.ReadLine();

            int Case = int.Parse(original);

            for(int i = 0; i < Case; i++)
            {
                original = Console.ReadLine();

                string[] split = original.Split(new char[] { ' ' }, StringSplitOptions.None);

                int A = int.Parse(split[0]);
                int B = int.Parse(split[1]);

                Console.WriteLine("Case #{0}: {1} + {2} = {3}", i + 1, A, B, A + B);
            }

            Console.ReadKey();
        }
    }
}
