using System;
class URI {
    static void Main(string[] args) { 
        double x = double.Parse(Console.ReadLine());
        int calc, temp, temp2, temp3;
        
        calc = (int) x;
        x = 100*x;
        temp3 = (int) x;
        
        Console.WriteLine("NOTAS:");
        temp = calc%100;
        Console.WriteLine((calc - temp)/100 + " nota(s) de R$ 100.00");
        
        temp2 = temp%50;
        Console.WriteLine((temp - temp2)/50 + " nota(s) de R$ 50.00");
        
        temp = temp2%20;
        Console.WriteLine((temp2 - temp)/20 + " nota(s) de R$ 20.00");

        temp2 = temp%10;
        Console.WriteLine((temp - temp2)/10 + " nota(s) de R$ 10.00");
        
        temp = temp2%5;
        Console.WriteLine((temp2 - temp)/5 + " nota(s) de R$ 5.00");
        
        temp2 = temp%2;
        Console.WriteLine((temp - temp2)/2 + " nota(s) de R$ 2.00");
        
        Console.WriteLine("MOEDAS:");
        temp = temp2%1;
        Console.WriteLine((temp2 - temp)/1 + " moeda(s) de R$ 1.00");
        
        temp3 = temp3%100;
        Console.WriteLine(temp3/50 + " moeda(s) de R$ 0.50");
        
        temp3 = temp3%50;
        Console.WriteLine(temp3/25 + " moeda(s) de R$ 0.25");
        
        temp3 = temp3%25;
        Console.WriteLine(temp3/10 + " moeda(s) de R$ 0.10");
        
        temp3 = temp3%10;
        Console.WriteLine(temp3/5 + " moeda(s) de R$ 0.05");
        
        temp3 = temp3%5;
        Console.WriteLine(temp3/1 + " moeda(s) de R$ 0.01");
    }
}