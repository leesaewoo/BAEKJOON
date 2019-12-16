using System;

namespace BAEKJOON1008
{
    class No1008
    {
        static void Main(string[] args)
        {
            string original = Console.ReadLine();

            string[] split = original.Split(new char[] { ' ' }, StringSplitOptions.None);

            decimal A = decimal.Parse(split[0]);
            decimal B = decimal.Parse(split[1]);

            Console.WriteLine("{0}", A/B);

            Console.ReadKey();
        }
    }
}
