#include <iostream>
using namespace std;

int main() {
    int h, m;
    while(cin >> h >> m) {
        int hora = h/30;
        int min = m/6;
        if(hora < 10) {
            if(min < 10) cout << "0" << hora << ":" << "0" << min << endl;
            else cout << "0" << hora << ":"  << min << endl;
        }
        
        else {
            if(min < 10) cout << hora << ":" << "0" << min << endl;
            else cout << hora << ":"  << min << endl;
        }
    }
    return 0;
}