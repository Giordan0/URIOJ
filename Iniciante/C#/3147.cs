using System;
class URI {
    static void Main(string[] args) {
        string[] input = Console.ReadLine().Split(' ');
        int h, e, a, o, w, x;
        h = int.Parse(input[0]);
        e = int.Parse(input[1]);
        a = int.Parse(input[2]);
        o = int.Parse(input[3]);
        w = int.Parse(input[4]);
        x = int.Parse(input[5]);
        int bem = h + e + a + x + 1;
        int mal = o + w;
        if(bem > mal) Console.WriteLine("Middle-earth is safe.");
        else Console.WriteLine("Sauron has returned.");
    }   
}