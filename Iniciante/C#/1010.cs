using System;
class URI {
    static void Main(string[] args) { 
        string[] pecas1 = Console.ReadLine().Split(' ');
        int cp1 = int.Parse(pecas1[0]);
        int np1 = int.Parse(pecas1[1]);
        double v1 = double.Parse(pecas1[2]);
        
        string[] pecas2 = Console.ReadLine().Split(' ');
        int cp2 = int.Parse(pecas2[0]);
        int np2 = int.Parse(pecas2[1]);
        double v2 = double.Parse(pecas2[2]);
        
        Console.WriteLine("VALOR A PAGAR: R$ " + $"{(np1 * v1 + np2 * v2):0.00}");
    }
}