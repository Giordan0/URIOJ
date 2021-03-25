#include <iostream>
#include <array>
using namespace std;

int main() {
    std::array<double,3> v;
    for(int i = 0; i < 3; i++) {
        cin >> v[i];
    }
    
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
        cout << "NAO FORMA TRIANGULO" << endl;
    
    else {
        if(a*a == (b*b + c*c))
            cout << "TRIANGULO RETANGULO" << endl;
    
        else if(a*a > (b*b + c*c))
            cout << "TRIANGULO OBTUSANGULO" << endl;
            
        else
            cout << "TRIANGULO ACUTANGULO" << endl;
        
        if(a == b && b == c)
            cout << "TRIANGULO EQUILATERO" << endl;
        
        else if((a == b && b != c)  || (a == c && c != b) || (b == c && c != a))
            cout << "TRIANGULO ISOSCELES" << endl;
    }
    
    return 0;
}