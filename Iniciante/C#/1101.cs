using System;
class URI {
    static void Main(string[] args) { 
        int s = 0;
        string[] input = Console.ReadLine().Split(' ');
        int n = int.Parse(input[0]);
        int m = int.Parse(input[1]);
        while(n > 0 && m > 0) {
            if(n > m) {
                for(int i = m; i <= n; i++) {
                  s += i;
                  Console.Write(i + " ");
                }
              Console.WriteLine("Sum=" + s);
              s = 0;
            }
            
            else {
                for(int i = n; i <= m; i++) {
                  s += i;
                  Console.Write(i + " ");
                }
              Console.WriteLine("Sum=" + s);
              s = 0; 
            }
            input = Console.ReadLine().Split(' ');
            n = int.Parse(input[0]);
            m = int.Parse(input[1]); 
        }
    }   
}