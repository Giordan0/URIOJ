#include <iostream>
using namespace std;

int main() {
    int a = 0, g = 0, d = 0, c;
    
    while (c != 4) {
        cin >> c;
        switch (c){
            case 1:
                a++;
            break;
            
            case 2:
                g++;
            break;
            
            case 3:
                d++;
            break;
        }
    }
    
    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << a << endl;
    cout << "Gasolina: " << g << endl;
    cout << "Diesel: " << d << endl;
    return 0;
}