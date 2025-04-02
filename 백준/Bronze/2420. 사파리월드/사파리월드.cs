using System;

namespace SusanSijangBaekJoon
{
    class MainClass
    {
        static void Main(string[] args)
        {
            string[] a = Console.ReadLine().Split();
            long n = long.Parse(a[0]);
            long m = long.Parse(a[1]);

            Console.WriteLine(Math.Abs(n-m));
        }
    }
}
