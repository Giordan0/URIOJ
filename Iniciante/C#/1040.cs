using System;
class URI {
    static void Main(string[] args) { 
        string[] input = Console.ReadLine().Split(' ');
        double n1 = double.Parse(input[0]);
        double n2 = double.Parse(input[1]);
        double n3 = double.Parse(input[2]);
        double n4 = double.Parse(input[3]);
        
        double media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1)/10;
        Console.WriteLine("Media: " + Math.Round(media, 1).ToString("0.0"));
        
        if(media >= 7)
            Console.WriteLine("Aluno aprovado.");
        else if(media < 5)
            Console.WriteLine("Aluno reprovado.");
        else {
            double exame = double.Parse(Console.ReadLine());
            Console.WriteLine("Aluno em exame.");
            Console.WriteLine("Nota do exame: " + Math.Round(exame, 1).ToString("0.0"));
            if((media + exame)/2 >= 5)
                Console.WriteLine("Aluno aprovado.");
            else
                Console.WriteLine("Aluno reprovado.");
            Console.WriteLine("Media final: " + Math.Round((media + exame)/2, 1).ToString("0.0"));
        }
    }
}