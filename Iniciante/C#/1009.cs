using System;
class URI {
    static void Main(string[] args) { 
        double s , t;
        string nome;
        nome = Console.ReadLine();
        s = double.Parse(Console.ReadLine());
        t = double.Parse(Console.ReadLine());
        Console.WriteLine("TOTAL = R$ " + $"{Math.Round(s+t*0.15, 2, MidpointRounding.ToEven):0.00}");
    }
}