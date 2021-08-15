using System;
class URI {
    static void Main(string[] args) { 
        double n = double.Parse(Console.ReadLine());
        
        if(n <= 2000)
            Console.WriteLine("Isento");
        else if(n <= 3000) 
            Console.WriteLine("R$ " + Math.Round((n - 2000)*0.08, 2).ToString("0.00"));
        else if(n <= 4500) 
            Console.WriteLine("R$ " + Math.Round((n - 3000)*0.18 + (1000)*0.08, 2).ToString("0.00"));
        else
            Console.WriteLine("R$ " + Math.Round((n - 4500)*0.28 + (1500)*0.18 + (1000)*0.08, 2).ToString("0.00"));
    }   
}