using System;
class URI {
    static void Main(string[] args) { 
        int s = int.Parse(Console.ReadLine());
        Console.WriteLine((s/3600) + ":" + (s%3600)/60 + ":" + (s%60));
    }
}