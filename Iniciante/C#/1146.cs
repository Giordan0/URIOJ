using System;
class URI {
    static void Main(string[] args) { 
        int c = 0;
        int x = int.Parse(Console.ReadLine());
        while(x != 0) {
            for(int i = 1; i <= x; i++) {
                c++;
                if(c == x) {
                    Console.WriteLine(i);
                    c = 0;
                }
                else Console.Write(i + " ");
            }
            x = int.Parse(Console.ReadLine());
        }
    }   
}