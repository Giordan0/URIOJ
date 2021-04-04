#include <iostream>
using namespace std;

int main() {
    int n, h, d, g;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> h >> d >> g;
        if(h >= 200 && h <= 300) {
            if(d >= 50 && g >= 150) cout << "Sim" << endl;
            else cout << "Nao" << endl;
        }
        else cout << "Nao" << endl;
    }
    return 0;
}