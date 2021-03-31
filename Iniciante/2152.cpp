#include <iostream>
using namespace std;

int main() {
    int t, h, m, o;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> h >> m >> o;
        if(h < 10) cout << "0" << h << ":";
        else cout << h << ":";
        
        if(m < 10) cout << "0" << m;
        else cout << m;
        
        if(o == 1) cout << " - A porta abriu!" << endl;
        else cout << " - A porta fechou!" << endl;
    }
    return 0;
}