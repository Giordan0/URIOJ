using System;
class URI {
    static void Main(string[] args) {
        int m = int.Parse(Console.ReadLine());
        int a = int.Parse(Console.ReadLine());
        int b = int.Parse(Console.ReadLine());
        int c = m - a - b;
        Console.WriteLine(Math.Max(a, Math.Max(b, c)));
    }  
}