#include <iostream>
using namespace std;

int main() {
    int n, c = 0;
    cin >> n;
    bool f = true;
    char k, temp = 'A';
    for(int i = 0; i < n; i++) {
        while(cin >> k) {
            if(k == 'C' && temp == 'D' ) {f = false;}
            temp = k;
        }
        if(f) c++;
        f = true;
    }
    cout << c << endl;
    return 0;
}