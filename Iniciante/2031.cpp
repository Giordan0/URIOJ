#include <iostream>
using namespace std;

int main() {
    int n, f;
    string s1, s2;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s1 >> s2;
        if(s1 == "ataque") {
            if(s2 == "pedra") f = 1;
            else if(s2 == "papel") f = 1;
            else f = 5;
        }
        
        else if(s1 == "pedra") {
            if(s2 == "ataque") f = 2;
            else if(s2 == "papel") f = 1;
            else f = 4;
        }
        
        else {
            if(s2 == "ataque") f = 2;
            else if(s2 == "pedra") f = 2;
            else f = 3;
        }
        
        switch(f) {
            case 1:
            cout << "Jogador 1 venceu" << endl;
            break;
            case 2:
            cout << "Jogador 2 venceu" << endl;
            break;
            case 3:
            cout << "Ambos venceram" << endl;
            break;
            case 4:
            cout << "Sem ganhador" << endl;
            break;
            case 5:
            cout << "Aniquilacao mutua" << endl;
            break;
        }
    }
    return 0;
}