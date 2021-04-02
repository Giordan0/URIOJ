#include <iostream>
using namespace std;

int main() {
    double n;
    while(cin >> n) {
        int a, c = 0;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a == 1) c++;
        }
        if(c >= n * 2/3) cout << "impeachment" << endl;
        else cout << "acusacao arquivada" << endl;
    }
    return 0;
}