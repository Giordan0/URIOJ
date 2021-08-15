using System;
class URI {
    static void Main(string[] args) { 
        string n = Console.ReadLine();
        bool f = false;
        for(int i = 1; i < n.Length; i++) {
            if(n[i] == '3' && n[i-1] == '1') {
                f = true;
                break;
            }
        }
        if(f) Console.WriteLine(n + " es de Mala Suerte");
        else Console.WriteLine(n + " NO es de Mala Suerte");
    }   
}