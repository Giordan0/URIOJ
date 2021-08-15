using System;
class URI {
    static void Main(string[] args) { 
        int n = int.Parse(Console.ReadLine());
        for(int i = 2; i <= 10000; i+=n) 
            Console.WriteLine(i);
    }   
}