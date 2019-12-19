using System;

namespace BAEKJOON10952
{
    class No10952
    {
        static void Main(string[] args)
        {
            while(true)
            {
                string original = Console.ReadLine();

                string[] split = original.Split(new char[] { ' ' }, StringSplitOptions.None);

                int A = int.Parse(split[0]);
                int B = int.Parse(split[1]);

                if(A == 0 && B == 0)
                {
                    break;
                }

                Console.WriteLine("{0}", A + B);
            }

            Console.ReadKey();
        }
    }
}
