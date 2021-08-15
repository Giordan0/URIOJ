using System;
class URI {
    static void Main(string[] args) { 
        string[] input = Console.ReadLine().Split(' ');
        int h = int.Parse(input[0]);
        int z = int.Parse(input[1]);
        int l = int.Parse(input[2]);
        int mx = Math.Max(h, Math.Max(z, l));
        int mn = Math.Min(h, Math.Min(z, l));
        if(h > mn && h < mx) Console.WriteLine("huguinho");
        else if(z > mn && z < mx) Console.WriteLine("zezinho");
        else Console.WriteLine("luisinho");
    }   
}