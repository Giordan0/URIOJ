using System;
class URI {
    static void Main(string[] args) { 
        double a, b;
        a = double.Parse(Console.ReadLine());
        b = double.Parse(Console.ReadLine());
        Console.WriteLine("MEDIA = " + $"{((a * 3.5 + b * 7.5)/11):0.00000}"); 
    }
}