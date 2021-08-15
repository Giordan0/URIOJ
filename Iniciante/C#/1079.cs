using System;
class URI {
    static void Main(string[] args) { 
        int n = int.Parse(Console.ReadLine());
        for(int i = 0; i < n; i++) {
            string[] input = Console.ReadLine().Split(' ');
            double a = double.Parse(input[0]);
            double b = double.Parse(input[1]);
            double c = double.Parse(input[2]);
            Console.WriteLine(Math.Round((a*2 + b*3 + c*5)/10, 1).ToString("0.0"));
        }
    }   
}