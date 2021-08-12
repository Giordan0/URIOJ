using System;
class URI {
    static void Main(string[] args) { 
        int x = int.Parse(Console.ReadLine());
        int temp, temp2;
        Console.WriteLine(x);
        
        temp = x%100;
        Console.WriteLine((x - temp)/100 + " nota(s) de R$ 100,00");
        
        temp2 = temp%50;
        Console.WriteLine((temp - temp2)/50 + " nota(s) de R$ 50,00");
        
        temp = temp2%20;
        Console.WriteLine((temp2 - temp)/20 + " nota(s) de R$ 20,00");

        temp2 = temp%10;
        Console.WriteLine((temp - temp2)/10 + " nota(s) de R$ 10,00");
        
        temp = temp2%5;
        Console.WriteLine((temp2 - temp)/5 + " nota(s) de R$ 5,00");
        
        temp2 = temp%2;
        Console.WriteLine((temp - temp2)/2 + " nota(s) de R$ 2,00");
        
        temp = temp2%1;
        Console.WriteLine((temp2 - temp)/1 + " nota(s) de R$ 1,00");
    }
}