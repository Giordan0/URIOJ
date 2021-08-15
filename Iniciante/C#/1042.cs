using System;
class URI {
    static void Main(string[] args) { 
        string[] input = Console.ReadLine().Split(' ');
        int[] a = new int[3];
        a[0] = int.Parse(input[0]);
        a[1] = int.Parse(input[1]);
        a[2] = int.Parse(input[2]);
        int[] b = new int[3];
        Array.Copy(a, b , 3);
        
        for(int i = 1; i < 3; i++) {
            int j = i;
            while(j > 0){
                if(a[j - 1] >= a[j]) {
                    int temp;
                    temp = a[j];
                    a[j] = a[j - 1];
                    a[j - 1] = temp;
                }
                j--;
            }
        }
        
        for(int i = 0; i < 3; i++)
            Console.WriteLine(a[i]);
        Console.WriteLine();
        for(int i = 0; i < 3; i++)
            Console.WriteLine(b[i]);
    }
}