#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, sba1[3], sba2[3];
    double qs = 0, qb = 0, qa = 0, ts = 0, tb = 0, ta = 0;
    string s1;
    std::cout << std::fixed << std::setprecision(2);
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> s1;
        for(int j = 0; j < 3; j++) 
            cin >> sba1[j];
        qs += sba1[0];
        qb += sba1[1];
        qa += sba1[2];
            
        for(int j = 0; j < 3; j++) 
            cin >> sba2[j];
        ts += sba2[0];
        tb += sba2[1];
        ta += sba2[2];    
    }
    
    cout << "Pontos de Saque: " << (ts/qs) * 100 << " %." << endl;
    cout << "Pontos de Bloqueio: " << (tb/qb) * 100 << " %." << endl;
    cout << "Pontos de Ataque: " << (ta/qa) * 100 << " %." << endl;
    return 0;
}