using System;

namespace BAEKJOON1110
{
    class No1110
    {
        static void Main(string[] args)
        {
            string original = Console.ReadLine();
            if(Convert.ToInt32(original) < 10)
            {
                original = "0" + original;
            }
            int count = 0;
            string nNumber = original;

            while(true)
            {
                int A = int.Parse(nNumber.Substring(0, 1));
                int B = int.Parse(nNumber.Substring(1, 1));
                
                if(A + B >= 10)
                {
                    nNumber = Convert.ToString(nNumber.Substring(1, 1)) + Convert.ToString(A + B).Substring(1, 1);
                }
                else
                {
                    nNumber = Convert.ToString(nNumber.Substring(1, 1)) + Convert.ToString(A + B);
                }

                count++;

                if(original == nNumber)
                {
                    break;
                }
            }

            Console.Write("{0}", count);

            Console.ReadKey();
        }
    }
}
