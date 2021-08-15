using System;
class URI {
    static void Main(string[] args) { 
        int n, h, p = 0;
        int b = 0, a = 0, m = 0, d = 0;
        n = int.Parse(Console.ReadLine());
        for(int i = 0; i < n; i++) {
            string[] input = Console.ReadLine().Split(' ');
            string g = input[1];
            h = int.Parse(input[2]);
            if(g == "bonecos") b += h;
            else if(g == "arquitetos") a += h;
            else if(g == "musicos") m += h;
            else if(g == "desenhistas") d += h;
        }
        p = (b/8) + (a/4) + (m/6) + (d/12);
        Console.WriteLine(p);
    }   
}