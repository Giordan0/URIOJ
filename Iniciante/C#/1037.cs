using System;
class URI {
    static void Main(string[] args) { 
        double n = double.Parse(Console.ReadLine());
        if(n < 0 || n > 100)
            Console.WriteLine("Fora de intervalo");
        else if(n >= 0 && n <= 25)
            Console.WriteLine("Intervalo [0,25]");
        else if(n <= 50)
            Console.WriteLine("Intervalo (25,50]");
        else if(n <= 75)
            Console.WriteLine("Intervalo (50,75]");
        else if(n <= 100)
            Console.WriteLine("Intervalo (75,100]");
    }
}