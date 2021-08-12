using System;
class URI {
    static void Main(string[] args) { 
        double x = double.Parse(Console.ReadLine());
        double y = double.Parse(Console.ReadLine());
        Console.WriteLine($"{(x/y):0.000}" + " km/l");
    }
}