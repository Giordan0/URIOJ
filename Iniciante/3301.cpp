#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int h, z, l, mx, mn;
    cin >> h >> z >> l;
    mx = max(h, max(z, l));
    mn = min(h, min(z, l));
    if(h > mn && h < mx) cout << "huguinho" << endl;
    else if(z > mn && z < mx) cout << "zezinho" << endl;
    else cout << "luisinho" << endl;
    return 0;
}