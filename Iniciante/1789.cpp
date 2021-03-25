#include <iostream>
using namespace std;

int main() {
    int l;
    while(cin >> l) {
        int v, n = 0;
        for(int i = 0; i < l; i++) {
            cin >> v;
            if(v < 10 && n <= 1) n = 1;
            else if(v < 20 && n <= 2) n = 2;
            else n = 3;
        }
        cout << n << endl;
    }
    return 0;
}