#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n, x, y, mx;
    int f1, f2, f3;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x >> y;
        f1 = ((3 * x) * (3 * x)) + (y * y);
        f2 = 2 * (x * x) + ((5 * y) * (5 * y));
        f3 = -100 * x + pow(y, 3);
        mx = max(f1, max(f2, f3));
        if(mx == f1) cout << "Rafael ganhou" << endl;
        else if(mx == f2) cout << "Beto ganhou" << endl;
        else cout << "Carlos ganhou" << endl;
    }
    return 0;
}