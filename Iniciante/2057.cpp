#include <iostream>
using namespace std;

int main() {
    int s, t, f, h;
    cin >> s >> t >> f;
    if(s == 0) s = 24;
    h = s + f + t;
    if(h >= 24) h = h - 24;
    cout << h << endl;
    return 0;
}