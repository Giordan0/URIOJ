using System;
class URI {
    static void Main(string[] args) { 
        string s1 = Console.ReadLine();
        string s2 = Console.ReadLine();
        string s3 = Console.ReadLine();
        
        if(s1 == "vertebrado") 
            if(s2 == "ave") 
                if(s3 == "carnivoro") 
                    Console.WriteLine("aguia");
                else
                    Console.WriteLine("pomba");
            
            else
                if(s3 == "onivoro") 
                    Console.WriteLine("homem");
                else
                    Console.WriteLine("vaca");
        
        else
            if(s2 == "inseto") 
                if(s3 == "hematofago") 
                    Console.WriteLine("pulga");
                else
                    Console.WriteLine("lagarta");
            
            else
                if(s3 == "hematofago") 
                    Console.WriteLine("sanguessuga");
                else
                    Console.WriteLine("minhoca");
    }   
}