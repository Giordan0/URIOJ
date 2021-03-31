#include <iostream>
using namespace std;

int main() {
    int m, d;
    int y[] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    while(cin >> m) {
        cin >> d;
        if(d == 25 && m == 12) cout << "E natal!" << endl;
        else if(d > 25 && m == 12) cout << "Ja passou!" << endl;
        else if(d == 24 && m == 12) cout << "E vespera de natal!" << endl;
        else {
            int r = 0;
            for(int i = 1; i < m; i++)
               r += y[i];
            r += d;
            r = 360 - r;
            cout << "Faltam " << r << " dias para o natal!" << endl;
        }
    }
    return 0;
}