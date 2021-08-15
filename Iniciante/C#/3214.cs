using System;
class URI {
    static void Main(string[] args) { 
        string[] input = Console.ReadLine().Split(' ');
        int e = int.Parse(input[0]);
        int f = int.Parse(input[1]);
        int c = int.Parse(input[2]);
        int refri = 0;
        int g = e + f;
        while(g >= c) {
            refri += g/c;
            g = g/c + g%c;
        }
        Console.WriteLine(refri);
    }   
}