#include <iostream>
using namespace std;

int main() {
    int q, y = 0, n = 0;
    cin >> q;
    for(int i = 0; i < q; i++) {
        int o;
        cin >> o;
        if(o == 0) y++;
        else n++;
    }
    if(y > n) cout << "Y" << endl;
    else cout << "N" << endl;
    return 0;
}