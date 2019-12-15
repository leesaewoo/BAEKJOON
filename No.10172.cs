using System;

namespace BAEKJOON10998
{
    class No10998
    {
        static void Main(string[] args)
        {
            string original = Console.ReadLine();

            string[] split = original.Split(new char[] { ' ' }, StringSplitOptions.None);

            int A, B;

            A = int.Parse(split[0]);
            B = int.Parse(split[1]);

            Console.WriteLine("{0}", A*B);

            Console.ReadKey();
        }
    }
}
