using System;
class URI {
    static void Main(string[] args) { 
        string s1 = Console.ReadLine();
        string s2 = Console.ReadLine();
        if(s1.Length < s2.Length)
            Console.WriteLine("no");
        else
            Console.WriteLine("go");
    }   
}