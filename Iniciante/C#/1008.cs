using System;
class URI {
    static void Main(string[] args) { 
        int n , h;
        double v;
        n = int.Parse(Console.ReadLine());
        h = int.Parse(Console.ReadLine());
        v = double.Parse(Console.ReadLine());
        Console.WriteLine("NUMBER = " + (n));
        Console.WriteLine("SALARY = U$ " + $"{(h*v):0.00}");
    }
}