using System;
class URI {
    static void Main(string[] args) { 
        int n = int.Parse(Console.ReadLine());
        int _in = 0, _out = 0;
        for(int i = 0; i < n; ++i) {
            int x = int.Parse(Console.ReadLine());
            if(x >= 10 && x <= 20)
                _in++;
            else
                _out++;
        }
        Console.WriteLine(_in + " in");
        Console.WriteLine(_out + " out");   
    }   
}