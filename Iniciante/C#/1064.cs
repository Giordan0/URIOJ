using System;
class URI {
    static void Main(string[] args) { 
        double c = 0, s = 0;
        for(int i = 0; i < 6; i++) {
            double a = double.Parse(Console.ReadLine());
            if(a >= 0) {
                c++;
                s += a;
            }
        }
        Console.WriteLine(c + " valores positivos");
        Console.WriteLine(Math.Round(s/c, 1).ToString("0.0"));
    }   
}