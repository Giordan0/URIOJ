using System;
class URI {
    static void Main(string[] args) { 
        string[] input = Console.ReadLine().Split(' ');
        int c = int.Parse(input[0]);
        int q = int.Parse(input[1]);
        
        switch(c) {
            case 1:
            Console.WriteLine("Total: R$ " + $"{(q * 4):0.00}");
            break;
            case 2:
            Console.WriteLine("Total: R$ " + $"{(q * 4.5):0.00}");
            break;
            case 3:
            Console.WriteLine("Total: R$ " + $"{(q * 5):0.00}");
            break;
            case 4:
            Console.WriteLine("Total: R$ " + $"{(q * 2):0.00}");
            break;
            case 5:
            Console.WriteLine("Total: R$ " + $"{(q * 1.5):0.00}");
            break;
        }
    }
}