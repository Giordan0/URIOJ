using System;
class URI {
    static void Main(string[] args) { 
        string[] input = Console.ReadLine().Split(' ');
        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);
        int c = int.Parse(input[2]);
        Console.WriteLine((((a + b + Math.Abs(a - b))/2) + c + Math.Abs((((a + b + Math.Abs(a - b))/2)) - c))/2 + " eh o maior");
    }
}