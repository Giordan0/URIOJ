using System;
class URI {
    static void Main(string[] args) { 
        int n = int.Parse(Console.ReadLine());
        for(int i = 1; i <= n; i++) {
            int p = int.Parse(Console.ReadLine());
            Console.WriteLine("resposta " + i + ": " + p);
        }
    }   
}