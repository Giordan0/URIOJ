using System;
class URI {
    static void Main(string[] args) { 
        string[] input = Console.ReadLine().Split(' ');
        double a = double.Parse(input[0]);
        double b = double.Parse(input[1]);
        double c = double.Parse(input[2]);
        double d;
        
        if(a != 0) {
            d = (b*b) - (4 * a * c);
            if(d <= 0)
                Console.WriteLine("Impossivel calcular");
                
            else {
                Console.WriteLine("R1 = " + $"{((-b + Math.Sqrt(d))/(2*a)):0.00000}");
                Console.WriteLine("R2 = " + $"{((-b - Math.Sqrt(d))/(2*a)):0.00000}");
            }
        }
        
        else 
            Console.WriteLine("Impossivel calcular");
    }
}