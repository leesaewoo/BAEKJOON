using System;

namespace BAEKJOON1330
{
    class No1330
    {
        static void Main(string[] args)
        {
            string original = Console.ReadLine();

            string[] split = original.Split(new char[] {' '}, StringSplitOptions.None);

            int A = int.Parse(split[0]);
            int B = int.Parse(split[1]);

            if(A > B)
            {
                Console.Write(">");
            }
            else if(A < B)
            {
                Console.Write("<");
            }
            else
            {
                Console.Write("==");
            }

            Console.ReadKey();
        }
    }
}
