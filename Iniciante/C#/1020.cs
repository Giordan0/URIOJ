using System;
class URI {
    static void Main(string[] args) { 
        int d = int.Parse(Console.ReadLine());
        Console.WriteLine((d/365) + " ano(s)");
        Console.WriteLine((d%365)/30 + " mes(es)");
        Console.WriteLine((d%365)%30 + " dia(s)");
    }
}