using System;
class URI {
    static void Main(string[] args) {
        string input;
        while(!string.IsNullOrEmpty(input = Console.ReadLine())){
            int n = int.Parse(input);
            if(n%100 == 0) Console.WriteLine(n/100); 
            else Console.WriteLine((n/100) + 1);
        }
    }  
}