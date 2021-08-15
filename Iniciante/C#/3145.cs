using System;
class URI {
    static void Main(string[] args) {
        string[] input = Console.ReadLine().Split(' ');
        double n = double.Parse(input[0]);
        double x = double.Parse(input[1]);
        Console.WriteLine((x/(n + 2)).ToString("0.00"));
    }   
}