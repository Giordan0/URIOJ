#include <iostream>
#include <array>
using namespace std;

int main() {
    std::array<int,3> v;
    for(int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    
    for(int i = 1; i < 3; i++) {
        int j = i;
        while(j > 0){
            if(v[j - 1] <= v[j]) {
                int temp;
                temp = v[j];
                v[j] = v[j - 1];
                v[j - 1] = temp;
            }
            j--;
        }
    }
    
    int a, b, c;
    char f;
    a = v[0];
    b = v[1];
    c = v[2];
    
    if(a >= (b + c))
        cout << "Invalido" << endl;
    
    else {
        if(a*a == (b*b + c*c)) f = 'S';
        else f = 'N';
        
        if(a == b && b == c) {
            cout << "Valido-Equilatero" << endl;
            cout << "Retangulo: " << f << endl;
        }
            
        
        else if((a == b && b != c)  || (a == c && c != b) || (b == c && c != a)) {
            cout << "Valido-Isoceles" << endl;
            cout << "Retangulo: " << f << endl;
        }
        
        else {
            cout << "Valido-Escaleno" << endl;
            cout << "Retangulo: " << f << endl;
        }
    }
    return 0;
}