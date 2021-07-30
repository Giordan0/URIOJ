#include <iostream>
using namespace std;

int main() {
    int flav[6], sort[6], c = 0;
    for(int i = 0; i < 6; i++)
        cin >> flav[i];
    for(int i = 0; i < 6; i++)
        cin >> sort[i];
    
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 6; j++) {
            if(flav[i] == sort[j]) c++;
        }
    }
    
    switch(c) {
        case 3:
            cout << "terno" << endl;
        break;
        case 4:
            cout << "quadra" << endl;
        break;
        case 5:
            cout << "quina" << endl;
        break;
        case 6:
            cout << "sena" << endl;
        break;
        default:
            cout << "azar" << endl;
        break;
    }
    return 0;
}