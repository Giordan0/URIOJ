using System;
class URI {
    static void Main(string[] args) { 
        string[] input = Console.ReadLine().Split(' ');
        int x = int.Parse(input[0]);
        int y = int.Parse(input[1]);
        int c = 0;
        for(int i = 1; i <= y; i++) {
            c++;
            if(c == x) {
                Console.WriteLine(i);
                c = 0;
            }
            else Console.Write(i + " ");
        }
    }   
}