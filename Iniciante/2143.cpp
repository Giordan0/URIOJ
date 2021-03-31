#include <iostream>
using namespace std;

int main() {
    int t, n, s = 0;
    cin >> t;
    while(t != 0) {
        for(int i = 0; i < t; i++) {
            cin >> n;
            if(n%2 != 0) s = (n-1)* 2 + 1;
            else s = (n-2)*2 + 2;
            cout << s << endl;
        }
        cin >> t;
    }
    return 0;
}