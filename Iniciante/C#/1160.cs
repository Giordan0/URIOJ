using System;
class URI {
    static void Main(string[] args) { 
        int t = int.Parse(Console.ReadLine());
        for(int i = 0; i < t; i++) {
            string[] input = Console.ReadLine().Split(' ');
            int pa = int.Parse(input[0]);
            int pb = int.Parse(input[1]);
            double g1 = double.Parse(input[2]);
            double g2 = double.Parse(input[3]);
            
            if(g1 * 100 < g2 * 100)
                Console.WriteLine("Mais de 1 seculo.");
            else {
                g1 /= 100;
                g2 /= 100;
                int j = 0;
                for(; pa <= pb && j < 101; j++) {
                    pa += Convert.ToInt32(Math.Floor(pa * g1));
                    pb += Convert.ToInt32(Math.Floor(pb * g2));
                }
                
                if(j > 100)
                    Console.WriteLine("Mais de 1 seculo.");
                else
                    Console.WriteLine(j + " anos.");
            }
        }
    }   
}