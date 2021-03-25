#include <iostream>
using namespace std;

int main() {
    int t, r;
    string sh, rj;
    cin >> t;
    for(int i = 1; i <= t; i++) {
        cin >> sh >> rj;
        if(sh == "papel") {
            if(rj == "pedra") r = 1;
            else if(rj == "tesoura") r = 2;
            else if(rj == "lagarto") r = 2;
            else if(rj == "Spock") r = 1;
            else r = 3;
        }
        
        else if(sh == "pedra") {
            if(rj == "papel") r = 2;
            else if(rj == "tesoura") r = 1;
            else if(rj == "lagarto") r = 1;
            else if(rj == "Spock") r = 2;
            else r = 3;
        }
        
        else if(sh == "tesoura") {
            if(rj == "pedra") r = 2;
            else if(rj == "papel") r = 1;
            else if(rj == "lagarto") r = 1;
            else if(rj == "Spock") r = 2;
            else r = 3;
        }
        
        else if(sh == "lagarto") {
            if(rj == "pedra") r = 2;
            else if(rj == "tesoura") r = 2;
            else if(rj == "papel") r = 1;
            else if(rj == "Spock") r = 1;
            else r = 3;
        }
        
        else {
            if(rj == "pedra") r = 1;
            else if(rj == "tesoura") r = 1;
            else if(rj == "lagarto") r = 2;
            else if(rj == "papel") r = 2;
            else r = 3;
        }

        if(r == 1) cout << "Caso #" << i << ": Bazinga!" << endl;
        else if(r == 2) cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        else cout << "Caso #" << i << ": De novo!" << endl;
    }
    return 0;
}