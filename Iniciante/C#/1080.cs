using System;
class URI {
    static void Main(string[] args) { 
        int max = 0, c = 0;
        for(int i = 1; i <= 100; i++) {
            int n = int.Parse(Console.ReadLine());
            if(n >= max) {
                c = i;
                max = n;
            }
            
        }
        Console.WriteLine(max);
        Console.WriteLine(c);
    }   
}