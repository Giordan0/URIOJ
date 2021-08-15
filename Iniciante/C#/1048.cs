using System;
class URI {
    static void Main(string[] args) { 
        double s = double.Parse(Console.ReadLine());

        if(s <= 400) {
            Console.WriteLine("Novo salario: " + Math.Round(s + s*0.15, 2).ToString("0.00"));
            Console.WriteLine("Reajuste ganho: " + Math.Round(s*0.15, 2).ToString("0.00"));
            Console.WriteLine("Em percentual: 15 %");
        }
            
        else if(s > 400 && s <= 800) {
            Console.WriteLine("Novo salario: " + Math.Round(s + s*0.12, 2).ToString("0.00"));
            Console.WriteLine("Reajuste ganho: " + Math.Round(s*0.12, 2).ToString("0.00"));
            Console.WriteLine("Em percentual: 12 %");
        }
        
        else if(s > 800 && s <= 1200) {
            Console.WriteLine("Novo salario: " + Math.Round(s + s*0.1, 2).ToString("0.00"));
            Console.WriteLine("Reajuste ganho: " + Math.Round(s*0.1, 2).ToString("0.00"));
            Console.WriteLine("Em percentual: 10 %");
        }
        
        else if(s > 1200 && s <= 2000) {
            Console.WriteLine("Novo salario: " + Math.Round(s + s*0.07, 2).ToString("0.00"));
            Console.WriteLine("Reajuste ganho: " + Math.Round(s*0.07, 2).ToString("0.00"));
            Console.WriteLine("Em percentual: 7 %");
        }
        
        else {
            Console.WriteLine("Novo salario: " + Math.Round(s + s*0.04, 2).ToString("0.00"));
            Console.WriteLine("Reajuste ganho: " + Math.Round(s*0.04, 2).ToString("0.00"));
            Console.WriteLine("Em percentual: 4 %");
        }
    }   
}