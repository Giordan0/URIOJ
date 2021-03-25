#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    std::cout << std::fixed << std::setprecision(1);
    
    double media;
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1)/10;
    cout << "Media: "<< media << endl;
    
    if(media >= 7)
        cout << "Aluno aprovado."<< endl;
    
    else if(media < 5)
        cout << "Aluno reprovado."<< endl;
    
    else{
        cout << "Aluno em exame."<< endl;
        double exame;
        cin >> exame;
        cout << "Nota do exame: "<< exame << endl;
        if((media + exame)/2 >= 5)
            cout << "Aluno aprovado."<< endl;
        
        else
            cout << "Aluno reprovado."<< endl;
            
        cout << "Media final: "<< (media + exame)/2 << endl;
    }
    
    return 0;
}