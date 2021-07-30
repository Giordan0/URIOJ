#include <iostream>
using namespace std;

int mdc(int a, int b) {
    int r;
    while(b != 0) {
        r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main() {
    int n, f1, f2;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> f1 >> f2;
        cout << mdc(f1, f2) << endl;
    }
    return 0;
}