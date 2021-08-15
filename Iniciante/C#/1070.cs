using System;
class URI {
    static void Main(string[] args) { 
        int n = int.Parse(Console.ReadLine());
        if(n%2 == 0) n++;
        for(int i = n, j = 0; j < 6; i += 2, j++) Console.WriteLine(i);
    }   
}