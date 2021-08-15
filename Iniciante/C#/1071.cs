using System;
class URI {
    static void Main(string[] args) { 
        int x = int.Parse(Console.ReadLine());
        int y = int.Parse(Console.ReadLine());
        int s = 0;
        for(int i = Math.Min(x, y) + 1; i < Math.Max(x, y); ++i)
            if(Math.Abs(i)%2 != 0) s += i;
        Console.WriteLine(s);
    }   
}