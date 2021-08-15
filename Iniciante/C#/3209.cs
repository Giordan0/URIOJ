using System;
class URI {
    static void Main(string[] args) { 
        int n = int.Parse(Console.ReadLine());
        for(int i = 0; i < n; i++) {
            string[] input = Console.ReadLine().Split(' ');
            int s = 0;
            int k = int.Parse(input[0]);
            for(int j = 0; j < k; j++) {
                int o = int.Parse(input[j+1]);
                s += o;
            }
            Console.WriteLine(s - k + 1);
        }
    }   
}