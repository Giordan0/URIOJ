using System;
class URI {
    static void Main(string[] args) { 
        string[] input = Console.ReadLine().Split(' ');
        double a = double.Parse(input[0]);
        double b = double.Parse(input[1]);
        double c = double.Parse(input[2]);
        Console.WriteLine("TRIANGULO: " + $"{((a * c)/2):0.000}");
        Console.WriteLine("CIRCULO: " + $"{((3.14159 * c * c)):0.000}");
        Console.WriteLine("TRAPEZIO: " + $"{(((a + b) * c)/2):0.000}");
        Console.WriteLine("QUADRADO: " + $"{(b * b):0.000}");
        Console.WriteLine("RETANGULO: " + $"{(a * b):0.000}");
    }
}