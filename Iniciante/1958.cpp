#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long double x;
    cin >> x;
    if(x == 0) {
        if(!signbit(x)) printf("+%.4LE\n", x);
        else printf("%.4LE\n", x);
    }
    else if(x > 0) printf("+%.4LE\n", x);
    else printf("%.4LE\n", x);
    return 0;
}