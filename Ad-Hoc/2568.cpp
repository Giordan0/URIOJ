#include <iostream>
using namespace std;

int main() {
    int d, i, x, f;
    cin >> d >> i >> x >> f;
    f = f - d;
    if(f%2 == 0) {
        if(d%2 == 0) cout << i << endl;
        else cout << i + x << endl;
    }
    else  {
        if(d%2 == 0) cout << i - x << endl;
        else cout << i << endl;
    }
    return 0;
}