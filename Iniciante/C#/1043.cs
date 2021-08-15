using System;
class URI {
    static void Main(string[] args) { 
        string[] input = Console.ReadLine().Split(' ');
        double a = double.Parse(input[0]);
        double b = double.Parse(input[1]);
        double c = double.Parse(input[2]);
        
        if(a < b + c && b < c + a && c < a + b)
            Console.WriteLine("Perimetro = " + Math.Round(a + b + c, 1).ToString("0.0"));
        else
            Console.WriteLine("Area = " + Math.Round(((a + b) * c)/2, 1).ToString("0.0"));
    }   
}