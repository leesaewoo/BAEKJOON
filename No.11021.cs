using System;

namespace BAEKJOON11021
{
    class No11021
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

                Console.WriteLine("Case #{0}: {1}", i + 1, A + B);
            }

            Console.ReadKey();
        }
    }
}
