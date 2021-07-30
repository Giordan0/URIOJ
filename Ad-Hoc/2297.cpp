#include <iostream>
using namespace std;

int main() {
    int r, a, b, t = 1;
    while(cin >> r && r != 0) {
        int ra = 0, rb = 0;
        for(int i = 0; i < r; i++) {
            cin >> a >> b;
            ra += a;
            rb += b;
        }
        cout << "Teste " << t << endl;
        if(ra > rb) cout << "Aldo" << endl << endl;
        else cout << "Beto" << endl << endl;
        t++;
    }
    return 0;
}