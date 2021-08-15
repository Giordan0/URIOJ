using System;
class URI {
    static void Main(string[] args) { 
        int pa = 0, im = 0, pos = 0, neg = 0;
        for(int i = 0; i < 5; i++) {
            int a = int.Parse(Console.ReadLine());
            if(a%2 == 0) pa++;
            else im++;
            if(a > 0) pos++;
            else if (a < 0) neg++;
        }
        Console.WriteLine(pa + " valor(es) par(es)");
        Console.WriteLine(im + " valor(es) impar(es)");
        Console.WriteLine(pos + " valor(es) positivo(s)");
        Console.WriteLine(neg + " valor(es) negativo(s)");
    }   
}