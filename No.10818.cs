using System;

namespace BaekJoon10818
{
    class No10818
    {
        static void Main(string[] args)
        {
            int N = int.Parse(Console.ReadLine());

            string[] arrayN = Console.ReadLine().Split(new char[] { ' ' }, StringSplitOptions.None);

            int max = -1000000;
            int min = 1000000;

            for (int i = 0; i < N; i++)
            {
                if (int.Parse(arrayN[i]) >= max)
                {
                    max = int.Parse(arrayN[i]);
                }
                else if (int.Parse(arrayN[i]) <= min)
                {
                    min = int.Parse(arrayN[i]);
                }

                if(N == 1)
                {
                    min = max;
                }
            }

            Console.Write("{0} {1}", min, max);
        }
    }
}
