using System;
class URI {
    static void Main(string[] args) { 
        double n;
        n = double.Parse(Console.ReadLine());
        Console.WriteLine("VOLUME = " + $"{((4.0/3) * 3.14159 * (n * n * n)):0.000}");
    }
}