using System;
class URI {
    static void Main(string[] args) { 
        string[] input = Console.ReadLine().Split(' ');
        double[] v = new double[3];
        v[0] = double.Parse(input[0]);
        v[1] = double.Parse(input[1]);
        v[2] = double.Parse(input[2]);
        
        for(int i = 1; i < 3; i++) {
            int j = i;
            while(j > 0){
                if(v[j - 1] <= v[j]) {
                    double temp;
                    temp = v[j];
                    v[j] = v[j - 1];
                    v[j - 1] = temp;
                }
                j--;
            }
        }
        
        double a, b, c;
        a = v[0];
        b = v[1];
        c = v[2];
        
        if(a >= (b + c))
        Console.WriteLine("NAO FORMA TRIANGULO");
        
        else {
            if(a*a == (b*b + c*c))
                Console.WriteLine("TRIANGULO RETANGULO");
        
            else if(a*a > (b*b + c*c))
                Console.WriteLine("TRIANGULO OBTUSANGULO");
                
            else
                Console.WriteLine("TRIANGULO ACUTANGULO");
            
            if(a == b && b == c)
                Console.WriteLine("TRIANGULO EQUILATERO");
            
            else if((a == b && b != c)  || (a == c && c != b) || (b == c && c != a))
                Console.WriteLine("TRIANGULO ISOSCELES");
        }
    }
}