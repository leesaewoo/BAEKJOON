using System;

namespace BAEKJOON2588
{
    class No2588
    {
        static void Main(string[] args)
        {
            string up = Console.ReadLine();
            string down = Console.ReadLine();

            string down_1 = down.Substring(0, 1);
            string down_2 = down.Substring(1, 1);
            string down_3 = down.Substring(2);

            int int_up = int.Parse(up);
            int int_down_1 = int.Parse(down_1);
            int int_down_2 = int.Parse(down_2);
            int int_down_3 = int.Parse(down_3);



            Console.WriteLine("{0}", int_up * int_down_3);
            Console.WriteLine("{0}", int_up * int_down_2);
            Console.WriteLine("{0}", int_up * int_down_1);
            Console.WriteLine("{0}", int_up * int_down_3 + 10 * (int_up * int_down_2) + 100 * (int_up * int_down_1));

            Console.ReadKey();
        }
    }
}
