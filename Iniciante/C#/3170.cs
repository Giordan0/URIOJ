using System;
class URI {
    static void Main(string[] args) { 
        int b = int.Parse(Console.ReadLine());
        int g = int.Parse(Console.ReadLine());
        if(g%2 != 0) g -= 1;
        g = g/2;
        if(b >= g) Console.WriteLine("Amelia tem todas bolinhas!");
        else Console.WriteLine("Faltam " + (g - b) + " bolinha(s)");
    }   
}