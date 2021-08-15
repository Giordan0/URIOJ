using System;
class URI {
    static void Main(string[] args) { 
        int c = 0;
        for(int i = 0; i < 5; i++) {
            int a = int.Parse(Console.ReadLine());
            if(a%2 == 0) c++;
        }
        Console.WriteLine(c + " valores pares");
    }   
}