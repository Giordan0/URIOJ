using System;
class URI {
    static void Main(string[] args) {
        double r = double.Parse(Console.ReadLine());
        Console.WriteLine(Math.Round((3.14 * r) * 2, 2).ToString("0.00"));
    }   
}