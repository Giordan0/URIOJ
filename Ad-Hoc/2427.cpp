#include <iostream>
using namespace std;

int main() {
    int l, out = 4;
    cin >> l;
    while(l >= 2) {
        l /= 2;
        out *= 4;
    }
    cout << out/4 << endl;
    return 0;
}