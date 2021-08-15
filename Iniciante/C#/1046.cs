using System;
class URI {
    static void Main(string[] args) { 
        string[] input = Console.ReadLine().Split(' ');
        int init = int.Parse(input[0]);
        int end = int.Parse(input[1]);
        
        if(init >= end)
            Console.WriteLine("O JOGO DUROU " + (24 - init + end) + " HORA(S)");
        else
            Console.WriteLine("O JOGO DUROU " + Math.Abs(init - end) + " HORA(S)");
    }   
}