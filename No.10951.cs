using System;

namespace BAEKJOON10951
{
    class No10951
    {
        static void Main(string[] args)
        {
            while (true)
            {
                string original = Console.ReadLine();

                if (original == null)
                {
                    break;
                }

                string[] split = original.Split(new char[] { ' ' }, StringSplitOptions.None);

                int A = int.Parse(split[0]);
                int B = int.Parse(split[1]);

                Console.WriteLine("{0}", A + B);
            }

            Console.ReadKey();
        }
    }
}
