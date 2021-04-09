#include <iostream>
using namespace std;

int main() {
    int n, h, p = 0;
    int b = 0, a = 0, m = 0, d = 0;
    int cb = 0, ca = 0, cm = 0, cd = 0;
    cin >> n;
    string e, g;
    for(int i = 0; i < n; i++) {
        cin >> e >> g >> h;
        if(g == "bonecos") b += h;
        else if(g == "arquitetos") a += h;
        else if(g == "musicos") m += h;
        else if(g == "desenhistas") d += h;
    }
    p = (b/8) + (a/4) + (m/6) + (d/12);
    cout << p << endl;
    return 0;
}