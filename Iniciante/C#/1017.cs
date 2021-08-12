using System;
class URI {
    static void Main(string[] args) { 
        double h = double.Parse(Console.ReadLine());
        double v = double.Parse(Console.ReadLine());
        Console.WriteLine($"{(h * v)/12:0.000}");
    }
}