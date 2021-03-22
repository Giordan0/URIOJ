#include <iostream>
using namespace std;

int main() {
    int t, pa, pb;
    double g1, g2;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> pa >> pb >> g1 >> g2;
        if(g1 * 100 < g2 * 100)
            cout << "Mais de 1 seculo." << endl;
        else {
            g1 /= 100;
            g2 /= 100;
            int j = 0;
            for(; pa <= pb && j < 101; j++) {
                pa += pa * g1;
                pb += pb * g2;
            }
            
            if(j > 100)
                cout << "Mais de 1 seculo." << endl;
            else
                cout << j << " anos." << endl;
        }
    }
    return 0;
}