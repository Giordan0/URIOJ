using System;
class URI {
    static void Main(string[] args) { 
        double a, b, c;
        a = double.Parse(Console.ReadLine());
        b = double.Parse(Console.ReadLine());
        c = double.Parse(Console.ReadLine());
        Console.WriteLine("MEDIA = " + $"{((a * 2 + b * 3 + c * 5)/10):0.0}"); 
    }
}