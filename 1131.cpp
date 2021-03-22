#include <iostream>
using namespace std;

int main() {
    int c, q, vi = 0, vg = 0, e = 0, gi, gg;
    c = -1;
    
    while(c != 2) {
        cin >> gi >> gg;
        q++;
        if(gi > gg) vi++;
        else if(gg > gi) vg++;
        else e++;
        do {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
        } while (cin >> c && c != 2 && c != 1);
    }
    
    cout << q << " grenais" << endl;
    cout << "Inter:" << vi << endl;
    cout << "Gremio:" << vg << endl;
    cout << "Empates:" << e << endl;
    if(vi > vg) cout << "Inter venceu mais" << endl;
    else if(vg > vi) cout << "Gremio venceu mais" << endl;
    else cout << "Nao houve vencedor" << endl;

    return 0;
}