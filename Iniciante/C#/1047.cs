using System;
class URI {
    static void Main(string[] args) { 
        string[] input = Console.ReadLine().Split(' ');
        int init = int.Parse(input[0]);
        int minit = int.Parse(input[1]);
        int end = int.Parse(input[2]);
        int mend = int.Parse(input[3]);
        int a = init * 60 + minit;
        int b = end * 60 + mend;
        if(init >= end) {
            if(minit >= mend)
                Console.WriteLine("O JOGO DUROU " + (((24*60 - a) + b) - ((24*60 - a) + b)%60)/60 + " HORA(S) E " + ((24*60 - a) + b)%60 + " MINUTO(S)");
            else
                Console.WriteLine("O JOGO DUROU " + Math.Abs(init - end) + " HORA(S) E " + ((24*60 - a) + b)%60 + " MINUTO(S)");
        }
            
        else {
            if(minit >= mend)
                Console.WriteLine("O JOGO DUROU " + ((b - a) - (b - a)%60)/60 + " HORA(S) E " + (b - a)%60 + " MINUTO(S)");
            else
                Console.WriteLine("O JOGO DUROU " + Math.Abs(init - end) + " HORA(S) E " + (b - a)%60 + " MINUTO(S)");
        }
    }   
}