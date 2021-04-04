#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int xm[3], xj[3], dm[3], dj[3], sj = 0, sm = 0;
        for(int j = 0; j < 3; j++) {
            cin >> xj[j] >> dj[j];
            sj += xj[j] * dj[j];
        }
            
        for(int j = 0; j < 3; j++) {
            cin >> xm[j] >> dm[j];
            sm += xm[j] * dm[j]; 
        }
 
        if(sj > sm) cout << "JOAO" << endl;
        else if(sm >= sj) cout << "MARIA" << endl;
    }
    return 0;
}