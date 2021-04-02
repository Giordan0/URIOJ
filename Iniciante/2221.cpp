#include <iostream>
using namespace std;

int main() {
    int t, bonus, dab[3], gua[3];
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> bonus;
        for(int i = 0; i < 3; i++) 
            cin >> dab[i];
        for(int i = 0; i < 3; i++) 
            cin >> gua[i];
        
        int valorGolpeD = 0, valorGolpeG = 0;
        valorGolpeD = (dab[0] + dab[1])/2;
        valorGolpeG = (gua[0] + gua[1])/2;
        if(dab[2]%2 == 0) valorGolpeD += bonus;
        if(gua[2]%2 == 0) valorGolpeG += bonus;
        
        if(valorGolpeD > valorGolpeG) cout << "Dabriel" << endl;
        else if(valorGolpeD < valorGolpeG) cout << "Guarte" << endl;
        else cout << "Empate" << endl;
    }
    return 0;
}