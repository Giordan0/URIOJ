using System;
class URI {
    static void Main(string[] args) { 
        string[] input1 = Console.ReadLine().Split(' ');
        double x1 = double.Parse(input1[0]);
        double y1 = double.Parse(input1[1]);
        
        string[] input2 = Console.ReadLine().Split(' ');
        double x2 = double.Parse(input2[0]);
        double y2 = double.Parse(input2[1]);
        
        Console.WriteLine($"{Math.Sqrt(Math.Pow((x2 - x1), 2) + Math.Pow((y2 - y1), 2)):0.0000}");
    }
}