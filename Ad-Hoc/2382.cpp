#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int l, a, p, r;
    cin >> l >> a >> p >> r;
    double diag = sqrt((l*l) + (a*a) + (p*p));
    if(diag <= r*2) cout << "S" << endl;
    else cout << "N" << endl;
    return 0;
}