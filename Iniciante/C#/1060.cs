using System;
class URI {
    static void Main(string[] args) { 
        int c = 0;
        for(int i = 0; i < 6; i++) {
            double a = double.Parse(Console.ReadLine());
            if(a > 0) c++;
        }
        Console.WriteLine(c + " valores positivos");
    }   
}