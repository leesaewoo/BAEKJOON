using System;

namespace BAEKJOON2884
{
    class No2884
    {
        static void Main(string[] args)
        {
            string original = Console.ReadLine();

            string[] split = original.Split(new char[] { ' ' }, StringSplitOptions.None);

            int H = int.Parse(split[0]);
            int M = int.Parse(split[1]);

            if(M >= 45)
            {
                M -= 45;
            }
            else if(H == 0)
            {
                H = 23;
                M = M - 45 + 60;
            }
            else
            {
                H--;
                M = M - 45 + 60;
            }

            Console.Write("{0} {1}", H, M);

            Console.ReadKey();
        }
    }
}
